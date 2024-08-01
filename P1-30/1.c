#include<stdio.h>
enum Sex
{
    male,
    female,
    secret
};
enum Sex s = male;
int main()
{
    printf("%f\n",(float)sizeof(int));
    char i=97;
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(double));
    //scanf("%d",&i);
    printf("%c\n",i);
    return 0;
}