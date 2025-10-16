#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//my_printf(int* p, int* b,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*p = *b;
//		p++;
//		b++;
//	}
//}
//int main()
//{
//	int j = 0;
//	int arr[100] = { 0 };
//	int brr[100] = { 0 };
//	int sz = strlen(arr);
//	gets(arr);
//	my_printf(arr, brr, sz);
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d", brr[j]);
//	}
//	return 0;
//}

//判断大小端；
//int main()
//{
//	int a = 1;
//	int* p = &a;
//	if (*(char*)p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//输入一个整数数组，用函数实现将数组中的奇数移至前面；
//void my_inver(int arr[10], int sz)
//{
//	int lift = 1;
//	int right = sz - 2;
//	while (lift < right)
//	{
//		if (arr[lift] % 2 == 0 && arr[right] % 2 != 0)
//		{
//			int tmp = arr[lift];
//			arr[lift] = arr[right];
//			arr[right] = tmp;
//			lift += 2;
//			right -= 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_inver(arr, sz);
//	return 0;
//}

//有序序列合并
//my_sort(int arr[10], int brr[10], int sz,int sz2)
//{
//	int i = 0;
//	int crr[100] = { 0 };
//	int j = 0;
//	int n = 0;
//	while (i < sz && j < sz2)
//	{
//		if (arr[i] < brr[j])
//		{
//			crr[n] = brr[j];
//			j++;
//			n++;
//		}
//		else
//		{
//			crr[n] = arr[i];
//			i++;
//			n++;
//		}
//	}
//	if (i < sz)
//	{
//		for (i; i < sz; i++)
//		{
//			crr[n] = arr[i];
//			n++;
//		}
//	}
//	if (j < sz2)
//	{
//		for (j; j < sz2; j++)
//		{
//			crr[n] = brr[j];
//			n++;
//		}
//	}
//	int m = 0;
//	for (m = 0; m < n; m++)
//	{
//		printf("%d ", crr[m]);
//	}
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int brr[6] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 0; j < 6; j++)
//	{
//		scanf("%d", &brr[j]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz2 = sizeof(brr) / sizeof(brr[0]);
//	my_sort(arr, brr, sz, sz2);
//	return 0;
//}