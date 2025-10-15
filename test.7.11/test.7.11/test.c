#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[4] = { 1,2,3,4 };
//	int brr[4] = { 4,5,6,7 };
//	int crr[4] = { 7,8,9,10 };
//	int* p[3] = { arr,brr,crr };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ", p[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", (*p)[i]);
//		printf("%d ", *(*p+i));
//
//	}
//	return 0;
//}
//void print(int (*p)[5], int r, int n)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//void cloc(int (*pf)(int,int))
//{
//	int ret = pf(3, 2);
//	printf("%d\n", ret);
//}
//int main()
//{
//	cloc(add);
//	//int (*pf)(int,int) = &add;
//	//int ret = pf(3, 2);
//	//printf("%d\n", ret);
//	return 0;
//}
//写一个计算器
void meun()
{
	printf("............1,加    2，减...........\n");
	printf("............3,乘    4，除...........\n");
	printf("............    5,退出    ...........\n");

}
int add(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
int cheng(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	meun();
	printf("请选择你要使用的功能->:\n");
	//scanf("%d", &input);
	do
	{
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器");
			break;
		}
		switch (input)
		{
		case(1):
		{
			int a = 0;
			int b = 0;
			scanf("%d %d", &a, &b);
			printf("%d\n", add(a, b));
			break;
		}
		case(2):
		{
			int a = 0;
			int b = 0;
			scanf("%d %d", &a, &b);
			printf("%d\n", jian(a, b));
			break;
		}
		case(3):
		{
			int a = 0;
			int b = 0;
			scanf("%d %d", &a, &b);
			printf("%d\n", cheng(a, b));
			break;
		}
		case(4):
		{
			int a = 0;
			int b = 0;
			scanf("%d %d", &a, &b);
			printf("%d\n", chu(a, b));
			break;
		}
		/*case(0):
		{
			break;
		}*/
		default:
			printf("请重新输入");
		}
	} while (input);
	return 0;
}