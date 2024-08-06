#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print(int (*p)[5],int x, int y)
{
    int i ,j;
    for(i = 0; i < x; i++)
    {   for(j = 0; j < y; j++)
        {
            //printf("%d ", *(*(p + i) + j));
            printf("%d ", (*(p + i))[j]);
            //printf("%d ", *(p[i] + j));
            //printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}

int add(int x,int y)
{
    return x+y;
}

void (*signal(int, void(*)(int)))(int);
typedef void(*pfun_t)();

void swap(void* ele1, void* ele2, int width)
{
    ;
}
void my_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
    ;
}

int main()
{
    int arr1[2] = {1,2};
    int arr2[2] = {3,4};
    int (*p1) [2] = &arr1;
    int *p2[2] = {arr1,arr2};
    int (*p3[2])[5];
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    //print(arr,3,5);
    (*(void(*)())0)();
    int (*pf)(int,int) = &add;
    int (*pfarr[5])(int,int) = {pf};
    int (*(*ppfarr)[5])(int,int) = &pfarr;
    //qsort();
    int a[] = {1,2,3,4};
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(a+0));
    printf("%d\n",sizeof(*a));
    printf("%d\n",sizeof(a+1));
    printf("%d\n",sizeof(a[1]));
    printf("%d\n",sizeof(&a));
    printf("%d\n",sizeof(*&a));
    printf("%d\n",sizeof(&a+1));
    printf("%d\n",sizeof(&a[0]));
    printf("%d\n",sizeof(&a[0]+1));
    char arr4[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%d\n",sizeof(arr4));
    printf("%d\n",sizeof(arr4+0));
    printf("%d\n",sizeof(*arr4));
    printf("%d\n",sizeof(arr4[1]));
    printf("%d\n",sizeof(&arr4));
    printf("%d\n",sizeof(&arr4+1));
    printf("%d\n",sizeof(&arr4[0]+1));

    char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%d\n",strlen(arr3));
    printf("%d\n",strlen(arr3+0));
    printf("%d\n",strlen(*arr3));
    printf("%d\n",strlen(arr3[1]));
    printf("%d\n",strlen(&arr3));
    printf("%d\n",strlen(&arr3+1));
    printf("%d\n",strlen(&arr3[0]+1));
    return 0;
}