#include<stdio.h>
int main()
{
    int i = 10000;
    FILE* pf = fopen("test.txt","wb");
    fwrite(&i,4,1,pf);
    fclose(pf);
    pf = NULL;
    return 0;
}