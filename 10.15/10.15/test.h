#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

typedef int Integer;
//创建队列(先进先出，一边出（队头）一边进（队尾）)
typedef struct Queue
{
	struct Queue* next;
	Integer data;
}QU;
typedef struct TowNode
{
	QU* head;
	QU* tail;
}TN;

//初始化
void InitQueue(TN* pc);

//队尾入
void AddTail(TN* pc, Integer x);

//队头出
void PopHead(TN* pc);

//取出队头
Integer PrintQueue(TN* pc);

//取出队尾
Integer BackQueue(TN* pc);

//获取元素个数
Integer SizeQueue(TN* pc);

//销毁
void DestoryQueue(TN* pc);