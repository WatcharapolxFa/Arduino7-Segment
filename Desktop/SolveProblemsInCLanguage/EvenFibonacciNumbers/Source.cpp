#include<stdio.h>
int main()
{
	int num1 = 0, num2 = 0, sum_num12 = 0, sumAns = 0;
	num1 = num2 = sum_num12 = 1;
	printf("num1 = %d\tnum2 = %d\tsum_num12 = %d\n", num1, num2, sum_num12);
	for (; sum_num12 <= 4000000; sum_num12 = num1 + num2)
	{
		if (sum_num12 % 2 == 0)
		{
			sumAns += sum_num12;
		}
		num1 = num2;
		printf("\nnum1 = %d \t num2 = %d\n ", num1, num2);
		num2 = sum_num12;
		printf("\nnum2 = %d \t sum_num12 = %d \n ", num2, sum_num12);
		printf("\nsumAns = %d \n", sumAns);


	}
	printf(" \n\n\n \t\t\t Ans = %d \n", sumAns);
	printf("\t\t\t----- By Watcharapol -----\n");
	printf("\t\t\t----- I am very proud-----\n");



	return 0;
}