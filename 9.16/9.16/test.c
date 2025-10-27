#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//照着抄一遍
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);//malloc返回void*(开辟内存)
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;//若开辟失败则报错并返回空值
//	}
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;//初始化
//	str = GetMemory(str);//存放内存
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//最小公倍数加最大公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n,&m)==2)
//	{
//		int min = n < m ? n : m;
//		int max = n < m ? m : n;
//		int i = min;
//		while(1)
//		{
//			if (n % i == 0 && m % i == 0)
//			{
//				printf("最小公倍数为i=%d\n", i);
//				break;
//
//			}
//			i--;
//			//break;
//		}
//		int j = max;
//		while(1)
//		{
//			if (j % n == 0 && j % m == 0)
//			{
//				printf("最大公约数数为j=%d\n", j);
//				break;
//
//			}
//			j++;
//			//break;
//		}
//		printf("结果为%d\n", j + i);
//	}
//	return 0;
//}
//第二种
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int j = n;
//		int i = m;
//		int r = 0;
//		while (r = j % i)
//		{
//			i = j;
//			j = r;
//		}
//		printf("%d", m * n / j + j);
//	}
//	return 0;
//}

//打印一个空心正方形。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}