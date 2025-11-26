#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
int main()
{
	LK* head = InitList();
	AddFrontList(head, 1);
	AddFrontList(head, 2);
	AddFrontList(head, 3);
	AddFrontList(head, 4);
	AddPreList(head, 5);
	InsertList(head, 6, 4);
	PrintList(head);
	printf("\n");
	PopList(head, 4);
	PrintList(head);
	PopList(head, 1);
	printf("\n");
	PrintList(head);
	PopList(head, 4);
	printf("\n");
	PrintList(head);
	DistroyList(head);
}