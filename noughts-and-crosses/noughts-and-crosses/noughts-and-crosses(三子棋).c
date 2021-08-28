#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"//包含了game.h头文件
int main()
{
	srand((unsigned int)time(NULL));
	int x;
	do
	{
		do
		{
			menu();
			scanf("%d", &x);
			switch (x)
			{
			case 1:
			{
				printf("game start\n");
				break;
			}
			case 0:
			{
				printf("game exit\n");
				break;
			}
			default:
				printf("error!\n");
				break;
			}
		} while (x != 0 && x != 1);//make sure the player input the right number
		if (x)
			game();//play game
		printf("\n");//a void line to seperate formal step from latter step
	} while (x);
	return 0;
}
void menu(void)
{
	printf("please choose:\n");
	printf("*************************\n");
	printf("*******1------play*******\n");
	printf("*******0------exit*******\n");
	printf("*************************\n");
}
//old brand of menu function
//void menu(void)
//{
//	int i,x=20;
//	for (i = 0;i < x;i++)
//		printf("*");
//	printf("\n");
//	printf("****   1.play   ****\n");
//	printf("****   0.exit   ****\n");
//	for (i = 0;i < x;i++)
//		printf("*");
//	printf("\n");
//}
void game(void)
{
	char a;
	char table[row][col];
	Initializetable(table, row, col);
	Printtable(table, row, col);
	while (1)
	{
		Playermove(table, row, col);
		Printtable(table, row, col);
		a = Judgement(table, row, col);
		switch (a)
		{
		case '*':
		{
			printf("Congratulations!You win\n");
			break;
		}
		case '#':
		{
			printf("Congratulations!You win\n");
			break;
		}
		case 'd':
		{
			printf("draw");
			break;
		}
		case 'c':
		{
			printf("\n");
			break;
		}
		}
		if (a != 'c')
			break;
		Computermove(table, row, col);
		Printtable(table, row, col);
		a = Judgement(table, row, col);
		switch (a)
		{
		case '*':
		{
			printf("Congratulations!You win\n");
			break;
		}
		case '#':
		{
			printf("Congratulations!You win\n");
			break;
		}
		case 'd':
		{
			printf("draw");
			break;
		}
		case 'c':
		{
			printf("\n");
			break;
		}
		}
		if (a != 'c')
			break;
		//playerwin-* computerwin-# draw-d continue-c
	}
	

}
