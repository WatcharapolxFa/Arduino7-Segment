int sigmentA = 3;
int sigmentB = 4;
int sigmentC = 10;
int sigmentD = 6;
int sigmentE = 7;
int sigmentF = 8;
int sigmentG = 9;
int sigmentDP = 5 ;


void setup() {
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
  pinMode(12,INPUT_PULLUP);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A4,HIGH);
}

void loop() {
  
    displayNumbernum();
}


void displayNumbernum()
{
   for(int digit = 0 ; digit <= 9 ; digit++){
    displaySigment(digit);
    delay(18);
}
}
void displaySigment(int numberToDisplay)
{

  switch(numberToDisplay)
  {
      case 0 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,LOW);
      break;
    case 1 :
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
      break;
    case 2 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,LOW);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
      break;
    case 3 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,HIGH);
      break;
    case 4 :
      digitalWrite(sigmentA,LOW);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
    case 5 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
    case 6 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,LOW);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
    case 7 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,LOW);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,LOW);
      digitalWrite(sigmentG,LOW);
      break;
    case 8 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,HIGH);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
      case 9 :
      digitalWrite(sigmentA,HIGH);
      digitalWrite(sigmentB,HIGH);
      digitalWrite(sigmentC,HIGH);
      digitalWrite(sigmentD,HIGH);
      digitalWrite(sigmentE,LOW);
      digitalWrite(sigmentF,HIGH);
      digitalWrite(sigmentG,HIGH);
      break;
      
  }
  delay(500);  

  
}
