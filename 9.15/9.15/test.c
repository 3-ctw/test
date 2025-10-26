#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//使用calloc函数开辟空间
//int main()
//{
//	//开辟空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("s\n",strerror(errno));
//		return 1;
//	}
//	//赋值
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		*(p + i-1) = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	return 0;
//}


int main()
{
	//开辟空间
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("s\n", strerror(errno));
		return 1;
	}
	//赋值
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i+1;
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	//扩容
	int* prt = realloc(p, 80);
	if (prt != NULL)
	{
		p = prt;
	}
	//重新赋值
	for (i = 0; i < 20; i++)
	{
		*(p + i) = i + 1;
	}
	//打印重新赋的值
	for (i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	//释放
	free(p);
	return 0;
}