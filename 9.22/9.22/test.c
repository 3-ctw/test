#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//剑型图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//int p = n;
//		//int m = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i+2; j++)
//			{
//				printf("  ");
//			}
//			/*p++;*/
//			for (j = 0; j < n-i; j++)
//			{
//				printf("*");
//			}
//			/*m++;*/
//			printf("\n");
//		}
//	}
//	return 0;
//}

//公务员面试
//int main()
//{
//	int n = 0;
//	int min = 100;
//	int max = 0;
//	int count = 0;
//	int m = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		min = min > n ? n : min;
//		max = max < n ? n : max;
//		count += n;
//		m++;
//		if (m == 7)
//		{
//			break;
//		}
//	}
//	count = (count - max - min) / 5;
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//    while (1)
//    {
//        int a = 0;
//        int b = 0;
//        scanf("%d", &a, &b);
//        if (a == 0 && b == 0)
//        {
//            break;
//        }
//        printf("%d\n", a + b);
//    }
//    return 0;
//}

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    float sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum += 1 / i;
//    }
//    printf("%.6f\n", sum);
//    return 0;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a[100000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    int max = 0;
//    int min = 1000000;
//    while (n--)
//    {
//        for (i = 0; i < n; i++)
//        {
//            max = max < a[i] ? a[i] : max;
//            min = min > a[i] ? a[i] : min;
//        }
//    }
//    printf("%d\n", max - min);
//    return 0;
//}