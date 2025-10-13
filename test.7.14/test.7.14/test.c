#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void my_reserve(int arr[10], int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//
//	if (arr[lift]);
////}
//void swap(char* but, char* but1, int byt)
//{
//	int i = 0;
//	for (i = 0; i < byt; i++)
//	{
//		char tmp = *but;
//		*but = *but1;
//		*but1 = tmp;
//		but++;
//		but1++;
//	}
//}
//void my_sqort(void* base, int sz, int byt, int (*compar)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (compar(((char*)base + j * byt), ((char*)base + (j + 1) * byt)) > 0)
//			{
//				swap((char*)base + j * byt, (char*)base + (j + 1) * byt, byt);
//				flag = 0;
//			}
//		} 
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int cmb_int(void* e1, void* e2)
//{
//	//return ((*(int*)e1) - (*(int*)e2));
//	return ((*(int*)e2) - (*(int*)e1));
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_sqort(arr, sz, sizeof(arr[0]), cmb_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//Ä£ÄâÊµÏÖstrlen
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	int lift = 0;
//	while (arr[lift])
//	{
//		if (arr[lift] != '\0')
//		{
//			lift++;
//			count++;
//		}
//	}
//	return count;
//}
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p)
//	{
//		if (*p != '\0')
//		{
//			p++;
//			count++;
//		}
//	}
//	return count;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	return 0;
//}
//int main()
//{
//	int lift = 0; 
//	int count = 0;
//	char arr[] = "abcetfg";
//	printf("%d", my_strlen(arr));
//	return 0;
//}