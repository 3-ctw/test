#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//代码小乐乐改数字
//int main()
//{
//	int input = 0;
//	int i = 0;
//	scanf("%d", &input);
//	int sum = 0;
//	int num = 0;
//	while (input)
//	{
//		int ret = input % 2;
//		if (ret == 0)
//		{
//			ret = 0;
//			input = input / 10;
//			sum += ret * pow(10, i);
//			i++;
//		}
//		else
//		{
//			ret = 1;
//			input = input / 10;
//			sum += ret * pow(10, i);
//			i++;
//		}
//	}
//	//while (sum)
//	//{
//	//	int i = 1;
//	//	int ret = sum % 2;
//	//	if (ret == 0)
//	//	{
//	//		ret = 0;
//	//		sum = sum / 2;
//	//		num += ret * pow(10, i);
//	//		i++;
//	//	}
//	//	else
//	//	{
//	//		ret = 1;
//	//		sum = sum / 2;
//	//		num += ret * pow(10, i);
//	//		i++;
//	//	}
//	//}
//	printf("%d\n", sum);
//	return 0;
//}
//输出一个带空格的三角形图案。
//int main()
//{
//	int input = 0;
//	//input = 8;
//	//scanf("%d\n", &input);
//	//int i = 0;
//	while (scanf("%d", &input) == 1)
//	{
//
//		int i = 0;
//		for (i = 0; i <= input; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= input - i; j++)
//			{
//				printf("  ");
//			}
//			int n = 0;
//			for (n = 0; n <= input - j; n++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	//for (i = 0; i <= input; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j <= input - i; j++)
//	//	{
//	//		printf("  ");
//	//	}
//	//	int n = 0;
//	//	for (n = 0; n <= input - j; n++)
//	//	{
//	//		printf("* ");
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//}
//while版。
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
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//网购。
//int main()
//{
//	double p = 0;
//	int m = 0;
//	int d = 0;
//	int s = 0;
//	while (scanf("%lf %d %d %d", &p, &m, &d, &s) == 4)
//	{
//		if (m == 11 && d == 11 && s == 0)
//		{
//			p = p * 0.7;
//			printf("%.2lf\n", p);
//		}
//		else if (m == 11 && d == 11 && s == 1)
//		{
//			p = p * 0.7 - 50;
//			printf("%.2lf\n", p);
//
//		}
//		else if(m == 12 && d == 12 && s == 0)
//		{
//			p = p * 0.8;
//			printf("%.2lf\n", p);
//
//		}
//		else if (m == 12 && d == 12 && s == 1)
//		{
//			p = p * 0.8 - 50;
//			printf("%.2f\n", p);
//
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//	return 0;
//}