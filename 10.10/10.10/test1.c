#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//创造、分配内存
BL* BulitList(int x)
{
	BL* node = (BL*)calloc(1, sizeof(BL));
	//BL* node = (BL*)malloc(sizeof(BL));
	if (node == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	node->data = x;
	//node->next = NULL;
	//node->prec = NULL;
	return node;
}

//初始化
BL* InitList()
{
	BL* node = BulitList(0);
	node->next = node;
	node->prec = node;
	return node;
}

//查找位置
BL* FindList(BL* phead, int pos)
{
	BL* cur = phead;
	//思考：如果遍历完了都没找到这个位置，该如何写？
	while (cur->data != pos)
	{
		cur = cur->next;
	}
	return cur->prec;
}

//头增
void AddFrontList(BL* phead, int x)
{
	//创造一个双链表；
	assert(phead);
	BL* node = BulitList(x);
	BL* tmp = phead->next;
	phead->next = node;
	node->next = tmp;
	node->prec = phead;
	tmp->prec = node;
}

//尾增
void AddBackList(BL* phead, int x)
{
	BL* node = BulitList(x);
	BL* pphead = phead;
	if (pphead->next == phead)
	{
		AddFrontList(phead,x);
	}
	else
	{
		BL* cur = phead;
		while (cur->next != phead)
		{
			cur = cur->next;
		}
		cur->next = node;
		node->prec = phead->prec;
		node->next = phead;
		phead->prec = node;
	}

}

//内增
void AddMidList(BL* phead, int x,int pos)
{
	assert(phead);
	BL* node = BulitList(x);
	BL* locat = FindList(phead,pos);
	if (locat == phead)
	{
		AddFrontList(phead, x);
	}
	else
	{
		BL* tmp = locat->next;
		locat->next = node;
		node->prec = locat;
		node->next = tmp;
		tmp->prec = node;
	}

}

//尾删
void PopBackList(BL* phead)
{
	assert(phead);
	BL* cur = phead->prec;
	BL* pphead = cur->prec;
	free(cur);
	pphead->next = phead;
}

//头删
void PopFrontList(BL* phead)
{
	assert(phead);
	BL* fist = phead->next;
	BL* cur = fist->next;
	free(fist);
	phead->next = cur;
}

//内删
void PopMidList(BL* phead, int x)
{
	assert(phead);
	BL* locat = FindList(phead,x);
	BL* cur = locat->next->next;
	free(locat->next);
	locat->next = cur;
	cur->prec = locat;
	
}

//删除整个双向链表
void DestroyList(BL* phead)
{
	assert(phead);
	BL* cur = phead->next;
	while (cur->next != phead)
	{
		BL* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead == NULL;
}

//打印
void PrintList(BL* phead)
{
	BL* pphead = phead;
	if (pphead->next == phead)
	{
		printf("链表内容为空\n");
		exit(-1);
	}
	while (pphead->next != phead)
	{
		printf("%d->", pphead->next->data);
		pphead = pphead->next;
	}
	printf("\n");
}

