#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
//静态
////初始化
//void InitStudent(St* pc)
//{
//	memset(pc->data, 0, (sizeof(int)* MAX));
//	pc->count = 0;
//	//pc->sum = 0;
//}
//
////尾增
//void AddStudent(St* pc, int x)
//{
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("储存空间已满\n");
//	}
//	pc->data[pc->count] = x;
//	pc->count++;
//}
//
////增加内容(内增)
//void InstStudent(St* pc,int x,int pos)
//{
//	assert(pc);
//	assert(pos <= pc->count);
//	assert(pc->count != MAX);
//	int i = 0;
//	for (i = pc->count; i > pos; i--)
//	{
//		pc->data[i] = pc->data[i-1];
//	}
//	pc->data[pos] = x;
//	pc->count++;
//}
//
////打印内容 
//void Printf(const St* pc)
//{
//	assert(pc);
//	if (pc->count == 0)
//	{
//		printf("没有联系人\n");
//	}
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		printf("%d->", pc->data[i]);
//	}
//	printf("\n");
//	printf("%d", pc->count);
//}
//
////头增
//void AddtStudent(St* pc, int x)
//{
//	assert(pc);
//	assert(pc->count != MAX);
//	int i = 0;
//	for (i = pc->count; i > 0; i--)
//	{
//		pc->data[i] = pc->data[i - 1];
//	}
//	pc->data[0] = x;
//	pc->count++;
//}
//
////内删
//void PopInstStudent(St* pc, int pos)
//{
//	assert(pc);
//	assert(pos <= pc->count);
//	int i = 0;
//	for (i = pos; i < pc->count; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->count--;
//}
//
////尾删
//void PopBackStudent(St* pc)
//{
//	assert(pc);
//	int i = pc->count;
//	pc->data[i - 1] = pc->data[i];
//	pc->count--;
//}
//
////头删
//void PopFrontStudent(St* pc)
//{
//	assert(pc);
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->count--;
//}

//动态
//初始化
void InitStudent(St* pc)
{
	pc->data = NULL;
	pc->count = 0;
	pc->sum = 0;
}

//
void ChackAddStudent(St* pc)
{
	assert(pc);
	if (pc->count == pc->sum)
	{
		int newn = pc->sum == 0 ? 4 : pc->sum * 2;
		int* p = (int*)realloc(pc->data, sizeof(int)*newn);
		if (p == NULL)
		{
			printf("%s\n", strerror(errno));
			return;
		}
		pc->data = p;
		pc->sum = newn;
	}
}
//尾增
void AddStudent(St* pc, int x)
{
	assert(pc);
	ChackAddStudent(pc);
	pc->data[pc->count] = x;
	pc->count++;
}

//增加内容(内增)
void InstStudent(St* pc, int x, int pos)
{
	assert(pc);
	ChackAddStudent(pc);
	int i = 0;
	for (i = pc->count; i > pos; i--)
	{
		pc->data[i] = pc->data[i - 1];
	}
	pc->data[pos] = x;
	pc->count++;
}

//打印内容 
void Printf(const St* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("没有联系人\n");
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%d->", pc->data[i]);
	}
	printf("\n");
	printf("%d\n", pc->count);
	printf("%d", pc->sum);
}

//头增
void AddtStudent(St* pc, int x)
{
	assert(pc);
	ChackAddStudent(pc);
	int i = 0;
	for (i = pc->count; i > 0; i--)
	{
		pc->data[i] = pc->data[i - 1];
	}
	pc->data[0] = x;
	pc->count++;
}

//内删
void PopInstStudent(St* pc, int pos)
{
	assert(pc);
	assert(pos <= pc->count);
	int i = 0;
	for (i = pos; i < pc->count; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
}

//尾删
void PopBackStudent(St* pc)
{
	assert(pc);
	int i = pc->count;
	pc->data[i - 1] = pc->data[i];
	pc->count--;
}

//头删
void PopFrontStudent(St* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
}

//释放空间
void DestroyStudent(St* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->count = 0;
	pc->sum = 0;
}