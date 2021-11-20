#include "Calculator.h"

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    Calculator Me;
    Me.Fn1(50, 50);
    Serial.println(Me.sum);
    delay(500);
}