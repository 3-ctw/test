#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define NI_MAX 20
#define SEX_MAX 5
#define MAX 100
//成员信息
typedef struct Information
{
	char name[NI_MAX];
	char sex[SEX_MAX];
	int age;
	char id[NI_MAX];

}In;

//顺序表创建
typedef struct Student
{
	In data[MAX];
	int count;
}St;

//初始化顺序表
void Initmessage(St* pc);

//增加信息
void Addmessage(St* pc);

//查看信息
void Checkmessage(St* pc);
