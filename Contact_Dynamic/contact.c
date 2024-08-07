#include"contact.h"

void InitContact(Contact* ps)
{
    ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
    //memset(ps->data, 0, sizeof(ps->data));
    if(ps->data ==NULL)
    {
        return;//开辟失败 
    }
    ps->capacity = DEFAULT_SZ;
    ps->size = 0;
}

void CheckCapacity(Contact* ps)
{
    if(ps->size == ps->capacity)
    {
        //增容
        struct PeoInfo* ptr = 
        realloc(ps->data, ((ps->capacity)+2) * sizeof(PeoInfo));
        if(ptr != NULL)
        {
            ps->data = ptr;
            ps->capacity += 2;
            printf("增容成功\n");
        }
        else
            printf("增容失败\n");
    }
}

void AddContact(struct Contact* ps)
{
    CheckCapacity(ps);//检查并增加空间
    printf("输入名字->");
    scanf("%s",(ps->data)[ps->size].name);
    printf("输入年龄->");
    scanf("%d",&((ps->data)[ps->size].age));
    printf("输入性别->");
    scanf("%s",(ps->data)[ps->size].sex);
    printf("输入电话->");
    scanf("%s",(ps->data)[ps->size].tele);
    printf("输入地址->");
    scanf("%s",(ps->data)[ps->size].addr);
    ps->size++;
    printf("添加成功\n");
}

void ShowContact(const struct Contact* ps)
{
    if(ps->size == 0)
        printf("通讯录为空!\n");
    else
    {
        int i;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
        for(i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
            ps->data[i].name,ps->data[i].age,
            ps->data[i].sex,ps->data[i].tele,
            ps->data[i].addr);
        }
    }
}

static int FindByName(struct Contact* pf,char name[MAX_NAME])//查找
{
    int i;
    for(i = 0; i < pf->size; i++)
    {
        if(strcmp(pf->data[i].name,name) == 0)
            return i;//找到返回下标
    }
    return -1;//找不到返回-1
}

void DelContact(struct Contact* ps)//删除
{
    char name[MAX_NAME];
    int i;
    printf("输入所删除的名字->");
    scanf("%s",name);
    //查找要删除的人的位置
    int pos = FindByName(ps,name);
    if(pos == -1)
        printf("要删除人不存在！\n");
    else
    {
        //删除
        int j = 0;
        for(j = pos; j < ps->size-1; j++)
            ps->data[j] = ps->data[j+1];
        ps->size--;
        printf("删除成功！\n");
    }
}



void SearchContact(struct Contact* ps)//查找
{
    char name[MAX_NAME];
    int pos;
    printf("输入所查找的名字->");
    scanf("%s",name);
    pos = FindByName(ps,name);
    if(pos == -1)
        printf("要查找的人不存在！\n");
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
            ps->data[pos].name,ps->data[pos].age,
            ps->data[pos].sex,ps->data[pos].tele,
            ps->data[pos].addr);
        }
}

void ModifyContact(struct Contact* ps)
{
    char name[MAX_NAME];
    int pos;
    printf("输入需修改成员的名字->");
    scanf("%s",name);
    pos = FindByName(ps,name);
    if(pos == -1)
        printf("要查修改的人不存在！\n");
    else
    {
        printf("输入修改后名字->");
        scanf("%s",(ps->data)[pos].name);
        printf("输入修改后年龄->");
        scanf("%d",&((ps->data)[pos].age));
        printf("输入修改后性别->");
        scanf("%s",(ps->data)[pos].sex);
        printf("输入修改后电话->");
        scanf("%s",(ps->data)[pos].tele);
        printf("输入修改后地址->");
        scanf("%s",(ps->data)[pos].addr);
        printf("修改完毕\n");
    }
}

void DestroyContact(Contact* ps)
{
    free(ps->data);
    ps->data = NULL;
}