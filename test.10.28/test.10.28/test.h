#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//单链表
typedef struct SingList
{
	struct SingList* next;
	int data;
}SL;
typedef struct LinkList
{
	SL* head;
	int count;
}LK;

//初始化
LK* InitList();

//尾增
void AddFrontList(LK* phead,int x);

//头增
void AddPreList(LK* phead, int x);

//内插
void InsertList(LK* phead, int x, int pos);

//内删
void PopList(LK* phead, int pos);

//销毁
void DistroyList(LK* phead);
//打印
void PrintList(LK* phead);