#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//子函数
void test()
{
	BL* list = InitList();
	//头增
	AddFrontList(list, 1);
	AddFrontList(list, 2);
	AddFrontList(list, 3);
	AddFrontList(list, 4);
	PrintList(list);
	//尾增
	AddBackList(list, 5);
	AddBackList(list, 6);
	AddBackList(list, 7);
	PrintList(list);
	//内增
	AddMidList(list, 8, 7);
	AddMidList(list, 9, 4);
	PrintList(list);
	//尾删
	PopBackList(list);
	PrintList(list);
	//头删
	PopFrontList(list);
	PrintList(list);
	//内删
	PopMidList(list, 5);
	PrintList(list);
	//删除整个双向链表
	DestroyList(list);
}

//主函数
int main()
{
	test();
	return 0;
}