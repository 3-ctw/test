#define _CRT_SECURE_NO_WARNINGS
#include "test.h"

void test(St peo)
{
	//增加尾增
	AddStudent(&peo, 1);
	AddStudent(&peo, 2);
	AddStudent(&peo, 3);
	AddStudent(&peo, 4);
	AddStudent(&peo, 5);
	//增加内增
	InstStudent(&peo, 9,3);
	InstStudent(&peo, 8,4);
	InstStudent(&peo, 7,2);
	//头增
	AddtStudent(&peo, 12);
	AddtStudent(&peo, 66);
	AddtStudent(&peo, 60);
	//内删
	PopInstStudent(&peo, peo.count);
	PopInstStudent(&peo, 0);
	//尾删
	PopBackStudent(&peo);
	//头删
	PopFrontStudent(&peo);
	打印
	Printf(&peo);
}

//静态
//int main()
//{
//	St peo;
//	//初始化
//	InitStudent(&peo);
//	test(peo);
//	return 0;
//}

//动态
int main()
{
	St peo;
	//初始化
	InitStudent(&peo);
	test(peo);
	DestroyStudent(&peo);
	return 0;
}
