
#include"contact.h"
void menu()
{
    printf("##############################\n");
    printf("##  1、add        2、del    ##\n");
    printf("##  3、search     4、modify ##\n");
    printf("##  5、show       6、sort   ##\n");
    printf("##         0、exit          ##\n");
    printf("##############################\n");
}
int main()
{
    struct Contact con = {{0},0};//创建通讯录
    int input = 1;
    InitContact(&con);//初始化数组
    do
    {
        menu();
        printf("请选择->");
        scanf("%d",&input);
        switch (input)
        {
        case ADD:
            AddContact(&con);//增加
            break;
        case DEL:
            DelContact(&con);//删除
            printf("del\n");
            break;
        case SERACH:
            SearchContact(&con);//查找并显示
            break;
        case MODIFY:
            ModifyContact(&con);
            break;
        case SHOW:
            ShowContact(&con);//显示所有成员
            break;
        case SORT:
            printf("sort\n");
            break;
        case EXIT:
            printf("退出通讯录\n");
            break;
        default:
            printf("选择错误！\n");
            break;
        }
    } while (input);
    
    return 0;
}