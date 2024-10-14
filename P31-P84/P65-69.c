#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

/* void GetMemory(char* p)
{
    p = (char*)malloc(100);
}
void Test(void)
{
    char* str = NULL;
    GetMemory(str);
    strcpy(str," huang! ");
    printf(str);
} */

struct S
{
    int n;
    int arr[0];
};

int main()
{
    /* int* p = (int*)malloc(10*sizeof(int));
    if(p == NULL)
        printf("%s", strerror(errno));
    else
    {
        ;
    }
    free(p);
    p = NULL;

    int* pc = (int*)calloc(10,sizeof(int));
    if(pc == NULL)
        printf("%s", strerror(errno));  
    else
    {
        ;
    }
    int* ptr = realloc(pc,INT_MAX);//丢弃了P指针
    if(ptr != NULL)
        p = ptr;     */                    //

    //Test();
    struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
    struct S* ptr = realloc(ps, 44);
    return 0;
}