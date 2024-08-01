#include<stdio.h>

void swap(int* pa,int* pb)
{ }
void print(int n)
{
    if(n>9)
        print(n/10);
    printf("%d ",n%10);
}
int mystrlen1(char* arr)
{
    int cou = 0;
    while(*arr != '\0')
    { 
        cou++,arr++;
    }
    return cou;
}
int mystrlen2(char* arr)
{
    if('\0' != *arr)
        return 1+mystrlen2(++arr);
    return 0;
}
int main()
{
    int a=10,b=20;
    int *pa = &a;
    swap(&a,&b);

    //int num = 0;
    //printf("输入数字");
    //scanf("%d",&num);
    //print(num);
    char arr[] = "huangshun";
    printf("%d\n",mystrlen2(arr));

    return 0;
}