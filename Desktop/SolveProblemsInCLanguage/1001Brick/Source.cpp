#include <stdio.h>
#include <stdlib.h>
int main()

{
    printf(" InPut \n\n");
    struct area
    {
        int a, b, c, e, d;
        char brick[21][21];
        int block[21];

    }Brick;
    scanf("%d %d", &Brick.a, &Brick.b);

    for (Brick.c = 0; Brick.c < Brick.a; Brick.c++)

        scanf("%s", Brick.brick[Brick.c]);

    for (Brick.c = 0; Brick.c < Brick.b; Brick.c++)

        scanf("%d", &Brick.block[Brick.c]);

    for (Brick.e = 0; Brick.e < Brick.b; Brick.e++)

        if (Brick.block[Brick.e] > 0)
        {

            for (Brick.c = 0; Brick.c < Brick.a, Brick.brick[Brick.c][Brick.e] == '.'; Brick.c++);

            for (Brick.d = 0; Brick.d < Brick.block[Brick.e]; Brick.d++)

            {

                Brick.brick[Brick.c - 1][Brick.e] = '#';

                Brick.c--;

                if (Brick.c == 0)

                    break;

            }

        }printf("\n\nOutPut \n\n");

        for (Brick.c = 0; Brick.c < Brick.b; Brick.c++)

            printf("%s\n", Brick.brick[Brick.c]);
        return 0;

}