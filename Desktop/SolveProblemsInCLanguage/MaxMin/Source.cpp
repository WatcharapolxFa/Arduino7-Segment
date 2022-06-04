#include<stdio.h>
int main()
{
	int num[6],max=0 , min=0 ;
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%d",&num[i]);
	}
	min = num[0];
	for (int j = 0; j < 6; j++)
	{
		if (min>num[j])
		{
			min = num[j];
		}
		else if(max<num[j])
		{
			max = num[j];
		}
	}
	printf_s("%d\n", min);
	printf_s("%d", max);
	return 0;
}