#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>
//int main(void) {
//    int a[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p[4], i;
//    for (i = 0; i < 4; i++) p[i] = &a[i * 3];
//    printf("%d\n", p[3][2]);
//    return 0;
//}
//int main() {
//    int a = 1;
//    int b = 3;
//    int c = 5;
//    int* p1 = &a;
//    int* p2 = &b;
//    int* p = &c;
//    *p = *p1 * (*p2);
//    printf("%d\n", c);
//}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水？
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//int sum = a;
//	//int empty = a;
//	/*while (empty >= 2)
//	{
//		sum += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	if (a > 0)
//	{
//		printf("%d\n", 2 * a - 1);
//	}
//	else
//	{
//		printf("%d\n", 0);
//	}
//	//printf("%d", sum);
//	return 0;
//}
//输入两个数字并计算他们的最小公倍数
#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 2;
//	while (1)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d", m);
//	return 0;
//}
//将一句话的单词进行倒置，标点不倒置。
#include<string.h>
#include<assert.h>
//inver(char arr[100], int len)
//{
//	char brr[100] = { 0 };
//	char crr[100] = { 0 };
//	char drr[100] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (strcmp(arr[i], " "))
//	{
//		count++;
//		i++;
//	}
//	reserve()
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	inver(arr, len);
//	return 0;
//}
//函数
void reverse(char* left, char* right)
{
	while (left < right)
	{
		assert(right);
		assert(left);
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			end++;
		start = end;
	}
	printf("%s\n", arr);
	return 0;
}