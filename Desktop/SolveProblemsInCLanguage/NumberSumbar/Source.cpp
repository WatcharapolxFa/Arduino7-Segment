#include <stdio.h>
#include <string.h>
void numbnumber(void);
struct number
{
    int fa, sum;
    char sumnum;
    char num[50];
}numb;
int main()
{
    printf("Input number: ");
    gets_s(numb.num);
    numb.fa = strlen(numb.num);
    printf("OutPut \n ");
    numbnumber();

}

void numbnumber()
{
    for (int j = 0; j < numb.fa; j++) {

        numb.sumnum = numb.num[j];

        if (numb.num[j] != ' ')
        {
            numb.sum = 0;


            for (int i = 0; i < numb.fa; i++) {

                if (numb.sumnum == numb.num[i])
                {
                    numb.sum++;
                    numb.num[i] = ' ';
                }

            }
            printf(" \t Number : %c = SumNumber %d number.\n", numb.sumnum, numb.sum);
        }


    }


}