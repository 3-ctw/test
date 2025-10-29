#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    double c = 0;
//    char ch;
//    char ch2[10000];
//    scanf("%lld", &a);
//    scanf("%lld", &b);
//    scanf("%lf", &c);
//    getchar();
//    scanf("%c", &ch);
//    scanf("%9999s", ch2[10000]);
//    
//    printf("%lld\n", a);
//    printf("%lld\n", b);
//    printf("%.1f\n", c);
//    printf("%c\n", ch);
//    printf("%s\n", ch2);
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int b = 0;
//    int a = 0;
//    scanf("%d", &a);
//    a = abs(a);
//    while (a >= 10)
//    {
//        b = a % 10;
//        a = a / 10;
//
//    }
//    printf("%d\n", b);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int b = 0;
//    int a = 0;
//    int i = 2;
//    scanf("%d", &a);
//    a = abs((int)a);
//    while (i < 2)
//    {
//        b = a % 10;
//        a = a / 10;
//        i++;
//    }
//    printf("%d\n", b);
//    return 0;
//}
int main()
{
    // int n=0;
    // int m=0;
    // int i=1000;
    // scanf("%d",&n);
    // while(n)
    // {
    //     m+=(n%10)*i;
    //     n=n/10;
    //     i=i/10;
    // }
    // printf("%d\n",m);
    int n[5] = { 0 };
    scanf("%d", n);
    int i = 3;
    for (i; i >= 0; i--)
    {
        printf("%d", n[i]);
    }
    return 0;
}