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
  analogWrite(digit1, LOW);
  analogWrite(digit2, LOW);
  analogWrite(digit3, LOW);
  analogWrite(digit4, LOW);
}


void loop() {
    displayNumbernum();
}


void displayNumbernum(){
  int i = 1;
  for(i = 1;i<=4;i++)
  {
     displaySigment(i);
     delay(1); 
  }                                                     
                                                       
}
void displaySigment(int numberToDisplay)
{
 
  switch(numberToDisplay)
  {
    case 1 :
      digitalWrite(digit1,LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, HIGH);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
      break;
    case 2 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, HIGH);
      digitalWrite(digit4, LOW);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,LOW);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
      break;
    case 3 :
      digitalWrite(digit1,LOW );
      digitalWrite(digit2, HIGH);
      digitalWrite(digit3,LOW );
      digitalWrite(digit4, LOW);
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
      break;
    case 4 :
      digitalWrite(digit1, HIGH);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
       case 10 :
      digitalWrite(digit1, LOW);
      digitalWrite(digit2, LOW);
      digitalWrite(digit3, LOW);
      digitalWrite(digit4, LOW);
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,LOW);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
      break;
  }
  delay(1);  
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
