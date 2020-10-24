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
int i = 0 ;
  for(i=0;i<=250;i++)
  {
    displaySegment(6, digit1);
    delay(4);    
    }
   for(i=251;i<=500;i++)
  {
    displaySegment(3, digit1);
    delay(2);
    displaySegment(6, digit2);
    delay(2); 
    }
   for(i=501;i<=750;i++)
  {
    displaySegment(0, digit1);
    delay(1);
    displaySegment(3, digit2);
    delay(1);
    displaySegment(6, digit3);
    delay(1); 
    displaySegment(10, digit4);
    delay(1);
    }
       for(i=751;i<=1000;i++)
  {
    displaySegment(1, digit1);
    delay(1);
    displaySegment(0, digit2);
    delay(1);
    displaySegment(3, digit3);
    delay(1); 
    displaySegment(6, digit4);
    delay(1);
    }
    for(i=1001;i<=1250;i++)
  {
    displaySegment(0, digit1);
    delay(1);
    displaySegment(1, digit2);
    delay(1);
    displaySegment(0, digit3);
    delay(1); 
    displaySegment(3, digit4);
    delay(1);
    }
        for(i=1251;i<=1500;i++)
  {
    displaySegment(8, digit1);
    delay(1);
    displaySegment(0, digit2);
    delay(1);
    displaySegment(1, digit3);
    delay(1); 
    displaySegment(0, digit4);
    delay(1);
    }
    for(i=1501;i<=1750;i++)
  {
    displaySegment(7, digit1);
    delay(1);
    displaySegment(8, digit2);
    delay(1);
    displaySegment(0, digit3);
    delay(1); 
    displaySegment(1, digit4);
    delay(1);
    }
    for(i=1751;i<=2000;i++)
  {
    displaySegment(0, digit1);
    delay(1);
    displaySegment(7, digit2);
    delay(1);
    displaySegment(8, digit3);
    delay(1); 
    displaySegment(0, digit4);
    delay(1);
    }
    for(i=2001;i<=2250;i++)
  {
    displaySegment(10, digit1);
    delay(1);
    displaySegment(0, digit2);
    delay(1);
    displaySegment(7, digit3);
    delay(1); 
    displaySegment(8, digit4);
    delay(1);
    }
    for(i=2251;i<=2500;i++)
  {
    displaySegment(10, digit1);
    delay(1);
    displaySegment(10, digit2);
    delay(1);
    displaySegment(0, digit3);
    delay(1); 
    displaySegment(7, digit4);
    delay(1);
    }
        for(i=2501;i<=2750;i++)
  {
    displaySegment(10, digit1);
    delay(1);
    displaySegment(10, digit2);
    delay(1);
    displaySegment(10, digit3);
    delay(1); 
    displaySegment(0, digit4);
    delay(1);
    }
            for(i=2751;i<=3000;i++)
  {
    displaySegment(10, digit1);
    delay(1);
    displaySegment(10, digit2);
    delay(1);
    displaySegment(10, digit3);
    delay(1); 
    displaySegment(10, digit4);
    delay(1);
    }
    
                                                     
                                                       
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
      digitalWrite(sigmentDP,LOW);
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
