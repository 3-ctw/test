#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//顺序表
typedef struct OrList
{
	int* data;
	int count;
	int sum;
}OL;

//初始化
OL* InitList();

//尾增
void AddFrontList(int x, OL* p);

//头增
void AddPrevList(int x, OL* p);

//内插
void AddMidList(int x, int pos, OL* p);

//打印
void PrintList(OL* p);

//销毁
void DistoryList(OL* p);
