#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//堆排序
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
////循环
//void SortArr(int* a, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if ((child + 1) < n && a[child] < a[child + 1])
//		{
//			child += 1;
//
//		}
//		//else
//		//{
//		//}
//		if (a[parent] < a[child])
//		{
//			Swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
////递归
////void SortHeap(int* a, int n,int m)
////{
////	if (n < 0)
////	{
////		return;
////	}
////	int parent = (n - 1) / 2;
////	int child = parent * 2 + 1;
////	while (child < n)
////	{
////		int tmp = a[child] > a[child + 1] ? a[child] : a[child + 1];
////		if (a[parent] < tmp)
////		{
////			Swap(&a[parent], &tmp);
////			parent = child;
////			child = parent * 2 + 1;
////		}
////		else
////		{
////			parent = child;
////			child = parent * 2 + 1;
////		}
////	}
////	SortHeap(a, n - 1);
////}
//int main()
//{
//	int arr[] = { 3,6,9,5,8,2,4,1,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	////构建大堆(递归)
//	//SortHeap(arr, size - 1,size-1);
//	
//	//构建大堆
//	for (i = (size - 2)/2; i >= 0; i--)
//	{
//		SortArr(arr, size, i);
//	}
//	int k = 0;
//	for (k = 0; k < size; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	printf("\n");
//	//堆排序
//	int end = size - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		SortArr(arr, end, 0);
//		end--;
//	}
//	//while (end > 0)
//	//{
//	//	Swap(&arr[0], &arr[end]);
//	//	SortHeap(arr, end);
//	//	end--;
//	//}
//	int j = 0;
//	for (j = 0; j < size; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}

//递归
// 交换两个整数的值
void Swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

// 递归实现堆调整（构建大根堆）
void AdjustHeap(int* a, int n, int root)
{
    int parent = root;
    int leftChild = parent * 2 + 1;   // 左孩子索引
    int rightChild = parent * 2 + 2;  // 右孩子索引
    int largest = parent;             // 记录当前最大值的索引（初始为父节点）

    // 找到父节点、左孩子、右孩子中的最大值
    if (leftChild < n && a[leftChild] > a[largest])
    {
        largest = leftChild;
    }
    if (rightChild < n && a[rightChild] > a[largest])
    {
        largest = rightChild;
    }

    // 如果最大值不是父节点，则交换并递归调整子树
    if (largest != parent)
    {
        Swap(&a[parent], &a[largest]);
        // 递归调整以largest为根的子树（此时largest位置已是原父节点的值）
        AdjustHeap(a, n, largest);
    }
}

int main()
{
    int arr[] = { 3,6,9,5,8,2,4,1,7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    // 构建大根堆（从最后一个非叶子节点开始递归调整）
    for (i = (size - 2) / 2; i >= 0; i--)
    {
        AdjustHeap(arr, size, i);
    }

    // 堆排序（每次将堆顶元素放到末尾，再递归调整剩余元素）
    int end = size - 1;
    while (end > 0)
    {
        Swap(&arr[0], &arr[end]);  // 交换堆顶和当前末尾元素
        AdjustHeap(arr, end, 0);   // 递归调整剩余元素为大根堆
        end--;
    }

    // 打印排序结果
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}