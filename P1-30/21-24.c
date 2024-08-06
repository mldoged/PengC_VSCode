#include<stdio.h>
int mysrelen3(char *str)
{
    char *start = str;
    char *end = str;
    while(*end != '\0')
    {end ++;}
    return end - start;
}
int main()
{
    int a = 0x11223344;
    int* pa = &a;*pa = 0;
    char* pc = &a;*pc = 0;
    pa += 1;
    pc += 1;
    int arr1[10] = {0};
    for(int i = 0; i < 10; i++)
    {
        *(arr1+i) = 2;
        //printf("%d ",arr[i]);
    }
    //printf("\n");

    int arr2[10];
    int *ps = NULL;
    for(ps = &arr2[10]; ps > &arr2[0]; )
    {ps--;*ps = 1;}
    for(ps = &arr2[10-1]; ps >= &arr2[0]; ps--)
    {*ps = 1;}

    char arr3[] = "huang";
    printf("len = %d\n", mysrelen3(arr3));
    return 0;
}