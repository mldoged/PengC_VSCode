#include<stdio.h>
#define MAX(X,Y) (X>Y?X:Y)
int main()
{ 
    unsigned int i=0;
    unsigned int b=~i;
    //printf("%u\n",b);
    int j = 10;
    int y = 20;
    int *p = &y;
    *p = 30;
    int sum = MAX(j,y);
    printf("%d\n",sum);
    return 0;
}