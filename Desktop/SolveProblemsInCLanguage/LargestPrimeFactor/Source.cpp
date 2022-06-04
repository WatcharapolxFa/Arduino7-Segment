#include<stdio.h>
#define number 600851475143
int main()
{
    long long num = 0;
    int maxPrime = 0, oodPrime = 3; // จำนวนเฉพาะ
    num = number;
    printf("num =  %d \n ", num);
    while (num % 2 == 0)
    {
        maxPrime = 2;
        num = num / 2;
    }
    printf("maxPrime = %d \t number /= %d  \n", maxPrime, number);
    printf(" --------------------------  \n");
    while (num != 1)
    {
        while (num % oodPrime == 0)
        {
            maxPrime = oodPrime;
            printf("maxPrime = %d \t oodPrime = %d  \n", maxPrime, oodPrime);
            printf(" --------------------------  \n\n");
            num /= oodPrime;
            printf("num = %d \t oodPrime /= %d  \n", num, oodPrime);
            printf(" --------------------------  \n\n");
        }
        oodPrime += 2;

    }

    printf(" \t\t\t\t-- Ans >> Max prime = %d -- \n", maxPrime);
    printf("\t\t\t\t  ----- By Watcharapol -----\n");
    printf("\t\t\t----- I started to fall in love with this. -----\n");





    return 0;
}