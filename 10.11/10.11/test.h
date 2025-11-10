#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
//创建栈
typedef struct stack
{
	int* data;
	int num;
	int totul;
}SK;

//初始化
void InitStack(SK* st);
//入栈
void AddStack(SK* st,int x);
//出栈
void Popstack(SK* st);
//打印
int TopStack(SK* st);
//数量
void SizeStack(SK* st);
//判空
bool EmptyStack(SK* st);
//销毁
void DisStack(SK* st);