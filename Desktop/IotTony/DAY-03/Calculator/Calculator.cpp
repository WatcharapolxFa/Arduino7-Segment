#include "Calculator.h"

Calculator :: Calculator(){

}

void Calculator :: Fn1(int value1,int value2){
	Sum = value1 + value2;
}
void Calculator :: Fn2(int value1,int value2){
	Sum = value1 - value2;
}
void Calculator :: Fn3(int value1,int value2){
	Sum = value1 * value2;
}
void Calculator :: Fn4(int value1,int value2){
	Sum = value1 / value2;
}
