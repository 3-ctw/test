//求n的阶乘
//求前十个数字阶乘之和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	/*int j = 0;*/
//	/*int i = 0;*/
//	//int n = 0;
//	//int rst = 1;
//	//int sum = 0;
//	///*printf("请输入n的值：");
//	//scanf("%d", &n)*/;
//	//for(n = 1; n<=3; n++)
//	//{
//	//	rst *= n;
//	//	/*rst = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		rst *= i;
//	//	}*/
//	//	sum += rst;
//	}
//	printf("%d", sum);
//	return 0;
//}
//在于个有序数组中查找一个具体的某个数字
//int main()
//{
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int k = 10;*/
	//for (i = 0; i < se; i++)
	//{
	//	/*printf("%d\n", arr[i]);*/
	//	{
	//		if (arr[i] == k)
	//		{
	//			printf("输出值为%d，位置为%d\n", arr[i], i);
	//			break;
	//		}
	//	}
	//}
	//if (i == se)
	//{
	//	printf("找不到\n");
	//}
	// 
	// 
	// 
	// 
	//二分查找解决在于个有序数组中查找一个具体的某个数字
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	int lift = 0;
	int right = se - 1;
	int k = 11;
	while (lift <= right)
	{
		int mid = lift / 2 + right / 2;
		if (arr[mid] < k)
		{
			lift = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了值为%d，下标为%d", arr[mid], mid);
			break;
		}
		if (lift == right)
		{
			if (arr[mid] < k)
			{
				int mid1 = mid + 1;
				if (arr[mid1] < k)
				{
					printf("找不到\n");
				}
				else
				{
					printf("找到了值为%d,下标为%d\n", arr[mid1], mid1);
				}
				break;
			}
				
			else if (arr[mid] > k)
			{
				int mid1 = mid - 1;
				if (arr[mid1] < k)
				{
					printf("找不到\n");
				}
				else
				{
					printf("找到了值为%d,下标为%d\n", arr[mid1], mid1);
				}
				break;
			}
			else 
			{
				printf("找到了值为%d，下标为%d", arr[mid], mid);
			}
		}
	}
	return 0;
}*/
//多个字符从两端向中间移动
#include <stdlib.h>
#include <windows.h>
//int main()
//{
//	char arr1[] = "I Love You";
//	char arr2[] = "**********";
//	int lift = 0;
//	int right = strlen(arr1) - 1;
//	//while (lift <= right)
//	for (lift,right;lift<=right;lift++,right--)
//	{
//		arr2[lift] = arr1[lift];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	/*	lift++;
//		right--;*/
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//模拟用户登录场景，并且只能登陆三次，（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次军输入错误，则退出程序。）
//#include <string.h>
//int main()
//{
//	char mi[20] = {0};
//	//scnfe("%s\n", mi);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", mi);
//		if (strcmp(mi, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出登录\n");
//	}
//	
//	return 0;
//}

