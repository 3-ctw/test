#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//归并排序

//交换
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
// 排序前准备（选数组的中间索引，并让其两边有序，
//           在分别将两边的数依序进行比较，
// 排升序的话两边必须都是升序，降序相反。）
//void AscendSort(int* a, int left, int right)
//{
//	int mid = (left + right) / 2;
//	int n = left;
//	int m = left + 1;
//	while (m <= right)
//	{
//				
//		if (a[n] > a[m])
//		{
//			Swap(&a[n], &a[m]);
//		}
//		n++;
//		m++;
//	}
//}

//打印数组
void PrintArr(int* a, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//排序（分治法）
void Merge(int* a, int left, int mid, int right,int* tmp)
{
	int n = mid + 1;
	int i = 0;
	int begin = left;
	while (left <= mid && n <= right)
	{
		if (a[left] > a[n])
		{
			tmp[i] = a[n];
			n++;
			i++;
		}
		else
		{
			tmp[i] = a[left];
			left++;
			i++;
		}
	}
	while (left <= mid)
	{
		tmp[i] = a[left];
		left++;
		i++;
	}
	while (n <= right)
	{
		tmp[i] = a[n];
		n++;
		i++;
	}
	int j = 0;
	for (j = 0; j <= right - begin; j++)
	{
		a[begin+j] = tmp[j];
	}
}
//归并排序
void MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	//AscendSort(a, left, right);
	MergeSort(a, left, mid, tmp);
	MergeSort(a, (mid + 1), right, tmp);
	Merge(a, left, mid, right, tmp);

}
//创建新数组
void CreatArr(int* a, int left, int right)
{
	int* tmp = (int*)calloc(right+1, sizeof(int));
	if (tmp == NULL)
	{
		printf("calloc fail");
		exit(-1);
	}
	MergeSort(a, left, right,tmp);
	free(tmp);
	tmp = NULL;
}

int main()
{
	int arr[] = { 2,6,4,9,3,7,1,8,5,0,-1};
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;
	CreatArr(arr, left, right);
	PrintArr(arr, size);
	return 0;
}