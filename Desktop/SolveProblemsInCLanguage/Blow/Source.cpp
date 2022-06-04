#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cctype>

struct Playgame
{
char shape;
char player, computer;
int cheeckround;
}go;



int OK() 
{
	int a = 0;
	printf("How many rounds to play :");
	scanf_s("%d",&go.cheeckround);
	getchar();
	a = go.cheeckround;
	return a;
}

char playerShape() {
	
	printf("\n[r]Rock , [p]Papre , [s]Cissors , [q]Quit \n");
	scanf_s("%c",&go.shape);
	getchar();
	return tolower(go.shape);
}

char computerShape()
{
	char cheeck[] = { 'r','p','s','q' };
	return cheeck[rand() % 3];
}
int main()
{
	char* shapee;
	int cheecks = 0;
	srand(time(NULL));
	cheecks = OK();
	
	for (int i = 0; i < go.cheeckround; i++)
	{
	
	go.player = playerShape();
	shapee = &go.player;
	go.computer = computerShape();		
		printf("Player ->\t %c \t Computer ->\t %c  \n", *shapee, go.computer);
		


			if (*shapee != 'q')
			{
				if (*shapee == go.computer)
				{
					printf("Tie \n");
				}
				else {
					if ((*shapee == 'r' && go.computer == 's') || (*shapee == 'p' && go.computer == 'r') || (*shapee == 's' && go.computer == 'p'))
					{
						printf("You Win\n");
					}
					else
					{
						printf("You lose\n");
					}
				}

			}
			else if(*shapee == 'q')
			{
				printf("GOOD BYE");
				break;
			}
	}
}