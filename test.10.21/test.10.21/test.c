#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//杨辉三角
#include <stdio.h>

int main() {
    int a[34][34] = { 0 };
    int i = 0;
    int n = 0;
    scanf("%d", &n);
    int k = 0;
    for (k = 0; k < n; k++)
    {
        int q = 0;
        for (q = 0; q <= k; q++)
        {
            if (k == 0 || k == q || q==0)
            {
                a[k][q] = 1;
            }
            else
            {
                a[k][q] = a[k - 1][q] + a[k - 1][q - 1];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
//校门外的树
//int main()
//{
//    int L = 0;
//    int M = 0;
//    scanf("%d%d", &L, &M);
//    int a[10001] = { 0 };
//    int i = 0;
//    for (i = 0; i < M; i++)
//    {
//        int l = 0;
//        int m = 0;
//        scanf("%d%d", &l, &m);
//        for (l; l <= m; l++)
//        {
//            a[l] = 1;
//        }
//    }
//    int j = 0;
//    int count = 0;
//    for (j = 0; j <= L; j++)
//    {
//        if (a[j] == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", L + 1 - count);
//    return 0;
//}

//约瑟循环
//int findKing(int n, int k, int m) {
//    // 创建一个数组表示所有人，1表示在队列中，0表示已出队
//    int people[100] = { 0 };
//    int count = n;  // 剩余人数
//    int current = k; // 当前报数的人
//    int num = 0;    // 当前报的数字
//
//    // 初始化所有人都在队列中
//    for (int i = 0; i < n; i++) {
//        people[i] = 1;
//    }
//
//    while (count > 1) {
//        // 如果当前人还在队列中，就报数
//        if (people[current] == 1) {
//            num++;
//            // 如果报到m，这个人出队
//            if (num == m) {
//                people[current] = 0; // 出队
//                count--;
//                num = 0; // 重置报数
//            }
//        }
//
//        // 移动到下一个人（环形）
//        current = (current + 1) % n;
//    }
//
//    // 找到最后剩下的人
//    for (int i = 0; i < n; i++) {
//        if (people[i] == 1) {
//            return i;
//        }
//    }
//    return -1; // 理论上不会执行到这里
//}
//
////二维矩阵
//int main() {
//    int n, k, m;
//    scanf("%d%d%d", &n, &k, &m);
//    int result = findKing(n, k, m);
//    printf("%d\n", result);
//    return 0;
//}
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int a[1000][1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int k = 0;
//    long long sum = 0;
//    for (k = 0; k < n; k++)
//    {
//        int q = 0;
//        for (q = 0; q < m; q++)
//        {
//            sum += a[k][q];
//        }
//    }
//    printf("%lld", sum);
//    return 0;
//}
//
////判断上三角矩阵
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int k = 0;
//    int count = 0;
//    for (k = 0; k < n; k++)
//    {
//        int q = 0;
//        for (q = 0; q < k; q++)
//        {
//            if (a[k][q] != 0)
//            {
//                count++;
//                break;
//            }
//        }
//    }
//    if (count != 0)
//    {
//        printf("NO\n");
//    }
//    else {
//        printf("YES\n");
//    }
//    return 0;
//}

//矩阵的转置
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int a[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int k = 0;
//    for (k = 0; k < m; k++)
//    {
//        int q = 0;
//        for (q = 0; q < n; q++)
//        {
//            printf("%d ", a[q][k]);
//        }
//        printf("\n");
//    }
//    return 0;
//}