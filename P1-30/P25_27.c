#include<stdio.h>
#include<assert.h>
typedef int i;
struct stu
{
    int age;
    char name;
}s1;

char* mystrcpy(char* dest, const char* sour)
{
    char* ret = dest;
    assert(dest != NULL);//断言
    assert(sour != NULL);
    while(*dest++ = *sour++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[] = "###########";
    char arr2[] = "huang";
    const char* p = arr1; 
    char* const p = arr1;
    printf("%s\n",mystrcpy(arr1,arr2));
    return 0;
}