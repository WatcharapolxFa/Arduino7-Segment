#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int check(int, int);
int main()
{

	char id[10], pass[6];
	int num = 0;
	do {
		printf("Enter your ID : ");
		for (int i = 0; i < 8; i++)
		{
			id[i] = getch();
			printf("%c", id[i]);
		}
		printf("\nEnter your Password : ");
		for (int j = 0; j < 4; j++)
		{
			pass[j] = getch();
			printf("*");
		}
		num = check(atoi(id), atoi(pass));
	} while (num == 0);







}

int check(int id, int pass)
{
	struct Admin
	{
		int id_admin;
		int pass_admin;

	}admin[] = { 63010870,1234,63010871,1234 };

	for (int i = 0; i < 2; i++) {

		if (admin[i].id_admin == id && admin[i].pass_admin == pass) {

			printf("\n\n************ Connected ************\n");
			return 1;
		}
		else if (admin[i].id_admin == id && admin[i].pass_admin != pass) {

			printf("\n\n******  Password is wrong . *****\n\n");

			return 0;
		}

	}
	printf("\n\n******  Id is wrong . *****\n\n");
	return 0;

}