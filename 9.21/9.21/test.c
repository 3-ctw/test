#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
//int main()
//{
//    long n = 0;
//    scanf("%d", &n);
//    n = abs(n);
//    printf("%d", (n * (n + 1)) / 2);
//    return 0;
//}
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("<\n");
    }
    else if(a == b)
    {
        printf("=\n");
    }
    else
    {
        printf(">\n");
    }
    return 0;
}