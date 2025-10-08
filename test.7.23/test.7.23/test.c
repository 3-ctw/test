#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//旋转字符
//void my_spin(char arr[],int a)
//{
//	int sz = strlen(arr);
//	int i = 0;
//	//int lift = 0;
//	int right = sz;
//	for (i = 0; i < a; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = tmp;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	char arr[] = "ABCD";
//	my_spin(arr,a);
//	printf("%s\n", arr);
//	return 0;
//}
//旋转字符2
//void my_reserve(char arr[], int sz, int a)
//{
//	int lift = 0;
//	int right = sz-1;
//	while (a--)
//	{
//		char tmp = arr[lift];
//		arr[lift] = arr[right];
//		arr[right] = tmp;
//		lift++;
//		right--;
//	}
//}
//void my_spin(char arr[], int a)
//{
//	int sz = strlen(arr);
//	int i = 0;
//	my_reserve(arr, sz, a);
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int a = 0;
//	scanf("%d", &a);
//	my_spin(arr, a);
//	printf("%s\n", arr);
//	return 0;
//}
//在矩阵中查找某个数字是否存在
//struct find
//{
//	int x;
//	int y;
//};
//struct find my_find(int arr[3][3], int a)
//{
//	int i = 0;
//	int j = 2;
//	struct find p = { -1,-1 };
//	while (1)
//	{
//		if (arr[i][j] < a)
//		{
//			i++;
//			if (i == 3)
//			{
//				goto end;
//			}
//		}
//		else if (arr[i][j] == a)
//		{
//			p.x = i;
//			p.y = j;
//			goto end;
//		}
//		else 
//		{
//			for (j; j >= 0; j--)
//			{
//				if (arr[i][j] == a)
//				{
//					p.x = i;
//					p.y = j;
//					goto end;
//				}
//			}
//		}
//	}
//end:
//	if (i == 3)
//	{
//		return p;
//		//printf("没找到\n");
//	}
//	else
//	{
//		return p;
//		//printf("找到了,坐标为%d,%d\n",i,j);
//	}
//}
void my_find(int arr[3][3], int a)
{
	int i = 0;
	int j = 2;
	while (1)
	{
		if (arr[i][j] < a)
		{
			i++;
			if (i == 3)
			{
				goto end;
			}
		}
		else if (arr[i][j] == a)
		{
			goto end;
		}
		else
		{
			for (j; j >= 0; j--)
			{
				if (arr[i][j] == a)
				{
					goto end;
				}
			}
		}
	}
end:
	if (i == 3)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了,坐标为%d,%d\n",i,j);
	}
}
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int a = 0;
	scanf("%d", &a);
	my_find(arr, a);
	return 0;
}