#define _CRT_SECURE_NO_WARNINGS
#include "test.h"

//创建新的单个链表
SL* BuildList(int x)
{
	SL* node = (SL*)calloc(1, sizeof(SL));
	if (node == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	else
	{
		node->data = x;
		node->next = NULL;
		return node;
	}
}
//头插
void AddFrontList(SL** pfist, int x)
{
	assert(pfist);
	SL* node = BuildList(x);
	if (*pfist == NULL)
	{
		*pfist = node;
	}
	else
	{
		node->next = *pfist;
		*pfist = node;
	}
}

//尾插
void AddBackList(SL** pfist, int x)
{
	SL* node = BuildList(x);
	SL* cur = *pfist;
	if (*pfist == NULL)
	{
		*pfist = node;
	}
	else
	{
		while (cur->next!=NULL)
		{
			cur = cur->next;
		}
		cur->next = node;
	}

}

//查找内容
SL* FindList(SL* pfist, int x)
{
	SL* cur = pfist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//内插
void InsertList(SL** pfist, SL* pos , int x)
{
	if (*pfist == pos)
	{
		AddFrontList(pfist,x);
	}
	else
	{
		SL* node = BuildList(x);
		SL* cur = *pfist;
		while (cur != NULL&&cur->next != pos)
		{
			cur = cur->next;
		}
		if (cur != NULL)
		{
			cur->next = node;
			node->next = pos;
		}
		else
		{
			printf("%s\n", strerror(errno));
			return;
		}
	}
}

//头删
void PopFrontList(SL** pfist)
{
	if (*pfist == NULL)
	{
		printf("无内容可删除\n");
		return;
	}
	SL* tmp = (*pfist)->next;
	free(*pfist);
	*pfist = tmp;
}

//尾删
void PopBackList(SL** pfist)
{
	SL* phead = *pfist;
	SL* cur = (*pfist)->next;
	while (cur->next!=NULL)
	{
		phead = phead->next;
		cur = cur->next;
	}
	phead->next = NULL;
	free(cur);
}

//内删
void PopInsertList(SL** pfist, SL* pos)
{
	SL* phead = *pfist;
	SL* cur = (*pfist)->next;
	if (phead == pos)
	{
		*pfist = cur;
		free(phead);
	}
	else
	{
		while (cur != pos)
		{
			phead = phead->next;
			cur = cur->next;
		}
		SL* tmp = cur->next;
		phead->next = tmp;
		free(cur);
	}
}
//打印
void PrintList(SL* pfist)
{
	SL* cur = pfist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}