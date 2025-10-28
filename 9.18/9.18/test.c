#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//    //int n = 0;
//    //scanf("%d", &n);
//    char s[10000] = { 0 };
//    scanf("%s", s);
//    printf("%s\n", s);
//    return 0;
//}
int main()
{
    int a = 0;
    int b = 0;
    float c = 0;
    char ch = 0;
    char ch2 = 0;
    scanf("%d %d %f %c %s", &a, &b, &c, ch, ch2);
    printf("%d\n,%d\n,%f\n,%c\n,%s\n", a, b, c, ch, ch2);
    return 0;
}