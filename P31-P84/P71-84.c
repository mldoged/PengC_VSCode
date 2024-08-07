#include<stdio.h>
#define do_forever for(;;)
#define SQUARE(x) ((x)*(x))
#define PRINT(x) printf("the value of"#x"is %d\n",x)
#define CAT(x,y) x##y
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

int main()
{
    /* int i = 10000;
    FILE* pf = fopen("test.txt","wb");
    fwrite(&i,4,1,pf);
    fclose(pf);
    pf = NULL; */

    printf("%d",__STDC__);
    return 0;
}