#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在矩阵中查找是否存在某个元素
//struct point
//{
//	int x;
//	int y;
//	
//};
//struct point my_find(int arr[3][3],int k,int n,int num)
//{
//	int i = 0;
//	struct point p = { -1,-1 };
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] == num)
//			{
//				p.x = i;
//				p.y = j;
//				return p;
//			}
//		}
//	}
//	return p;
//}
////void my_find(int arr[3][3], int k, int n, int num)
////{
////	int i = 0;
////	for (i = 0; i < k; i++)
////	{
////		int j = 0;
////		for (j = 0; j < n; j++)
////		{
////			if (arr[i][j] == num)
////			{
////				printf("%d %d\n", i, j);
////				goto aee;
////			}
////		}
////	}
////	printf("没找到");
////	aee:;
////}
//int main()
//{
//	int arr[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
//	int num = 0;
//	scanf("%d", &num);
//	//my_find(arr, 3, 3, num);
//	struct point ret=my_find(arr,3,3,num);
//	printf("% d % d\n",ret.x, ret.y);
//	return 0;
//}
// 五位运动员预测比赛结果。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) ==1
//							&& (b == 2) + (e == 4) ==1
//							&& (c == 1) + (d == 2) ==1
//							&& (c == 5) + (d == 3) ==1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if ((a + b + c + d + e == 15) && (a * b * c * d * e) == 120)
//							{
//								printf("%d %d %d %d %d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//谋杀案找凶手。
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//屏幕上打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10;i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2&&j>=1)
//			{
//				arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}