//猜字游戏
#include <time.h>
//#include <stdlib.h>
//void mun()
//{
//	printf("********1.play********\n");
//	printf("********2.quit********\n");
//}
//void play()
//{
//	int shu = 0;
//	srand((unsigned int)time(NULL));
//	int sui = rand()%100+1;
//	while (1)
//	{
//		printf("请输入你的数字\n");
//		scanf("%d", &shu);
//		if (shu == sui)
//		{
//			printf("猜对了\n");
//			break;
//		}
//		else if (shu > sui)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//int main()
//{
//	mun();
//	int choice = 0;
//	do
//	{
//		printf("请输入选项：\n");
//		scanf("%d", &choice);
//		if (choice == 1)
//		{
//			play();
//			printf("恭喜你完成游戏\n");
//			break;
//		}
//		else if (choice == 2)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入:\n");
//		}
//	} while (1);
//	return 0;
//}
//
//自动关机代码
//int main()
//{
//	char mima[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("请输入：我是猪，否则电脑关机\n");
//		scanf("%s", mima);
//		if (strcmp(mima, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新输入");
//		}
//	}
//	return 0;
//}
//判断100到200数中的素数
//#include <math.h>
//int jude(int x)
//{
//	int n = 0;
//	for (n = 2; n < sqrt(x); n++)
//	{
//		if (x % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//	
//}
//
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		a = jude(i);
//		if (a)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//判断是不是润年
//int is_rain_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0)))
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
//	int a = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		a = is_rain_year(year);
//		if (a)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//通过函数完成一个整型有序数组的二分查找
//tow_minute(int arr[], int sz,int k)
//{
//	int lift = 0;
//	int right = sz - 1;
//	while (lift <= right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] < k)
//		{
//			lift = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = 0;
//	int k = 0;
//	scanf("%d", &k);
//	sz = sizeof(arr) / sizeof(0);
//	int m = tow_minute(arr,sz,k);
//	if (m == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了了，下表是%d\n", m);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void GetMemeory(char* p) {
//	p = (char*)malloc(100);
//}
//
//void Test() {
//	char* str = NULL;
//	GetMemeory(str);
//	strcpy(str, "Thunder");
//	strcat(str + 2, "Downloader");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//写一个函数，每调用一次这个函数，就会将num的值加1；
//int number(int *x)
//{
//	*x += 1;
//	return *x;
//}
//int main()
//{
//	int num = 0;
//	int y = number(&num);
//	printf("%d ", y);
//	int z = number(&num);
//	printf("%d ", z);
//	int f = number(&num);
//	printf("%d ", f);
//
//	return 0;
//}
//#include "add.h"
//int main()
//{
//	int a = 8;
//	int b = 7;
//	int c=add(a, b);
//	printf("%d", c);
//	return 0;
//}

//函数嵌套

//void new_filf()
//{
//	printf("haha\n");
//}
//void new_clis()
//{
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		new_filf();
//	}
//}
//int main()
//{
//	new_clis();
//	return 0;
//}


//输入1234，输出1 2 3 4 
//int print(int x)
//{
//	int i = 0;
//	while(i<4)
//	{
//		if (x > 9)
//		{
//			printf("%d\n", x % 10);
//			x = x / 10;
//		}
//		else
//		{
//			printf("%d\n", x);
//		}
//		i++;
//	}
//}
//int main()
//{
//	int a = 1234;
//    int b = print(a);
//	printf("%d", b);
//	return 0;
//}

//用函数写出strlen的用法
//int f_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')//注意是单引号还是双引号，字符串为双引号，字符为单引号。
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcd";
//	int a= f_strlen(str);
//	printf("%d", a);
//	return 0;
//
//}

//迭代法，求斐波那契函数
//int Fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h> 
//int main() {
//	int sum, pad, pAd;
//	sum = pad = 5;
//	pAd = ++sum, pAd++, ++pad;
//	printf("%d\n", pAd);
//}

//用函数递归来实现strlen功能。
//int my_strlen(char arr[])
//{
//	if (*arr != '\0')
//	{
//		int z = 1 + my_strlen(arr + 1);
//		return z;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "asd";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//用递归方式完成阶乘计算。
//int my_fact(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x = x * my_fact(x-1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = my_fact(a);
//	printf("%d", b);
//	return 0;
//}
//实现斐波那契数
//int my_fbnq(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return my_fbnq(x - 2) + my_fbnq(x - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = my_fbnq(a);
//	printf("%d", b);
//	return 0;
//}
//

