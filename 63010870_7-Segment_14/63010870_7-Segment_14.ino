//PIN MODE
#define sigmentA 3
#define sigmentB 4
#define sigmentC 10
#define sigmentD 6
#define sigmentE 7
#define sigmentF 8
#define sigmentG 9
#define sigmentDP  5 
int digit1 = A1;
int digit2 = A2;
int digit3 = A3;
int digit4 = A4;
void setup() {
  setpinMode(); 
  Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(A5); // read the input on analog pin 0
 float voltage = sensorValue * (10.0 / 1023.0); // Convert the analog reading (0 - 1023 to 0 - 5V)
  String chra;
  chra = voltage;

Serial.println(chra);
  

 char* caracter1 = &chra[0];
 char* caracter2 = &chra[1];
 char* caracter5 = &chra[2];
 char* caracter3 = &chra[3];
 char* caracter4 = &chra[4];
 
 
  int num1;
  int num2;
  int num3;
  int num4;
 if(voltage == 10.00)
 {
  num1 = *caracter1;
  num2 = *caracter2;
  num3 = *caracter3;
  num4 = *caracter4;
 }
 if(voltage < 10.00)
 {
  num1 = 48;
  num2 = *caracter1;
  num3 = *caracter5;
  num4 = *caracter3;
 }
for(int i = 0 ; i<=25;i++)
{
  displaySegment(num1-48,digit4); 
  delay(2);
  displaySegment(num2-48,digit3); 
  delay(2);
  displaySegment(num3-48,digit2);
  delay(2); 
  displaySegment(num4-48,digit1); 
  delay(2);
  displaySegment(10,digit3); 
  delay(2);
}
 
}
void displayNumbernum()
{
  
}
void displaySegment(int numberToDisplay,int pos)
{

  switch(numberToDisplay)
  {
      case 0 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,LOW);
       digitalWrite(sigmentDP,LOW);
      break;
    case 1 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
       digitalWrite(sigmentDP,LOW);
      break;
    case 2 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,LOW);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
      break;
    case 3 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
       digitalWrite(sigmentDP,LOW);
      break;
    case 4 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
       digitalWrite(sigmentDP,LOW);
      break;
    case 5 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
       digitalWrite(sigmentDP,LOW);
      break;
    case 6 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
       digitalWrite(sigmentDP,LOW);
      break;
    case 7 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
       digitalWrite(sigmentDP,LOW);
      break;
    case 8 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
       digitalWrite(sigmentDP,LOW);
      break;
      case 9 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      digitalWrite(sigmentDP,LOW);
      break;
      case 10 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(pos, HIGH);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,LOW);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
      digitalWrite(sigmentDP,HIGH);
      break;
      
  } 

  
}
void setpinMode()
{
   pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(sigmentA,OUTPUT);
  pinMode(sigmentB,OUTPUT);
  pinMode(sigmentC,OUTPUT);
  pinMode(sigmentD,OUTPUT);
  pinMode(sigmentE,OUTPUT);
  pinMode(sigmentF,OUTPUT);
  pinMode(sigmentG,OUTPUT);
  pinMode(sigmentDP,OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
  pinMode(12,INPUT_PULLUP);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH); 
}
