#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>
#define NM_MAX 20
#define SEX_MAX 5
#define INITAL 2
//设置类型
typedef struct people
{
	char name[NM_MAX];
	char sex[SEX_MAX];
	int age;
	char num[NM_MAX];
}People;

//通讯录
typedef struct contact
{
	People* data;//可储存数据总数
	int count;//当前通讯录中实际人数
	int total;
}Contact;

//初始化通讯录
void Initcontact(Contact* con);

//添加联系人
void Addpeople(Contact* con);

//查看联系人
void Checkpeople(Contact* con);

//删除联系人
void Deletepeople(Contact* con);

//查找联系人
void Findpeople(Contact* con);

//修改联系人
void Reserpeople(Contact* con);
