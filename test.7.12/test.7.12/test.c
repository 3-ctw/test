#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������
//void meun()
//{
//	printf("............1,��    2����...........\n");
//	printf("............3,��    4����...........\n");
//	printf("............    5,�˳�    ...........\n");
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chu(int x, int y)
//{
//	return x / y;
//}
////void print(int (*pf)(int, int))
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", pf(a, b));
////}
//int main()
//{
//	int input = 0;
//	meun();
//	printf("��ѡ����Ҫʹ�õĹ���->:\n");
//	int (*arr[5])(int, int) = { 0,add,jian,cheng,chu };
//	do
//	{
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int a = 0;
//			int b = 0;
//			scanf("%d %d", &a, &b);
//			printf("%d\n", arr[input](a, b));
//		}
//		else
//		{
//			printf("�����������������:\n");
//		}
//	} while (input);
//	//scanf("%d", &input);
//	//do
//	//{
//	//	scanf("%d", &input);
//	//	if (input == 0)
//	//	{
//	//		printf("�˳�������");
//	//		break;
//	//	}
//	//	switch (input)
//	//	{
//	//	case(1):
//	//	{
//	//	/*	int a = 0;
//	//		int b = 0;
//	//		scanf("%d %d", &a, &b);
//	//		printf("%d\n", add(a, b));*/
//	//		print(add);
//	//		break;
//	//	}
//	//	case(2):
//	//	{
//	//		/*int a = 0;
//	//		int b = 0;
//	//		scanf("%d %d", &a, &b);
//	//		printf("%d\n", jian(a, b));*/
//	//		print(jian);
//	//		break;
//	//	}
//	//	case(3):
//	//	{
//	//	/*	int a = 0;
//	//		int b = 0;
//	//		scanf("%d %d", &a, &b);
//	//		printf("%d\n", cheng(a, b));*/
//	//		print(cheng);
//	//		break;
//	//	}
//	//	case(4):
//	//	{
//	//	/*	int a = 0;
//	//		int b = 0;
//	//		scanf("%d %d", &a, &b);
//	//		printf("%d\n", chu(a, b));*/
//	//		print(chu);
//	//		break;
//	//	}
//	//	/*case(0):
//	//	{
//	//		break;
//	//	}*/
//	//	default:
//	//		printf("����������");
//	//	}
//	//} while (input);
//	return 0;
//}
//ð������
//void print(int arr[10], int sz)
//{
//	int lift = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[i] > arr[j + i])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j + i];
//				arr[j + i] = tmp;
//			}
//		}
//	}
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//�Ż�
#include<stdlib.h>
struct student
{
	char name[100];
	int age;
	//char name[100];
};
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int cmp_int_age(const void* e1, const void* e2)
{
	return ((struct student*)e1)->age - ((struct student*)e2)->age;
}
int cmp_int_name(const void* e1, const void* e2)
{
	int ret = strcmp(((struct student*)e1)->name, ((struct student*)e2)->name);
		//return strcmp(((struct student*)e1)->name,((struct student*)e2)->name);
	return ret;
}
void test1()
{
	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	struct student stu[] = { {"tewei",18},{"chentejie",19},{"nantengyue",20} };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int sz = sizeof(stu) / sizeof(stu[0]);
	//printf("%d\n", sz);
	qsort(stu, sz, sizeof(stu[0]), cmp_int_age);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", stu[i].name);
	}
}
int main()
{
	test1();
	return 0;
}



