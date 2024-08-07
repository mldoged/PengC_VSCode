#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
    EXIT,
    ADD,
    DEL,
    SERACH,
    MODIFY,
    SHOW,
    SORT
};

typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
    struct PeoInfo *data;//存成员信息
    int size;//存已录入成员个数
    int capacity;//最大容量
}Contact;

void InitContact(Contact* ps);
void AddContact(Contact* ps);
void ShowContact(const Contact* ps);
void DelContact(Contact* ps);
void SearchContact(Contact* ps);
void ModifyContact(Contact* ps);
void DestroyContact(Contact* ps);