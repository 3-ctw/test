#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//模拟实现strcpy
//char* my_strcopy(char* p, const char* q)
//{
//	while (*q)
//	{
//		*p++ = *q++;
//	}
//	*p = '\0';
//	return p;
//}
//int main()
//{
//	char arr[20] = "abcdefg";
//	char brr[30] = { 0 };
//	my_strcopy(brr,arr);
//	printf("%s\n", arr);
//	printf("%s\n", brr);
//	return 0;
//}
//模拟实现strcat
//char* my_strcat(char* p, char* q)
//{
//	while (1)
//	{
//		if (*p == '\0')
//		{
//			while (*q)
//			{
//				*p++ = *q++;
//			}
//			break;
//		}
//		p++;
//	}
//	*p = '\0';
//	return p;
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	char brr[10] = "12345";
//	my_strcat(arr, brr);
//	printf("%s\n", arr);
//	return 0;
//}
//模拟实现strcmp
int my_strcmp(const char* p, const char* q)
{
	assert(p && q);
	while (*p++ == *q++)
	{
		if (*p == '\0'&&*q=='\0')
		{
			return 0;
		}
	}
	if (*p > *q)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr[20] = "abcdefgh";
	char brr[10] = "abcdefg";
	int ret = my_strcmp(arr, brr);
	if (ret > 0)
	{
		printf(">");
	}
	else if (ret < 0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
	return 0;
}