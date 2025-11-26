#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//初始化
LK* InitList()
{
	LK* node = (LK*)calloc(1, sizeof(LK));
	if (node == NULL)
	{
		printf("calloc 失败");
		exit(-1);
	}
	SL* node1 = (SL*)calloc(1, sizeof(SL));
	if (node1 == NULL)
	{
		printf("calloc 失败");
		exit(-1);
	}
	node->head = node1;
	node->count = 1;
	return node;
}

//创建新的节点
SL* CreatList(int x)
{
	SL* node = (SL*)calloc(1, sizeof(SL));
	if (node == NULL)
	{
		printf("calloc 失败");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	return node;
}
//尾增
void AddFrontList(LK* phead, int x)
{
	assert(phead->head);
	//创建新的节点
	SL* list = CreatList(x);
	if (phead->head->next == NULL)
	{
		phead->head->next = list;
		phead->count++;
	}
	else
	{
		SL* pphead = phead->head->next;
		SL* cur = phead->head->next->next;
		while (cur != NULL)
		{
			pphead = pphead->next;
			cur = cur->next;
		}
		pphead->next = list;
		phead->count++;
	}
}

//头增
void AddPreList(LK* phead, int x)
{
	assert(phead->head);
	SL* list = CreatList(x);
	if (phead->head->next==NULL)
	{
		phead->head->next = list;
		phead->count++;
	}
	else
	{
		SL* tmp = phead->head->next;
		phead->head->next = list;
		list->next = tmp;
		phead->count++;
	}
}

//内插
void InsertList(LK* phead, int x, int pos)
{
	assert(phead->head);
	if (pos > phead->count)
	{
		printf("错误");
		exit(-1);
	}
	SL* list = CreatList(x);
	SL* cur = phead->head->next;
	int i = 1;
	while (i < pos)
	{
		cur = cur->next;
		i++;
	}
	SL* tmp = cur->next;
	cur->next = list;
	list->next = tmp;
}

//内删
void PopList(LK* phead, int pos)
{
	assert(phead->head);
	SL* cur = phead->head->next;
	SL* pphead = phead->head;
	int i = 1;
	while (i < pos)
	{
		cur = cur->next;
		pphead = pphead->next;
		i++;
	}
	SL* node = cur->next;
	pphead->next = node;
	free(cur);
	phead->count--;
}

//销毁
void DistroyList(LK* phead)
{
	assert(phead->head&&phead);
	SL* node = phead->head->next;
	while (node != NULL)
	{
		SL* cur = node;
		node = node->next;
		free(cur);
	}
	phead->head = NULL;
	phead->count = 0;
	printf("\n销毁完成");
}
//打印
void PrintList(LK* phead)
{
	if (phead->head == NULL)
	{
		printf("NULL");
		return;
	}
	SL* cur = phead->head->next;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("(%d)", phead->count);
}