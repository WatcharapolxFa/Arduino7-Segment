#include<stdio.h>
int main()
{
    int sum;
    int num1;
    num1 = sum = 0;
    for (num1 = 1; num1 < 1000; num1++)
    {
        if (((num1 % 3) == 0) || ((num1 % 5) == 0))
        {
            sum += num1;
        }
    }
    printf("Answer :  %d \n ", sum);
    printf(" ----- By Watcharapol -----\n ");
    return 0;
}