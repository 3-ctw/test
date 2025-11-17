#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
typedef char IntQin;
typedef struct TreeNode
{
	IntQin root;
	struct TreeNode* lift;
	struct TreeNode* right;
}TN;
//初始化
void InistTree(TN* p)
{
	p->lift = NULL;
	p->right = NULL;
}
//前序
void PriTree(TN* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ",p->root);
	PriTree(p->lift);
	PriTree(p->right);
}
//中序
void InderTree(TN* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	PriTree(p->lift);
	printf("%c ", p->root);
	PriTree(p->right);
}
//后序
void ListTree(TN* p)
{
	if (p == NULL)
	{
		printf("NULL ");
		return;
	}
	PriTree(p->lift);
	PriTree(p->right);
	printf("%c ", p->root);
}
//计算树的节点
void HighTree(TN* p,int* count)
{
	if (p == NULL)
	{
		return ;
	}
	else
	{
		(*count)++;
		HighTree(p->lift,count);
		HighTree(p->right,count);
	}
}
int TreeSize(TN* p)
{
	return p ==NULL ? 0 : TreeSize(p->lift) + TreeSize(p->right) + 1;
}
//计算树的叶子节点个数
void TreeLeafSize(TN* p,int* count)
{
	if (p == NULL)
	{
		return;
	}
	if (p->lift == NULL && p->right == NULL)
	{
		(*count)++;
	}
	TreeLeafSize(p->lift,count);
	TreeLeafSize(p->right,count);

}
//释放内存
void DestoryTree(TN* p)
{
	if (p == NULL)
	{
		return;
	}
	DestoryTree(p->lift);
	DestoryTree(p->right);
	free(p);
}
int main()
{
	TN* A=(TN*)malloc(sizeof(TN));
	if (A == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	//A->root = (IntQin*)calloc(1, sizeof(IntQin));
	A->root = 'A';
	A->lift = NULL;
	A->right = NULL;
	TN* B = (TN*)malloc(sizeof(TN));
	//B->root = (IntQin*)calloc(1, sizeof(IntQin));
	if (B == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	B->root = 'B';
	B->lift = NULL;
	B->right = NULL;
	TN* C = (TN*)malloc(sizeof(TN));
	//C->root = (IntQin*)calloc(1, sizeof(IntQin));
	if (C == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	C->root = 'C';
	C->lift = NULL;
	C->right = NULL;
	TN* D = (TN*)malloc(sizeof(TN));
	//D->root = (IntQin*)calloc(1, sizeof(IntQin));
	if (D == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	D->root = 'D';
	D->lift = NULL;
	D->right = NULL;
	A->lift = B;
	A->right = C;
	B->lift = D;
	//InistTree(&tree);
	PriTree(A);
	printf("\n");
	InderTree(A);
	printf("\n");
	ListTree(A);
	printf("\n");
	int count = 0;
	HighTree(A, &count);
	printf("%d", count);
	printf("\n");
	count = 0;
	TreeLeafSize(A, &count);
	printf("%d", count);
	DestoryTree(A);
	return 0;
}