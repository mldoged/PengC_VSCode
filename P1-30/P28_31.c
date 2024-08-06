#include<stdio.h>
#include<string.h>
int main()
{
    char i = -128;      //1000 0000
    printf("%u\n", i);  //1111 1111 1111 1111 1111 1111 1000 0000
    char arr[1000];
    int j = 0;
    for(j = 0; j < 1000; j++)
        arr[j] = -1 - j;
    printf("%d\n", strlen(arr));
    char* p1 = "abcdef";
    char* p2 = "abcdef";
    
    return 0;
}