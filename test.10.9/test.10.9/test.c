#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
////int main() {
////    int n = 0;
////    scanf("%d", &n);
////    if (n < 0)
////    {
////        n = (int)abs(n);
////    }
////    int sum = 0;
////    while (n)
////    {
////        sum += n % 10;
////        n = n / 10;
////    }
////    printf("%d\n", sum);
////    return 0;
////
////}
////int main() {
////    int n = 0;
////    scanf("%d", &n);
////    int i = 0;
////    for (i = 0; i < n; i++)
////    {
////        if (i == 4 || i % 4 == 0)
////        {
////            continue;
////        }
////        else {
////            printf("%d\n", i);
////        }
////    }
////    return 0;
////}
//int num(int n)
//{
//    int sum = 1;
//    while (n)
//    {
//        sum *= n % 10;
//        n = n / 10;
//    }
//    return sum;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int m = num(i);
//        if (m % 4 == 0)
//        {
//            continue;
//        }
//        else {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//bool num(int n)
//{
//    if (n % 4 == 0)
//    {
//        return false;
//    }
//    else
//    {
//        while (n > 1)
//        {
//            int a = n % 10;
//            if (a == 4)
//            {
//                return false;
//            }
//            n = n / 10;
//        }
//        return true;
//    }
//
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (num(i))
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//long long arr[900][900];
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (i == 0 && j == 0) {
//                arr[i][j] = 1;
//            }
//            else if (i == 0) {
//                arr[i][j] = arr[i][j - 1] % (int)(1e9 + 7);
//            }
//            else if (j == 0) {
//                arr[i][j] = arr[i - 1][j] % (int)(1e9 + 7);
//            }
//            else {
//                arr[i][j] = (arr[i - 1][j] + arr[i][j - 1]) % (int)(1e9 + 7);
//            }
//        }
//    }
//    printf("%lld\n", arr[n - 1][m - 1]);
//    return 0;
//}
//int num(int a[100], int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (a[i] == 0)
//        {
//            return i - 1;
//        }
//    }
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    int m = num(a, n);
//    for (m; m >= 0; m--)
//    {
//        printf("%d ", a[m]);
//    }
//    return 0;
//}