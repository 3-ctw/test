#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//Ö÷º¯Êý
int main()
{
	OL* list = InitList();
	AddFrontList(1, list);
	AddFrontList(2, list);
	AddFrontList(3, list);
	AddFrontList(4, list);
	AddFrontList(5, list);
	AddPrevList(6, list);
	AddPrevList(7, list);
	AddPrevList(8, list);
	AddMidList(9, 5, list);
	AddMidList(10, 0, list);
	PrintList(list);
	DistoryList(list);
	return 0;

}