//冒泡排序
//实现将数组从倒叙排列改为升序排列
//void my_popo(int arr[],int se)
//{
//	int i = 0;
//	for (i = 0; i < se - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < se - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int se = 0;
//	se = sizeof(arr) / sizeof(arr[0]);
//	my_popo(arr, se);
//	int c = 0;
//	for (c = 0; c < 10; c++)
//	{
//		printf("%d ", arr[c]);
//	}
//	return 0;
//}
//将三个整数从大到小排序
//void my_pixu(int arr[])
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	if (arr[0] > arr[1])
//	{
//		if (arr[0] > arr[2])
//		{
//			a = arr[0];
//			if (arr[2] > arr[1])
//			{
//				b = arr[2];
//				c = arr[1];
//			}
//		}
//		else
//		{
//			a = arr[2];
//			b = arr[0];
//			c = arr[1];
//		}
//	}
//	else
//	{
//		if (arr[0] > arr[2])
//		{
//			a = arr[1];
//			b = arr[0];
//			c = arr[2];
//		}
//		else
//		{
//			if (arr[2] > arr[1])
//			{
//				a = arr[2];
//				b = arr[1];
//				c = arr[0];
//			}
//			else
//			{
//				a = arr[1];
//				b = arr[2];
//				c = arr[0];
//			}
//		}
//
//	}
//	printf("%d %d %d", a, b, c);
//}
//int main()
//{
//	int zrr[3] = { 2,5,8 };
//	my_pixu(zrr);
//	return 0;
//}
//代码二
//void Sawp(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		Sawp(&a, &b);
//	}
//	if (a < c)
//	{
//		Sawp(&a, &c);
//	}
//	if (b < c)
//	{
//		Sawp(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//打印9*9乘法口诀表；
///*int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int z= i*j;
//			printf("%d*%d=%d\t", j,i,z);
//		}
//		printf("\n");
//	}
//	r*/eturn 0;
//}
//用一个函数来实现乘法口诀表，自己设置行和列；
//void print(n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int z = i * j;
//			printf("%d*%d=%d\t", j, i, z);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n );
//	print(n);
//	return 0;
//}

//
//#include <stdio.h>
//int main() {
//	char a = 'H';
//	a = (a > 'A' && a <= 'Z') ? (a + 32) : a;
//	printf("%c\n", a);
//	return 0;
//}
//double d = 3.2;
//int x, y;
//x = 1.2;
//y = (x + 3.8) / 5.0;
//printf("%d\n", d* y);

//字符串逆序
//递归法
//int main()
//{
//	char a[] = "abcdef";
//	int i = 0;
//	int lift = 0;
//	int right = strlen(a)-1;
//	while (lift < right)
//	{
//		char tmp = a[right];
//		a[right] = a[lift];
//		a[lift] = tmp;
//		lift++;
//		right--;
//	}
//	for (i = 0; i <= strlen(a) - 1; i++)
//	{
//		printf("%c", a[i]);
//	}
//	//my_reserve(a)
//	return 0;
//}

//函数法
//void my_reserve(char a[])
//{
	/*int lift = 0;
	int right = strlen(a) - 1;*/
//	while (lift < right)
//	{
//		char tmp = a[right];
//		a[right] = a[lift];
//		a[lift] = tmp;
//		lift++;
//		right--;
//	}
//}
//int main()
//{
	//char a[] = "abcdef";
//	int i = 0;
//	my_reserve(a);
//	for (i = 0; i <= strlen(a) - 1; i++)
//	{
//		printf("%c", a[i]);
//	}
////	
//	return 0;
//}

//递归法
//void my_reserve(char a[],int lift,int right)
//{
//	char tmp = a[lift];
//	a[lift] = a[right];
//	a[right] = tmp;
//	if (lift < right)
//	{
//		my_reserve(a, lift + 1, right - 1);
//	}
//}
//int main()
//{
//	char a[] = "abcdef";
//	int i = 0;
//	int lift = 0;
//	int right = strlen(a) - 1;
//	char tmp = a[lift];
//	my_reserve(a,lift,right);
//	for (i = 0; i <= strlen(a) - 1; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}

//使用递归函数，完成输入一个非负整数，返回他的数字之和；
//int my_Add(int n)
//{
//	if (n > 9)
//	{
//		return my_Add(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = my_Add(a);
//	printf("%d", b);
//	return 0;
//}
//将两个数组中的元素互换；
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int brr[] = { 6,7,8,9,10 };
//	int i = 0;
//	int j = 0;
//	int lift = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (lift = 0; lift < sz; lift++)
//	{
//		int tmp = arr[lift];
//		arr[lift] = brr[lift];
//		brr[lift] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", brr[j]);
//	}
//	return 0;
//}

//void f(int a[], int i, int j) {
//	int t;
//	if (i < j) {
//		t = a[i];
//		a[i] = a[j];
//		a[j] = t;
//		f(a, i + 1, j - 1);
//	}
//}
//
//int main() {
//	int i, a[5] = { 1,2,3,4,5 };
//	f(a, 0, 4);
//	for (i = 0; i < 5; i++) printf("%d,", a[i]);
//}
//
//不用创建变量，交换两个整数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
//

