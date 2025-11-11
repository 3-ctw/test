#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//主函数
int main()
{
	TN first;
	InitQueue(&first);
	//队尾入
	AddTail(&first, 1);
	PrintQueue(&first);
	AddTail(&first, 2);
	BackQueue(&first);
	SizeQueue(&first);
	PrintQueue(&first);
	PopHead(&first);
	AddTail(&first, 3);
	PrintQueue(&first);
	DestoryQueue(&first);
	return 0;
}