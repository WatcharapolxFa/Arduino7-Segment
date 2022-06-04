#include<stdio.h>
int main()
{ 
	int num1 = 0, num2 = 0, result = 0, revprod = 0, maximum = 0, recoil = 0;
	for (num1 = 100; num1 < 1000 ;num1++)
	{
		for (num2 = 100; num2 <1000 ;num2++)
		{
			result = num1 * num2;
			revprod = result;
			recoil = 0;
			while (revprod > 0)
			{
				recoil= recoil* 10 + revprod % 10;
				revprod /= 10;
			}
			if (recoil == result)
			{
				if (result > maximum)
				{
					maximum = result;
				}
			}
		}
	}
	printf("%d", maximum);
	return 0;
}