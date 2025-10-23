#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//设置类型
typedef struct people
{
	char name[20];
	char sex[5];
	int age;
	char num[20];
}people;

//通讯录
typedef struct contact
{
	people data[100];//可储存数据总数
	int count;//当前通讯录中实际人数
}contact;

//初始化通讯录
void initcontact(contact* con);

//添加联系人
void addpeople(contact* con);

//查看联系人
void checkpeople(contact* con);

//删除联系人
void deletepeople(contact* con);

//查找联系人
void findpeople(contact* con);

//修改联系人
void reserpeople(contact* con);