//结构体；
//struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//};
//void set(struct Stu* s)
//{
//	strcpy((*s).name, "chentewei");
//	(*s).age = 18;
//	(*s).score = 100;
//}
//void print(struct Stu s)
//{
//	printf("%s %d %d", s.name, s.age, s.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set(&s);
//	print(s);
//	return 0;
//}

//走台阶
//int my_step(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//	else
//	{
//		return my_step(x - 1) + my_step(x - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",my_step(n));
//	return 0;
//}

//序列中删除指定数字
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int p = 0;
//	scanf("%d", &m);
//	int arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] != m)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//		/*else
//		{
//			continue;
//		}*/
//		for (i = 0; i < j; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[4] = { 0 };
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//输入n个成绩，并算出最高值和最低值的差
//void my_task(int arr[])
//{
//	int min = arr[0];
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d %d %d", max, min, max - min);
//}
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	my_task(arr);
//	/*printf("%d\n", my_task(arr));*/
//	return 0;
//}

//将大小写字母转换为大小写
//int main()
//{
//	char ch = 0;
//	while (1)
//	{
//		scanf("%c", &ch);
//		if (ch >= 'a' && ch <= 'z')
//		{
//			ch = ch - 32;
//		}
//		else
//		{
//			ch = ch + 32;
//		}
//		printf("%c\n", ch);
//		getchar();
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (1)
//	{
//		ch = getchar();
//		if (ch >= 'a' && ch <= 'z')
//		{
//			ch = ch - 32;
//		}
//		else
//		{
//			ch = ch + 32;
//		}
//		printf("%c\n", ch);
//		getchar();
//	}
//
//	return 0;
//}

//判断是不是字母
//int main()
//{
//	char ch = 0;
//	while (1)
//	{
//		scanf("%c", &ch);
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		{
//			printf("ch是字母\n");
//		}
//		else
//		{
//			printf("ch不是字母\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//判断最大值
//int main()
//{
//	int i = 0;
//	int arr[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//变种水仙花
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i % k) * (i / k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

//int main() {
//	int x = 'f';
//	printf("%c\n", 'A' + (x - 'a' + 1));
//}

//结构体的应用
//struct peo
//{
//	char name[20];
//	char sex[5];
//	int age;
//	char teed[12];
//};
//int main()
//{
//
//	struct peo a = { "zhangsan","nan",18,"1472583693" };
//	a.age = 20;
//	printf("%s %s %d %s", a.name, a.sex, a.age, a.teed);
//	return 0;
//}

//返回会二进制参数中1的个数
//int issss(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		if ((x % 2) == 1)
//		{
//			count++;
//		}
//		x = x / 2;
//	}
//	return count;
//}
//int issss(int x)
//{
//	int count = 0;
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> 1) & 1) == 1)
//		{
//			count++;
//		}
//	}*/
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = issss(a);
//	printf("%d", b);
//	return 0;
//}

//判断一个数是不是2的次方
#include <assert.h>
//void jude(int x)
//{
//	assert(x);
//	if ((x & (x - 1))==0)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	jude(a);
//	return 0;
//}

//输入两个数，判断它们二进制有多少是不同的
//int my_differ(int x, int y)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x & 1) != (y & 1))
//		{
//			count++;
//			//x = x >> 1;
//			//y = y >> 1;
//		}
//		x = x >> 1;
//		y = y >> 1;
//		//if (((x >>i)& 1) != ((y>>i) & 1))
//		//{
//		//	count++;
//		//}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = my_differ(a, b);
//	printf("%d", c);
//	return 0;
//}
//my_differ(int x, int y)
//{
//	int count = 0;
//	int m = 0;
//	m = x ^ y;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = my_differ(a, b);
//	printf("%d", c);
//	return 0;
//}
//获取一个整数，打印出它二进制数的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= 32; i += 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 2; i <= 32; i += 2)
//	{
//		printf("%d", (a & 1));
//		a = a >> i;
//	}
//	return 0;
//}

//输出一个X
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			if (i == j)
//			{
//				printf("*");
//			}
//			else if (i + j == a - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔
//is_year(int x)
//{
//	return (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if (is_year(y) == 1 && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}