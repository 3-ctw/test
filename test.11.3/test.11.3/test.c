#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void PrintArr(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
//挖坑法
int DigSort(int* a, int m,int n)
{
	int left = m;
	int right = n - 1;
	int tmp = a[m];
	int digging = m;
	if (left >= right)
	{
		return m;
	}
	while (left < right)
	{
		while (left < right && a[right] > tmp)
		{
			right--;
		}
		Swap(&a[right], &a[left]);
		digging = right;
		while (left < right && a[left] < tmp)
		{
			left++;
		}
		Swap(&a[left], &a[digging]);
		digging = left;
	}
	a[digging] = tmp;
	return digging;
}
//左右指针法
int HoverSort(int* a, int left, int right)
{
	int start = left;
	int end = right-1;
	int tmp = a[left];
	if (left >= right)
	{
		return left;
	}
	while (start < end)
	{
		while (left < right && a[start] < tmp)
		{
			start++;
		}
		while (left<right && a[end]>tmp)
		{
			end--;
		}
		Swap(&a[start], &a[end]);
	}
	a[start] = tmp;
	return start;
}

//前后指针法
int HoartSort(int* a, int left, int right)
{
	int pre = left;
	int cur = left + 1;
	int tmp = a[left];
	if (left >= right)
	{
		return left;
	}
	while (cur < right)
	{
		if (a[cur] < tmp)
		{
			pre++;
			Swap(&a[cur], &a[pre]);
		}
		cur++;
	}
	Swap(&a[pre], &a[left]);
	return pre;
}

//三数取中法
int SelectMid(int* a,int left,int right)
{
	int tp = (left + right) / 2;
	int mid = 0;
	if (a[tp] > a[left])
	{
		if (a[tp] < a[right])
		{
			mid = tp;
		}
		else if (a[left] > a[right])
		{
			mid = left;
		}
		else
		{
			mid = right;
		}
	}
	else
	{
		if (a[tp] > a[right])
		{
			mid = tp;
		}
		else if (a[left] < a[right])
		{
			mid = left;
		}
		else
		{
			mid = right;
		}
	}
	return mid;
}
int MinSort(int* a, int left, int right)
{
	int mid = SelectMid(a, left, right);
	int tmp = a[mid];
	int start = left;
	int end = right-1;
	if (left >= right)
	{
		return left;
	}
	while (start < end)
	{
		while (start < end && a[start] < tmp)
		{
			start++;
		}
		while (start<end && a[end]>tmp)
		{
			end--;
		}
		Swap(&a[start], &a[end]);
	}
	return mid;
}

//快速排序法
void QuickSort(int* a, int m, int n)
{
	if (m < n)
	{
		int mid = MinSort(a, m, n);
		QuickSort(a, m, mid);
		QuickSort(a, mid + 1, n);
	}
}
int main()
{
	int arr[] = { 3,5,6,9,4,2,7,1,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, size);
	PrintArr(arr, size);
	return 0;
}