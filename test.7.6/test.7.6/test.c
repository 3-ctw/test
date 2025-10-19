#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//判断三角形形状
//void my_jude(int a, int b, int c)
//{
//	assert(a, b, c);
//	if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a)
//	{
//		if (a == b && b == c)
//		{
//			printf("等边");
//		}
//		else if (a == b && b != c)
//		{
//			printf("等腰");
//		}
//		else
//		{
//			printf("普通");
//		}
//	}
//	else
//	{
//		printf("输入错误，重新输入");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	my_jude(a, b, c);
//	return 0;
//}
//写一个函数，用指针打印数组元素
//void my_print(int* p, int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(&arr,sz);
//	return 0;
//}
//字符串的逆序
#include <string.h>
//void my_inver(char arr[100], int x)
//{
//	int lift = 0;
//	int right = 0;
//	lift = 0;
//	right = x - 1;
//	while (lift < right)
//	{
//		char tmp = arr[lift];
//		arr[lift] = arr[right];
//		arr[right] = tmp;
//		lift++;
//		right--;
//	}
//	printf("%s", arr);
//
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = 0;
//	sz = strlen(arr);
//	my_inver(arr,sz);
//	return 0;
//}
//输入一个数字，求前n项之和
//int add(int x)
//{
//	int sum = 0;
//	while(x)
//	{
//		sum += x % 10;
//		x = x / 10;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",add(a));
//	return 0;
//}
//变种水仙花数
//“水仙花数”指一个n位数，其各位数字的n次方之和等于该数本身。
#include<math.h>
//int countf(int x)
//{
//	int t = 0;
//	while (x)
//	{
//		t++;
//		x = x / 10;
//	}
//	return t;
//}
//int my_add(int x)
//{
//	int b = 0;
//	int c = 0;
//	c = countf(x);
//	while (x)
//	{
//		int a = 0;
//		a = x % 10;
//		b += pow(a, c);
//		x = x / 10;
//	}
//	return b;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		sum = my_add(i);
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//打印图像
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水？
int main()
{

	return 0;
}