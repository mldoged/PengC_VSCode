#include<stdio.h>
#include<string.h>
struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = {"C���Գ������",101};
    b1.price = 91;
    strcpy(b1.name,"�����ŵ�����");
    printf("%s\n",b1.name);
    return 0;
}