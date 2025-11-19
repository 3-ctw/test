#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//É¨À×
//int main() {
//    int n = 0;
//    int m = 0;
//    while (scanf("%d%d", &n, &m) == 2)
//    {
//        getchar();
//        char arr[1000][1001] = { 0 };
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%s", arr[i]);
//        }
//        int dirs[8][2] = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1} };
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (arr[i][j] == '*')
//                {
//                    putchar('*');
//                }
//                else {
//                    int count = 0;
//                    for (int k = 0; k < 8; k++)
//                    {
//                        int x = i + dirs[k][0];
//                        int y = j + dirs[k][1];
//                        if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == '*')
//                        {
//                            count++;
//                        }
//                    }
//                    putchar(count + '0');
//                }
//            }
//            putchar('\n');
//        }
//    }
//    return 0;
//}

//¶þ²æÊ÷±éÀú
//typedef struct TreeNode
//{
//	struct TreeNode* left;
//	struct TreeNode* right;
//	char val;
//}TN;
//
////
//TN* CreatTree(char* str, int* pi)
//{
//	if (str[*pi] == '#')
//	{
//		(*pi)++;
//		return NULL;
//	}
//
//	TN* root = (TN*)malloc(sizeof(TN));
//	if (root == NULL)
//	{
//		printf("malloc Ê§°Ü");
//		exit(-1);
//	}
//	root->val = str[(*pi)];
//	(*pi)++;
//	root->left = CreatTree(str, pi);
//	root->right = CreatTree(str, pi);
//	return root;
//}
//
////´òÓ¡
//void InOrder(TN* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	InOrder(root->left);
//	printf("%c ", root->val);
//	InOrder(root->right);
//}
//int main()
//{
//	char str[100];
//	scanf("%s", str);
//	int i = 0;
//	TN* root = CreatTree(str, &i);
//	InOrder(root);
//	return 0;
//}