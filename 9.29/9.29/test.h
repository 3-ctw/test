#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#define MAX 100
////顺序表(静态)
//typedef struct Student
//{
//	int data[MAX];
//	int count;
//	//int sum;
//}St;
//
////初始化
//void InitStudent(St* pc);
//
////增加内容
//void AddStudent(St* pc,int x);
//
////打印
//void Printf(St* pc);
//
////内插
//void InstStudent(St* pc, int x, int pos);
//
////头增
//void AddtStudent(St* pc, int x);
//
////内删
//void PopInstStudent(St* pc, int pos);
//
////尾删
//void PopBackStudent(St* pc);
//
////头删
//void PopFrontStudent(St* pc);

//动态
//顺序表
typedef struct Student
{
	int* data;
	int count;
	int sum;
}St;

//初始化
void InitStudent(St* pc);

//扩容
void ChackAddStudent(St* pc);

//增加内容
void AddStudent(St* pc, int x);

//打印
void Printf(St* pc);

//内插
void InstStudent(St* pc, int x, int pos);

//头增
void AddtStudent(St* pc, int x);

//内删
void PopInstStudent(St* pc, int pos);

//尾删
void PopBackStudent(St* pc);

//头删
void PopFrontStudent(St* pc);

//释放空间
void DestroyStudent(St* pc);

