#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
//Ö÷º¯Êý
int main()
{
	int i = 0;
	SK stack;
	InitStack(&stack);
	AddStack(&stack, 1);
	i = TopStack(&stack);
	printf("%d ", i);
	Popstack(&stack);
	AddStack(&stack, 2);
	i = TopStack(&stack);
	printf("%d ", i);
	Popstack(&stack);
	AddStack(&stack, 3);
	i=TopStack(&stack);
	printf("%d ", i);
	Popstack(&stack);
	AddStack(&stack, 4);
	i=TopStack(&stack);
	printf("%d ", i);
	SizeStack(&stack);
	bool s =EmptyStack(&stack);
	printf("%d", s);
	DisStack(&stack);
	return 0;
}