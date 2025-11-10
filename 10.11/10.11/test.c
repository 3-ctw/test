#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//增容
void BuiltStack(SK* st)
{
	assert(st);
	int* nuwstack = (int*)realloc(st->data, 2 * sizeof(int));
	if (nuwstack == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	st->data = nuwstack;
	st->totul *= 2;
}
//初始化
void InitStack(SK* st)
{
	assert(st);
	st->data = (int*)calloc(4, sizeof(int));
	if (st->data == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	st->num = 0;
	st->totul = 4;
}

//入栈
void AddStack(SK* st,int x)
{
	assert(st);
	//增容
	if (st->num == st->totul)
	{
		BuiltStack(st);
		st->num++;

		st->data[st->num] = x;
	/*	st->num++;*/
	}
	else
	{
		st->num++;
		st->data[st->num] = x;
		//st->num++;
	}
}
//出栈
void Popstack(SK* st)
{
	assert(st);
	if (st->num == 0)
	{
		printf("空" );
		exit(-1);
	}
	st->num--;
}
//打印
int TopStack(SK* st)
{
	assert(st);
	assert(st->num > 0);
	return st->data[st->num];
	//printf("\n");
	//printf("%d", st->num);
}
//数量
void SizeStack(SK* st)
{
	assert(st);
	printf("\n");
	printf("%d", --st->num);
}
//判空
bool EmptyStack(SK* st)
{
	assert(st);
	return st->num==0;
}
//销毁
void DisStack(SK* st)
{
	assert(st);
	free(st->data);
	st->num = st->totul = 0;
}