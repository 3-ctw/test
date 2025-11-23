#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//≥ı ºªØ
OL* InitList()
{
	OL* list = (OL*)calloc(1, sizeof(OL));
	if (list == NULL)
	{
		printf("calloc  ß∞‹");
		exit(-1);
	}
	list->count = 0;
	list->sum = 0;
	list->data = NULL;
	return list;
}

//Œ≤‘ˆ
void AddFrontList(int x, OL* p)
{
	assert(p);
	if (p->count == p->sum)
	{
		p->sum = p->sum == 0 ? 2 : p->sum * 2;
		int* node = (int*)realloc(p->data, (p->sum) * sizeof(int));
		if (node == NULL)
		{
			printf("realloc  ß∞‹");
			exit(-1);
		}

		p->data = node;
		//p->sum *= 2;
	}
	p->data[p->count] = x;
	p->count++;
}

//Õ∑‘ˆ
void AddPrevList(int x, OL* p)
{
	assert(p);
	if (p->count == 0)
	{
		AddFrontList(x, p);
	}
	else
	{
		if (p->count == p->sum)
		{
			p->sum = p->sum == 0 ? 2 : p->sum * 2;
			int* node = (int*)realloc(p->data, (p->sum) * sizeof(int));
			if (node == NULL)
			{
				printf("realloc  ß∞‹");
				exit(-1);
			}

			p->data = node;
		}
		int i = 0;
		for (i = p->count; i > 0; i--)
		{
			p->data[i] = p->data[i - 1];
		}
		p->data[0] = x;
		p->count++;
	}
}

//ƒ⁄≤Â
void AddMidList(int x, int pos, OL* p)
{
	assert(p);
	if (p->count < pos)
	{
		return;
	}
	else if (p->count == pos)
	{
		AddFrontList(x, p);
	}
	else
	{
		if (p->count == p->sum)
		{
			p->sum = p->sum == 0 ? 2 : p->sum * 2;
			int* node = (int*)realloc(p->data, (p->sum) * sizeof(int));
			if (node == NULL)
			{
				printf("realloc  ß∞‹");
				exit(-1);
			}

			p->data = node;
		}
		int i = 0;
		for (i = p->count; i > pos; i--)
		{
			p->data[i] = p->data[i - 1];
		}
		p->data[pos] = x;
		p->count++;
	}
}

//¥Ú”°
void PrintList(OL* p)
{
	if (p == NULL)
	{
		printf("NULL");
		return;
	}
	int i = 0;
	for (i; i < p->count; i++)
	{
		printf("%d->", p->data[i]);
	}
}
 
//œ˙ªŸ
void DistoryList(OL* p)
{
	if (p == NULL)
	{
		return;
	}
	free(p->data);
	p->data = NULL;
	free(p);
}