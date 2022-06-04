#include<stdio.h>
int sum(int a , int b ,int c)
{
	int ans = 0;
	ans = a + b + c;
	return ans;
}
int main()
{
	int num[4];
	if (scanf_s("%d", &num[0]))
	{
		if (scanf_s("%d", &num[1]))
		{


			if ((scanf_s("%d", &num[2])))
			{
				num[3] = sum(num[0], num[1], num[2]);
				if (0 < num[3] && num[3] <= 49)
				{
					printf_s("F");
				}
				else if (50 <= num[3] && num[3] <= 54)
				{
					printf_s("D");
				}
				else if (55 <= num[3] && num[3] <= 59)
				{
					printf_s("D+");
				}
				else if (60 <= num[3] && num[3] <= 64)
				{
					printf_s("C");
				}
				else if (65 <= num[3] && num[3] <= 69)
				{
					printf_s("C+");
				}
				else if (70 <= num[3] && num[3] <= 74)
				{
					printf_s("B");
				}
				else if (75 <= num[3] && num[3] <= 79)
				{
					printf_s("B+");
				}
				else if (80 <= num[3] && num[3] <= 100)
				{
					printf_s("A");
				}
				
			}
			else
			{
				printf_s("Please In Put Number \n End Program");
				
			}

		}
		else
		{
			printf_s("Please In Put Number \n End Program ");
		}


	}
	else
	{
		printf_s("Please In Put Number \n End Program ");
	}




	return 0;
}