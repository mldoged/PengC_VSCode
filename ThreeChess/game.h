#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int r,int c);
void computerMove(char board[ROW][COL],int r,int c);
//#电脑赢、*玩家赢、C继续、Q平局
char IsWin(char board[ROW][COL],int r,int c);