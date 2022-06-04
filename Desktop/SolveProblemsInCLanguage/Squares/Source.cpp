#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS



double AreaRectangle(double w, double l)
{
    double sum = 0;
    sum = w * l;
    return sum;
}

double Washingmachine(double num_Washingmachine)
{
    double ans = 0;
    ans = ((num_Washingmachine / 2.5) / 4);
    return ans;
}

double Dryingmachine(double num_Dryinggmachine)
{
    double Ans = 0;
    Ans = num_Dryinggmachine;
    return Ans;
}

double Space_Laundry(double sumSpace)
{
    double sum = 0;
    sum = sumSpace / 2;

    return sum;
}

int main()
{
    double sumArea = 0;
    double width = 0;
    double legth = 0;
    double Washing_machine = 0;
    double Dryingg_machine = 0;
    double Space = 0;
    char str[50];
    printf(" Please specify name : ");
    gets_s(str);
    printf("Hi \t %s \t welcome to Laundry112  \n",str);



    printf("Please specify a width :");
    if (scanf_s("%lf", &width))
    {
        printf("Please specify a legth :");
        if (scanf_s("%lf", &legth))
        {
            sumArea = AreaRectangle(width, legth);
            Washing_machine = Washingmachine(sumArea);
            Dryingg_machine = Dryingmachine(Washing_machine);
            Space = Space_Laundry(sumArea);
            printf(" \t\t\t\t-- Ans >> AreaRectangle  = %.2lf Square meter -- \n", sumArea);
            printf(" \t\t\t\t-- Ans >> Washingmachine  = %.2lf   \n", Washing_machine);
            printf(" \t\t\t\t-- Ans >> Dryingmachine  = %.2lf \n", Dryingg_machine);
            printf(" \t\t\t\t-- Ans >> Space  = %.2lf \n", Space);
        }
        else
        {
            printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
            printf("\t\t\t\t\t ----- End Program. ----- \n ");
        }
    }
    else
    {
        printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
        printf("\t\t\t\t\t ----- End Program. ----- \n ");
    }
    return 0;

}