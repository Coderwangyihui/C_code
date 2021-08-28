#pragma once
#define row 7
#define col 7//column
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu(void);
void game(void);
void Initializetable(char board[][col], int Row, int Col);
void Printtable(char board[][col],int  Row, int Col);
void Playermove(char board[][col], int Row, int Col);
void Computermove(char board[][col], int Row, int Col);
char Judgement(char board[][col], int Row, int Col);
int Isfull(char board[][col], int Row, int Col);