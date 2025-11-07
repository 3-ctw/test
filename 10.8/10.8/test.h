#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
//创建单链表
typedef struct SingList
{
	int data;
	struct SingList* next;
}SL;

//头插
void AddFrontList(SL** pfist, int x);

//尾插
void AddBackList(SL** pfist, int x);

//内插
void InsertList(SL** pfist, SL* pos, int x);

//查找位置
SL* FindList(SL* pfist, int x);

//头删
void PopFrontList(SL** pfist);

//尾删
void PopBackList(SL** pfist);

//内删
void PopInsertList(SL** pfist, SL* pos);

//打印
void PrintList(SL* pfist);

