#include<stdio.h>
#include<string.h>
int main()
{
    int num1 = 1;
    //scanf("%d",&num1);
    if(0 == num1)
    {
        printf("输0干什么？");
    }
    switch(num1)
    {
        case 3:printf("星期三");break;
        case 4:printf("星期四");break;
        case 1:printf("星期一");break;
        case 2:printf("星期二");break;
        
        default: printf("信息错误！");
    }
    // while(num1 <= 10)
    // {
    //     num1++;
    //     if(num1 == 3)
    //         continue;
    //     printf("heihei\n");
        
    // }
    //char ch = 0;
    //while((ch = getchar()) != EOF)
    //   putchar(ch);

    // int ret;
    // char password[20] = {};
    // scanf("%s",password);
    // while((getchar()) != '\n')
    // {
    //     ;
    // }
    // ret = getchar();//确认Y
    

    // int i=0;
    // int j=0;
    // for(;i<10;i++)
    // {
    //     for(;j<10;j++)
    //     {
    //         printf("haha\n");
    //     }
    // }

    char arr[] = "abcdef";
    int right1 = (sizeof(arr)/sizeof(arr[0]))-2;
    int right2 = strlen(arr)-1; 
    return 0;
}