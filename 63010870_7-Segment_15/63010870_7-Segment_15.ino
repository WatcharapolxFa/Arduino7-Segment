#define THERMISTOR A5 // thermistor pin
#define R0 10000.00 // Ω resistance at 25 Celsius
#define B 3435.00 // B: 3435 K the beta coefficient of the thermistor
#define R1 10000.00
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
float T0 = 25; // °C reference temp.
float ans = 0 ;
String tempc ;
void setup()
{
setpinMode();
  
T0 = T0 + 273.15; // conversion from Celsius to kelvin
Serial.begin(9600);
}



void loop() 
{

calculatetemp();

tempc = ans;



displayNumbernum();



}

void displayNumbernum()
{
 char* nums1 = &tempc[0];
 char* nums2 = &tempc[1];
 char* nums3 = &tempc[3];
 char* nums4 = &tempc[4];
 int TEMP[5];
 TEMP[0] = *nums1;
 TEMP[1] = *nums2;
 TEMP[2] = *nums3;
 TEMP[3] = *nums4;
//7segment(TEMP[0],TEMP[1],TEMP[2],TEMP[3]);
for (int i = 0 ;i<=50;i++)
 {
   displaySegment(TEMP[0]-48,digit4); 
  delay(2);
  displaySegment(TEMP[1]-48,digit3); 
  delay(2);
  displaySegment(TEMP[2]-48,digit2);
  delay(2); 
  displaySegment(TEMP[3]-48,digit1); 
  delay(2);
  displaySegment(10,digit3); 
  delay(2);
 }
}
/*void 7segment()
{
 displayNumbernum(int TEMP[0],int TEMP[1],int TEMP[2],int TEMP[3]]);
 for (int i = 0 ;i<=500;i++)
 {
   displaySegment(TEMP[0]-48,digit1); 
  delay(2);
  displaySegment(TEMP[1]-48,digit2); 
  delay(2);
  displaySegment(TEMP[2]-48,digit3);
  delay(2); 
  displaySegment(TEMP[3]-48,digit14); 
  delay(2);
  displaySegment(10,digit2); 
  delay(2);
  }

  
  }*/








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

void calculatetemp()
{
  float temp;
temp = 1023 - analogRead(THERMISTOR);
 ans = (temp * 57.05979)/1023;
Serial.println(ans);
return ans;

}
