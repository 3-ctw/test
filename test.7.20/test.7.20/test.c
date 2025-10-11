#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{/*
////	int arr[10] = { 1,2,3,4,5,6 };
//	int brr[10] = { 7,8,9 };*/
	//char arr[10] = "zxcvb";
	//char brr[10] = "aqw";
	//char crr[10] = "ac";
//	char* ret = strncat(arr, brr,1);
//	printf("%s", ret);
	//printf("%s",strstr(arr, crr));
//	int* ret = strncpy(arr, brr, 8);
//	printf("%d", ret);
//	printf("%d",strncpy(arr, brr,8));
//	int ret =strncmp(arr, brr,3);
	//if (ret > 0)
	//{
	//	printf(">");
	//}
	//else if (ret < 0)
	//{
	//	printf("<");
	//}
	//else
	//{
	//	printf("=");
	//}
//	return 0;
//}
//模拟实现strstr函数
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//char* my_strstr(char* p, char* q)
//{
//	assert(p && q);
//	const char* start = q;
//	const char* end = p;
//	char* num = p;
//	char* men = q;
//
//	for (*num, *men; *num != *men; num++)
//	{
//		men = start;
//		for (*num, *men; *num != *men; men++)
//		{
//			//if (*q == *p)
//			//{
//			//	return (char*)p;
//			//}
//			if (*num == '\0')
//			{
//				break;
//			}
//		/*	else if (*q == '\0')
//			{
//				return NULL;
//			}*/
//		}
//		if (*num == *men)
//		{
//			return (char*)num;
//		}
//
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[10] = "abcde";
//	char brr[10] = "p";
//	char* ret = my_strstr(arr, brr);
//	printf("%s\n", ret);
//	return 0;
//}
//int main()
//{
//	const char* brr = "cb";
//	char arr[20] = "zxcvbnm";
//	char crr[20] = { 0 };
//	strcpy(crr, arr);
//	char* ret = strtok(crr, brr);
//	printf("%s\n", ret);
//	ret = strtok(NULL, brr);
//	printf("%s", ret);
//	return 0;
//}
// int main()
//{
//	//char* a = "abcr";
//	//printf("%s\n",a);
//	//return 0;
//	char arr[10] = "zxcvbnm";
//	char brr[10] = "zxc";
////	char* ret = memcpy(brr, arr, 4);
////	printf("%s\n", ret);
//	//char* ret = memmove(brr, arr,7);
//	//printf("%s\n", ret);
//	//int ret = memcmp(brr, arr, 3);
//	//	if (ret > 0)
//	//	{
//	//		printf(">");
//	//	}
//	//	else if (ret < 0)
//	//	{
//	//		printf("<");
//	//	}
//	//	else
//	//	{
//	//		printf("=");
//	//	}
//	char* ret = memset(arr, 'q', 4);
//	printf("%s\n", ret);
//	return 0;
//}

