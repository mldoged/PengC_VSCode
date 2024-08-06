#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
#include<stddef.h>
#pragma pack(4)
#pragma pack()
void* my_mommove(void* dest, const void* src, int count)
{
    assert(dest != NULL);
    assert(src != NULL);
    void* ret = dest;
    if(dest < src)
    {
        //从前向后拷贝
        while(count--)
        {
            *(char*)dest = *(char*)src;
            /* (char*)dest;
            (char*)src; *///转换无效？
            dest += 1;
            src += 1;
        }
    }
    else
    {
        //从后相前
        while(count--)
        {
            *((char*)dest+count) = *((char*)src+count);

        }
    }
    return ret;
}

/* struct 
{
    int age;
    char name[20] = {'0'};
}*ps;
struct 
{
    int age;
    char name[20] = {'0'};
}s;
typedef struct Node
{
    int data;
    struct Node* next;
}Node; */

/* struct  S1
{
    double d;
    char c;
    int i;
};
struct S2
{
    char c;
    struct S1 s1;
    double d;
}; */

/* struct a
{
    int i: 5;
    int j: 10;
}; */

/* enum color
{
    red = 2,
    green = 0,
    blue = 6
}; */
int check_sys()
{
    union nu
    {   
        char c;
        int i;  
    }u;
    u.i = 1;
    return u.c;//返回1表示大端，0表示小端
}

int main()
{
    /* char *p = "huang@qq.com";
    char id[20] = {0};
    strcpy(id,p);
    char sep[] = {"@."};
    char* ret = NULL;
    for(ret = strtok(id,sep); ret != NULL; ret = strtok(NULL,sep))
        printf("%s\n", ret); */
    /* int ret;
    char ch = '1';
    ret = isdigit(ch);
    printf("%d\n", ret); */
    /* const void* str = NULL;
    (char*)str;
    str++; */
    /* int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {1,2,3,4};
    my_mommove(arr1,arr2,16);
    memset(arr2,1,10); */
    /* printf("%d\n",offsetof(struct S2,d)); */
    return 0;
}