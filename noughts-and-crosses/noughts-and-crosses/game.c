#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initializetable(char board[][col], int Row, int Col)//initialize the board
{
	int i,j;
	for (i = 0;i < Row;i++)
	{
		for(j=0;j<Col;j++)
			board[i][j] = ' ';
	}
}
void Printtable(char board[][col], int  Row, int Col)
{
	int i, j;
	for (j = 0;j < Row;j++)
	{
		if (j < Row - 1)
		{
			for (i = 0;i < Col;i++)
			{
				if (i < Col - 1)
					printf(" %c |", board[j][i]);
				else
					printf(" %c ", board[j][i]);
			}
			printf("\n");
			for (i = 0;i < Col;i++)
			{
				if (i < Col - 1)
					printf("---|");
				else
					printf("---");
			}
			printf("\n");
		}
		else 
		{
			for (i = 0;i < Col;i++)
			{
				if (i < Col - 1)
					printf(" %c |", board[j][i]);
				else
					printf(" %c ", board[j][i]);
			}
			printf("\n");
		}
	}
}
void Playermove(char board[][col], int Row, int Col) 
{
	int a, b;
	while (1)
	{
		printf("Player move\n");
		scanf("%d %d", &a, &b);
		if (a >Row || b >Col || board[a-1][b-1] != ' ')
			printf("error!\n");
		else
			break;
	}
	board[a-1][b-1] = '*';
}
void Computermove(char board[][col], int Row, int Col)
{
	int x, y;
	printf("Computer move\n");
	while (1)
	{
		x = rand() % Row;
		y = rand() % Col;
		if (board[x][y] == ' ')
			break;
	}
	board[x][y] = '#';
}
char Judgement(char board[][col], int Row, int Col)
{
	int i,j,a, count = 0;//count is a varible for judgement
	/*if (board[0][i] == board[0][i + 1] && board[0][i + 1] == board[0][i + 2] && board[0][i] != ' ')
		return board[0][i];*/
	for (j = 0;j < row-2;j++)
	{
		for (i = 0;i < col - 2;i++)
		{
			if (board[j][i] == board[j][i + 1] && board[j][i + 1] == board[j][i + 2] && board[j][i] != ' ')
				count ++;
			if (board[j][i] == board[j + 1][i] && board[j + 1][i] == board[j + 2][i] && board[j][i] != ' ')
				count ++;
			if (board[j][i] == board[j + 1][i + 1] && board[j + 1][i + 1] == board[j + 2][i + 2] && board[j][i] != ' ')
				count ++;
			if (count)
				return board[j][i];
			else 
				if(a=Isfull(board, row, col))
				{
				return 'd';
				}
				else
					return 'c';
		}
	}
}
int Isfull(char board[][col], int Row, int Col)
{
	int i, j;
	for (i = 0;i < Row;i++)
	{
		for (j = 0;j < Col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}