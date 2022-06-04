#include<stdio.h>

int positive(int, int);

int main()
{	
	struct ans
	{
		int num[2] , sum = 0;
	}avg;
	
	for (int i = 0; i < 2; i++) {

		scanf_s("%d", &avg.num[i]);
	}
	avg.sum = positive(avg.num[0], avg.num[1]);
	printf("%d", avg.sum);

}

int positive(int a , int b)
{
	int c = 0;
	c = a + b;
	return c;
}