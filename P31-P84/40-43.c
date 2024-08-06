#include<stdio.h>

int main()
{
    int a1[3][4] = {0};
    /* printf("%d",sizeof(a));
    printf("%d",sizeof(a[0][0]));
    printf("%d",sizeof(a[0]));
    printf("%d",sizeof(a[0]+1));
    printf("%d",sizeof(*(a[0]+1)));
    printf("%d",sizeof(a+1));
    printf("%d",sizeof(*(a+1)));
    printf("%d",sizeof(&a[0]+1));
    printf("%d",sizeof(*(&a[0]+1)));
    printf("%d",sizeof(*a));
    printf("%d",sizeof(a[3])); */
    /* int a[5] = {1,2,3,4,5};
    int* ptr = (int*)(&a+1);
    printf("%d %d",*(a+1),*(ptr-1)); */
    /* int* ptr1 = (int*)(&a1 + 1);
    int* ptr2 = (int*)((int)a1 + 1);
    printf("%x %x", ptr1[-1], *ptr2); */
    /* int a2[5][5];
    int (*p)[4];
    p = a2;
    printf("%p %d", &p[4][2] - &a2[4][2], &p[4][2] - &a2[4][2]); */
    /* int a2[2][5] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr1 = (int*)(&a2 + 1);
    int* ptr2 = *(a2 + 1);
    printf("%d %d", *(ptr1-1), *(ptr2-1)); */
    /* int aa = 1;
    char* p = "abcd"; */
    /* char* ca[] = {"work", "at", "alibaba"};
    char* *pca = ca;
    pca++;
    printf("%s\n", *pca); */
    /* char* c[] = {"ENTER", "NEW", "POINT", "FIRST"};
    char** cp[] = {c+3, c+2, c+1, c};
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp+3);
    printf("%s\n", *cpp[-2]+3);
    printf("%s\n", cpp[-1][-1]+1); */
    return 0;
}