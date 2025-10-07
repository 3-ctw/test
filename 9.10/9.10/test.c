#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//判断某一字符串是否由一字符串旋转而来。
//int jude(char arr[20], char brr[20])
//{
//	int len1 = strlen(arr);
//	int len2 = strlen(brr);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < len1; i++)
//	{
//		for (j = 0; j < len1-i; j++)
//		{
//			arr[j] = tmp;
//			arr[j] = arr[j+1];
//			arr[j+1] = tmp;
//		}
//		if (strcmp(arr,brr)==0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[20] = "abcde";
//	char brr[20] = "cdeax";
//	int relsut = jude(arr, brr);
//	if (relsut == 1)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}

//第二种方法
//int jude(char arr[20], char brr[20])
//{
//	int len1 = strlen(arr);
//	int len2 = strlen(brr);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr, brr,len1);
//	char* ret = strstr(arr, brr);
//	if (ret != NULL) 
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[20] = "abcde";
//	char brr[20] = "bcdea";
//	int result = jude(arr, brr);
//	if (result == 1)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}

//矩阵的转置
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//上三角矩阵的判断
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == 3)
//	{
//		printf("是上三角矩阵\n");
//	}
//	else
//	{
//		printf("不是上三角矩阵\n");
//	}
//	return 0;
//}

//有序序列判断。
//int jude(int arr[50],int len)
//{
//	int j = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			count1++;
//		}
//		elseif(arr[i] == arr[i + 1])
//		{
//			count1++;
//			count2++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//}
int main()
{
	int len = 0;
	int i = 0;
	scanf("%d", &len);
	int arr[50] = { 0 };
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	//jude(arr,n);
	int j = 0;
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			count1++;
		}
		else if(arr[i] > arr[i + 1])
		{
			count2++;
		}
		else
		{
			count1++;
			count2++;
		}
	}
	if (count1 == len - 1)
	{
		printf("升序序列\n");
	}
	else if (count2 == len)
	{
		printf("降序序列\n");
	}
	else
	{
		printf("不是有序序列\n");
	}
	return 0;
}