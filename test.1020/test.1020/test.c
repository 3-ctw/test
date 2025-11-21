#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    int b[10] = { 0 };
//    int m = 0;
//    for (m = 0; m < n; m++)
//    {
//        int j = 0;
//        int count = 0;
//        for (j=0; j < m; j++)
//        {
//            if (a[m] > a[j])
//            {
//                count++;
//            }
//        }
//        b[m] = count;
//    }
//    for (int k = 0; k < n; k++)
//    {
//        printf("%d ", b[k]);
//    }
//    return 0;
//}

//求方差
//int main() {
//    int T = 0;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n = 0;
//        scanf("%d", &n);
//        int a[100000] = { 0 };
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &a[i]);
//        }
//        int max = a[0];
//        int min = a[0];
//        long long sum = 0;
//        int k = 0;
//        for (k = 0; k < n; k++)
//        {
//            sum += a[k];
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (a[k] > max) {
//                    max = a[k];
//                }
//                if (a[k] < min) {
//                    min = a[k];
//                }
//            }
//        }
//        //方差
//        double avg = (double)sum / n;
//        int c = 0;
//        double fan = 0.0;
//        for (c = 0; c < n; c++)
//        {
//            double tmp = (a[c] - avg);
//            fan += tmp * tmp;
//        }
//        printf("%d %.3lf\n", max - min, (double)fan / n);
//    }
//    return 0;
//}
//数组计数维护
//int main() {
//    int T = 0;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n = 0;
//        int k = 0;
//        int S = 0;
//        int cnt = 0;
//        scanf("%d%d", &n, &k);
//        int a[100] = { 0 };
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &a[i]);
//            if (a[i] >= k)
//            {
//                S += a[i];
//            }
//            else if (a[i] == 0 && S >= 1)
//            {
//                S -= 1;
//                cnt++;
//            }
//            else {
//                ;
//            }
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
//}

//计数问题
//int main() {
//    int n = 0;
//    int x = 0;
//    scanf("%d%d", &n, &x);
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i < 10)
//        {
//            if (i == x)
//            {
//                count++;
//            }
//        }
//        else {
//            int n = i;
//            while (n)
//            {
//                if (n % 10 == x)
//                {
//                    count++;
//                }
//                n = n / 10;
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}