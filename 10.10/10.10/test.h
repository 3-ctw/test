#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>

//创建双链表
typedef struct BothList
{
	struct BothList* prec;
	struct BothList* next;
	int data;
}BL;

//初始化
BL* InitList();

//头增
void AddFrontList(BL* phead, int x);

//尾增
void AddBackList(BL* phead, int x);

//内增
void AddMidList(BL* phead, int x,int pos);

//尾删
void PopBackList(BL* phead);

//头删
void PopFrontList(BL* phead);

//内删
void PopMidList(BL* phead, int x);

//删除整个双向链表
void DestroyList(BL* phead);

//打印
void PrintList(BL* phead);