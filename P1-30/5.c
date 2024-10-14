#include<stdio.h>
#include<string.h>
struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = {"C语言程序设计",101};
    b1.price = 91;
    strcpy(b1.name,"从入门到入土");
    printf("%s\n",b1.name);
    return 0;
}