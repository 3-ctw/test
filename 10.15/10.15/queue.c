#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//初始化
void InitQueue(TN* pc)
{
	assert(pc);
	pc->head = NULL;
	pc->tail = NULL;
}

//队尾入
void AddTail(TN* pc, Integer x)
{
	assert(pc);
	QU* node = (QU*)calloc(1, sizeof(QU));
	if (node == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	if (pc->tail == NULL)
	{
		pc->tail = pc->head = node;
	}
	else
	{
		pc->tail->next = node;
		pc->tail = node;
	}
}

//队头出
void PopHead(TN* pc)
{
	assert(pc);
	assert(pc->head);
	QU* cur = pc->head->next;
	free(pc->head);
	pc->head = cur;
	if (pc->head == NULL)
	{
		pc->tail = NULL;
	}
}

//取出队头
Integer PrintQueue(TN* pc)
{
	assert(pc);
	if(pc->head == NULL)
	{
		printf("队列已空\n");
		return -1;
	}
	return pc->head->data;
}

//销毁
void DestoryQueue(TN* pc)
{
	assert(pc);
	while (pc->head != NULL)
	{
		QU* cur=pc->head->next;
		free(pc->head);	
		pc->head = cur;
	}
	pc->tail = NULL;
}

//获取队尾
Integer BackQueue(TN* pc)
{
	assert(pc);
	assert(pc->tail);
	return pc->tail->data;
}

//获取总数
Integer SizeQueue(TN* pc)
{
	assert(pc);
	int count = 0;
	QU* cur = pc->head;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}