#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//初始化
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j< cols; j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)//显示棋盘
{
    int i,j;
    for(i = 0; i <= col; i++)
    {
        printf("%d ",i); 
    }//列上编号
    printf("\n");
    for(i = 1; i <= row; i++)
    {
        printf("%d ",i); //行前编号
        for(j = 1; j<= col; j++)
        {
           
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)//布置雷
{
    int count = MINE_COUNT;
    while(count)
    {

        int x = rand()%row+1;//1-9
        int y = rand()%col+1;
        if(board[x][y] == '0')
        {
            board[x][y] = '1'; 
            count--;
        }
    }
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    int i,j,count,sum=0;
    for(i =x-1; i<= x+1; i++)
    {
        for(j =y-1; j<= y+1; j++)
        {
            sum += mine[i][j];
        }
    }
    count = sum - 9*'0';
    return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x,y;
    int win = 0;
    while(win<row*col - MINE_COUNT)
    {
        printf("输入排查的雷的坐标->");
        scanf("%d%d", &x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            //排雷
            if(mine[x][y] == '1')//踩雷
            {
                printf("被炸死了！\n");
                DisplayBoard(mine,ROW,COL);
                break;
            }
            else//不是雷，计算x,y坐标周围雷的数量
            {
                int count = GetMineCount(mine,x,y);
                show[x][y] = count + '0';
                DisplayBoard(show,ROW,COL);
                win++;
            }
        }
        else
        {
            printf("所输入的坐标非法\n");
        }
    }
    if(win == row*col - MINE_COUNT)
        printf("恭喜排雷成功\n");
}