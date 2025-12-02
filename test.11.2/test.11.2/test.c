#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//—°‘Ò≈≈–Ú
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void PrintArr(int a[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void SelectSort(int* a, int n)
{
	int begin = 0;
	int j = 0;
	while (j<n)
	{
		int min = j;
		for (int i = j; i < n; i++)
		{
			if (a[min] > a[i])
			{
				min = i;
			}
		}
		Swap(&a[begin], &a[min]);
		j++;
		begin++;
	}
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	int left = 0;
	int right = n - 1;
	int j = 0;
	while (begin <= end)
	{
		int max = begin;
		int min = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[min] > a[i])
			{
				min = i;
			}
			if (a[max] < a[i])
			{
				max = i;
			}
		}
		Swap(&a[begin], &a[min]);
		if (max == begin)
		{
			max = min;
		}
		Swap(&a[end], &a[max]);
		begin++;
		end--;
	}
}
int main()
{
	int arr[] = { 2,8,5,6,9,4,9,7,3,1,-1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	SelectSort(arr, size);
	PrintArr(arr, size);
	return 0;
}

//√∞≈›≈≈–Ú
void BubbleSort(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
			}
		}
	}
}
int main()
{
	int arr[] = { 2,8,5,6,9,9,4,7,3,1 ,-1};
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	PrintArr(arr, size);
	return 0;
}