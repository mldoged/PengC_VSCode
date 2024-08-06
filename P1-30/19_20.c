#include<stdio.h>
int main()
{
    //0000 1111 /15
    //0000 0111/7
    int a = 0;
    int b = 2;
    int c = 5;
    int i = a++ && ++b && c++;
    printf("%d %d %d\n", a, b, c);
    int j = a++ || ++b || c++;
    printf("%d %d %d\n", a, b, c);
    char x = 3;
    char y = 127;
    char z = x + y;
    printf("%d\n", z);
    printf("%d\n",sizeof(double));
    printf("%d\n",c + --c);
    return 0;
}