#define _CRT_SECURE_NO_WARNINGS
#include "test.h"
//初始化信息
void Initmessage(St* pc) 
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//增加信息
void Addmessage(St* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("内容已满，无法添加新的信息\n");
		return;
	}
	printf("请输入学生的名字:>\n");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入学生的性别:>\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入学生的年龄:>\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入学生的学号:>\n");
	scanf("%s", pc->data[pc->count].id);
	pc->count++;
	printf("增加完成！\n");
}

//查看信息
void Checkmessage(St* pc)
{
	if (pc->count == 0)
	{
		printf("空!\n");
		return;
	}
	printf("%-20s\t%-5s\t%s\t%-20s\n", "姓名", "性别", "年龄", "学号");
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5s\t%d\t%-20s\n",  pc->data[i].name, 
											pc->data[i].sex, 
											pc->data[i].age, 
											pc->data[i].id);
	}

}
