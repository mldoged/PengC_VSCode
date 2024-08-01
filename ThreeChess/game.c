#include"game.h"
void InitBoard(char board[ROW][COL],int row,int col)//数组初始化
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             board[i][j] = ' ';
        }  
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)//打印棋盘
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
        {
            for(j=0; j<col; j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        } 
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)//玩家游戏过程
{
    int x,y;
    while(1)
    {
        printf("玩家走，输入行列坐标~\n");
        scanf("%d%d",&x,&y);
        if(x >= 1 && x<=row && y >= 1 && y<=col)
        {
            if(board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }   
            else
            {
                printf("该坐标已被占用，重新输入！\n");
            }
        }
        else
        {
            printf("坐标非法，重新输入!\n");
        }
    }
}

void computerMove(char board[ROW][COL],int row,int col)//电脑游戏过程
{
    int x,y;
    printf("电脑走~\n");
    while(1)
    {
        x = rand()%row;
        y = rand()%row;
        if(board[x-1][y-1] == ' ')
        {
            board[x-1][y-1] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL],int row,int col)//判断棋盘是否下满，1满0未满
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }   
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL],int row,int col)//判断谁赢
{
    int i;
    for(i = 0; i<=row; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];//横向
        }
    }
    for(i = 0; i<=col; i++)
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];//纵向
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
        {
            return board[1][1];//纵向
        }
    if(board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
    {
        return board[1][1];//纵向
    }
    if(IsFull(board, row, col) == 1)//棋盘下满平局
    {
        return 'Q';
    }
    return 'C';
}