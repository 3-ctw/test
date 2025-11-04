#define _CRT_SECURE_NO_WARNINGS
#include "test.h"
//主函数
int main()
{
	int input = 0;
	St stu;
	Initmessage(&stu);//初始化信息
	do
	{
		printf("请输入你的选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Addmessage(&stu);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Checkmessage(&stu);
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入：>");
		}
	} while (input);
	printf("退出成功！\n");
}