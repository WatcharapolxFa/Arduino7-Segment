/**
  Helloworld style, connect an ESP32 to IBM's Watson IoT Platform
  http://www.iotsharing.com/2017/05/how-to-use-mqtt-to-build-smart-home-arduino-esp32.html
  Author: Anthony Elder
  License: Apache License v2
  modify by Arkom Thaicharoen artchula@gmail.com
*/
#include <WiFi.h>
#include <PubSubClient.h>
#include "TonyS_X1.h"
#include "TonyS_X1_ExternalModule.h"

Adafruit_SHT31 sht31 = Adafruit_SHT31();


/* change it with your ssid-password */
const char* ssid = "----"; //"ชื่อเราเตอรบ้านทาน";
const char* password = "----"; //"password เราเตอรบ้านทาน";
/* this is the IP of PC/raspberry where you installed MQTT Server
  on Wins use "ipconfig"
  on Linux use "ifconfig" to get its IP address */
const char* mqtt_server = "137.116.141.158";

/*LED GPIO pin*/
const char led = IO12;

/* topics */
#define TEMP_TOPIC    "ID/room1/temp" //ID ใส่หมายเลขของท่าน
#define LED_TOPIC     "ID/room1/led" //ID ใส่หมายเลขของท่าน  //LED control 1=on, 0=off 

long lastMsg = 0;
char msg[20];

float temperature = 0;

/* create an instance of PubSubClient client */
WiFiClient espClient;
PubSubClient client(espClient);

void receivedCallback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message received: ");
  Serial.println(topic);

  Serial.print("payload: ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
  /* we got '1' -> on */
  if ((char)payload[0] == '1') {
    Tony.digitalWrite(led, HIGH); //---- Write HIGH to pin IO12 (LED_BUILTIN)
  } else {
    /* we got '0' -> on */
    Tony.digitalWrite(led, LOW); //---- Write HIGH to pin IO12 (LED_BUILTIN)
  }

}

void mqttconnect() {
  /* Loop until reconnected */
  while (!client.connected()) {
    Serial.print("MQTT connecting ...");
    /* client ID */
    String clientId = "ESP32Client";
    /* connect now */
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      /* subscribe topic with default QoS 0*/
      client.subscribe(LED_TOPIC);
    } else {
      Serial.print("failed, status code =");
      Serial.print(client.state());
      Serial.println("try again in 5 seconds");
      /* Wait 5 seconds before retrying */
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);

  
  Serial.println("SHT31 test");
  if (! sht31.begin(0x44)) {   // Set to 0x45 for alternate i2c addr
    Serial.println("Couldn't find SHT31");
    while (1) delay(1);
  }
  
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Tony.begin();  //----  begin Library
  /* set led as output to control led on-off */
  Tony.pinMode(led, OUTPUT); // set led as output

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  /* configure the MQTT server with IPaddress and port */
  client.setServer(mqtt_server, 1883);
  /* this receivedCallback function will be invoked
    when client received subscribed topic */
  client.setCallback(receivedCallback);
  /*start SHT31 */

}
void loop() {
  /* if client was disconnected then try to reconnect again */
  if (!client.connected()) {
    mqttconnect();
  }
  /* this function will listen for incomming
    subscribed topic-process-invoke receivedCallback */
  client.loop();
  /* we measure temperature every 3 secs
    we count until 3 secs reached to avoid blocking program if using delay()*/
  long now = millis();
  if (now - lastMsg > 3000) {
    lastMsg = now;
    /* read SHT31 sensor and convert to string */
    float temperature = sht31.readTemperature();
    float humidity = sht31.readHumidity();
/*
    if (! isnan(temperature)) {  // check if 'is not a number'
      Serial.print("Temp *C = "); Serial.println(temperature);
    } else {
      Serial.println("Failed to read temperature");
    }

    if (! isnan(humidity)) {  // check if 'is not a number'
      Serial.print("Hum. % = "); Serial.println(humidity);
    } else {
      Serial.println("Failed to read humidity");
    }
*/
    if (!isnan(temperature)) {
      snprintf (msg, 20, "%lf", temperature);
      /* publish the message */
      client.publish(TEMP_TOPIC, msg);
    }
  }


  
}
