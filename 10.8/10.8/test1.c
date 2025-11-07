#define _CRT_SECURE_NO_WARNINGS
#include "test.h"

//测试函数
void test()
{
	SL* list=NULL;
	//头插
	AddFrontList(&list, 1);
	PrintList(list);

	AddFrontList(&list, 2);
	AddFrontList(&list, 3);
	AddFrontList(&list, 4);
	PrintList(list);
	//尾插
	AddBackList(&list, 5);
	PrintList(list);
	//内插
	SL* pos = FindList(list, 4);
	if (pos)
	{
		InsertList(&list, pos, 6);
	}
	PrintList(list);
	pos = FindList(list, 5);
	if (pos)
	{
		InsertList(&list, pos, 7);
	}
	PrintList(list);
	//头删
	PopFrontList(&list);
	PrintList(list);
	//尾删
	PopBackList(&list);
	PrintList(list);
	//内删
	pos = FindList(list, 7);
	if (pos)
	{
		PopInsertList(&list, pos);
	}
	PrintList(list);
	pos = FindList(list, 4);
	if (pos)
	{
		PopInsertList(&list, pos);
	}
	PrintList(list);
	pos = FindList(list, 2);
	if (pos)
	{
		PopInsertList(&list, pos);
	}
	PrintList(list);
}
//主函数//
int main()
{
	test();
	return 0;
}