#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
//主页面
void mnue()
{
	printf("**************************************\n");
	printf("**************************************\n");
	printf("**********1.增加      2.删除**********\n");
	printf("**********3.查看      4.查找**********\n");
	printf("**********5.修改      0.退出**********\n");
	printf("**************************************\n");
	printf("**************************************\n");
}
//主函数
int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do
	{
		mnue();
		printf("请输入你的选择：>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				addpeople(&con);
				break;
			case 2:
				deletepeople(&con);
				break;
			case 3:
				checkpeople(&con);
				break;
			case 4:
				findpeople(&con);
				break;
			case 5:
				reserpeople(&con);
				break;
			case 0:
				printf("成功退出\n");
				break;
			default:
				printf("输入错误，请重新输入:>\n");
		}

	} while (input);
	return 0;
}






