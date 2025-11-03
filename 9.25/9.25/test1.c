#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//确认所联系人的下标
int Find(Contact* con, char name[5])
{
	int i = 0;
	for (i = 0; i < con->count; i++)
	{
		if (strcmp(name, con->data[i].name) == 0)
		{
			return i;
			break;
		}
	}
	return -1;
}

//初始化通讯录（动态）
void Initcontact(Contact* con)
{
	assert(con);
	con->data = (People*)calloc(INITAL,sizeof(People));
	if (con->data == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	con->count = 0;
	con->total = 2;
}

//
//增加联系人容量
void Dilapeople(Contact* con)
{
	assert(con);
	People* tmp = (People*)realloc(con->data, (sizeof(People) * INITAL) + INITAL);
	if (tmp ==NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		con->data = tmp;
	}
	con->total += INITAL;
}
void Addpeople(Contact* con)
{
	assert(con);  
	if (con->count == con->total)
	{
		//增容
		Dilapeople(con);
		printf("增容完成\n");
	}
	printf("请输入联系人姓名：>");
	scanf("%s", con->data[con->count].name);
	printf("请输入联系人性别：>");
	scanf("%s", con->data[con->count].sex);
	printf("请输入联系人电话：>");
	scanf("%s", con->data[con->count].num);
	printf("请输入联系人年龄：>");
	scanf("%d", &(con->data[con->count].age));
	con->count++;
	printf("增加完成\n");
}

//删除联系人
void Deletepeople(Contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("通讯录为零，没有可删除的数据\n");
	}
	char name[5] = { 0 };
	printf("请输入你要删除的联系人姓名：>\n");
	scanf("%s", name);
	int p = find(con, name);
	if (p == -1)
	{
		printf("你所删除的联系人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = p; j < (con->count); j++)
		{
			con->data[j] = con->data[j + 1];
		}
		printf("删除完成\n");
	}
	con->count--;
}

//查看联系人
void Checkpeople(const Contact* con)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-20s\n", "姓名", "性别", "年龄", "电话");
	for (i = 0; i < con->count; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-20s\n", con->data[i].name,
			con->data[i].sex,
			con->data[i].age,
			con->data[i].num);
	}
}

//查找联系人
void Findpeople(Contact* con)
{
	assert(con);
	char name[5] = { 0 };
	printf("请输入你要查找的联系人姓名：>\n");
	scanf("%s", name);
	int p = Find(con, name);
	if (p == -1)
	{
		printf("你所查找的联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-20s\n", "姓名", "性别", "年龄", "电话");

		printf("%-20s\t%-5s\t%-5d\t%-20s\n", con->data[p].name,
			con->data[p].sex,
			con->data[p].age,
			con->data[p].num);
		printf("查找完成\n");
	}
}

//修改联系人
void Reserpeople(Contact* con)
{
	assert(con);
	char name[5] = { 0 };
	printf("请输入你要修改的联系人姓名：>\n");
	scanf("%s", name);
	int p = Find(con, name);
	if (p == -1)
	{
		printf("你所查找的联系人不存在\n");
	}
	else
	{
		printf("请输入你修改后的名字:>\n");
		scanf("%s", con->data[p].name);
		printf("请输入你修改后的年龄:>\n");
		scanf("%d", &con->data[p].age);
		printf("请输入你修改后的性别:>\n");
		scanf("%s", con->data[p].sex);
		printf("请输入你修改后的电话:>\n");
		scanf("%s", con->data[p].num);
		printf("修改完成\n");
	}

}