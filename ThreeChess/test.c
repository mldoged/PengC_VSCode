//测试三子棋游戏
#include"game.h"
void menu()
{
    printf("********************\n");
    printf("**1.play    0.exit**\n");
    printf("********************\n"); 
}
void game()
{
    char ret = 0;
    char board[ROW][COL] = {0};
    InitBoard(board,ROW,COL);
    //打印棋盘
    DisplayBoard(board,ROW,COL);
    while(1)
    {
        //玩家下棋
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //判断玩家是否赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
        //电脑下棋
        computerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
         //判断电脑是否赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
        {
            printf("玩家赢！\n");
        }
    else if(ret == '#')
        {
            printf("电脑赢！\n");
        }
    else
        {
            printf("平局~\n");
        }    

}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择->");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
            printf("三子棋\n");
            game();
            break;
            case 0:
            printf("退出");break;
            default:
            printf("输入错误");break;
        }
    }while(input);
    
    return 0;
}