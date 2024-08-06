#include"game.h"
void menu()
{
    printf("********************\n");
    printf("*1、play     0、exit\n");
    printf("********************\n");
}
void game()
{
    char mine[ROWS][COLS] = {0} ;//保存雷的信息
    char show[ROWS][COLS] = {0} ;//保存雷的信息
    InitBoard(mine,ROWS,COLS,'0');//初始化
    InitBoard(show,ROWS,COLS,'*');//初始化
    DisplayBoard(mine,ROW,COL);//打印棋盘
    //布置雷
    SetMine(mine,ROW,COL);
    DisplayBoard(mine,ROW,COL);//打印棋盘
    //打印棋盘
    //扫雷
    FindMine(mine,show,ROW,COL);

    printf("扫雷\n");
}
int main()
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择->");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误！\n");
            break;
        }
    } while (input);
    
    return 0;
}