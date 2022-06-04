#include<stdio.h>
#include<iostream>
using namespace std;

struct charracter
{
    int num;
	float bottle;
	float avg;
	float sum;
	float an;
}poiter;


struct calculater
{
	int b[7];
	float taltosum = 0;
}calculater;

float inputnum()
{
	cout << "Hello, How many water bottles do you have ? : ";
	
	cin >> poiter.num;
	cout << "1 bottle can be packed ? : ";
	cin >> poiter.bottle;
	poiter.avg = poiter.num * poiter.bottle;
	return poiter.avg;
}
float calculat(float sum)
{
	float ans;
	if (sum < 5)
	{
		ans = sum * 2;
	}
	if (5 < sum && sum < 10)
	{
		ans = sum * 1.8;
	}
	if (10 < sum && sum < 50)
	{
		ans = sum * 1.6;
	}
	if (ans >= 50)
	{
		ans = sum * 1.5;
	}
	return ans;
}

float calculatbath(float B)
{
	int a;
	int total = 0;
	for (int i = 0; i < 7; i++)
	{
		if (i==0)
		{
			a = 1;
		}
		if (i == 1)
		{
			a = 2;
		}
		if (i == 2)
		{
			a = 5;
		}
		if (i ==3 )
		{
			a = 10;
		}
		if (i == 4 )
		{
			a = 20;
		}
		if (i == 5)
		{
			a = 50;
		}
		if (i == 6)
		{
			a = 100;
		}
		printf ("%d baht coin :",a);
		cin >> calculater.b[i];
		printf("\n");
		calculater.b[i] = calculater.b[i] * a;
		total = total + calculater.b[i];
	}
	return total; 

}
float calculatechange(float sum)
{
	float summm;
	summm =   sum- poiter.an;
	return summm;
}
int main()
{
	poiter.sum = inputnum();
	cout << "Total water volume : " << poiter.sum << endl;
	poiter.an= calculat(poiter.sum);

	cout << "Total amount : " << poiter.an << endl;
	cout << "Please tell me how to pay ? : " << endl;
	printf("\n");
	calculater.taltosum  =  calculatbath(poiter.an);
	float anss = calculatechange(calculater.taltosum);
	cout << "Get money :  " << calculater.taltosum << endl;
	

	cout << "Your change amount : " << anss << endl;

	
	return 0;
}