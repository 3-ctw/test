#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 1. 定义链栈节点结构（考试必写，结构名、成员名规范不丢分）
typedef struct StackNode {
    int data;                  // 数据域（408常考int，若为通用可写void*，但int足够应对多数题）
    struct StackNode* next;    // 指针域，指向后继节点（栈中即下一个栈元素）
} StackNode, * LinkStack;       // StackNode：节点类型；LinkStack：栈顶指针类型（简化写法）

// 2. 初始化链栈（空栈：头节点存在，next为NULL）
// 输入：栈顶指针的指针（需修改指针本身，必须传二级指针）
// 输出：int（0成功，-1失败，考试加返回值更规范）
int InitLinkStack(LinkStack* S) {
    // 为头节点分配内存（考试漏malloc直接丢分，需判空）
    *S = (LinkStack)malloc(sizeof(StackNode));
    if (*S == NULL) return -1;  // 内存分配失败（极端情况，写了更严谨）
    (*S)->next = NULL;          // 空栈标志：头节点的next指向NULL（核心）
    return 0;
}

// 3. 入栈操作（栈顶插入：新节点插在头节点之后，考试高频）
// 输入：栈顶指针S、待入栈数据e
// 输出：int（0成功，-1失败）
int Push(LinkStack S, int e) {
    // 1. 创建新节点并初始化
    StackNode* newNode = (StackNode)malloc(sizeof(StackNode));
    if (newNode == NULL) return -1;  // 内存分配失败
    newNode->data = e;               // 存入数据e

    // 2. 新节点入栈（核心步骤，顺序不能错，避免断链）
    newNode->next = S->next;  // 新节点的next先指向原栈顶（头节点的next）
    S->next = newNode;        // 头节点的next指向新节点，新节点成为新栈顶

    return 0;
}

// 4. 出栈操作（栈顶删除：删除头节点后的第一个节点，考试高频）
// 输入：栈顶指针S、接收出栈数据的指针e（需传出数据，传指针）
// 输出：int（0成功，-1失败/栈空）
int Pop(LinkStack S, int* e) {
    // 先判空（考试漏判空直接丢分，空栈无法出栈）
    if (S->next == NULL) return -1;  // 空栈标志：头节点next为NULL

    // 1. 记录待删除的栈顶节点
    StackNode* temp = S->next;       // temp指向当前栈顶（要删除的节点）
    *e = temp->data;                 // 取出栈顶数据，存入e指向的变量

    // 2. 移除栈顶节点（核心步骤，顺序不能错）
    S->next = temp->next;            // 头节点的next指向原栈顶的下一个节点
    free(temp);                      // 释放删除节点的内存（考试漏free易丢分，避免内存泄漏）

    return 0;
}

// 5. 取栈顶元素（仅读取，不删除，选择题/代码题均高频）
// 输入：栈顶指针S、接收栈顶数据的指针e
// 输出：int（0成功，-1失败/栈空）
int GetTop(LinkStack S, int* e) {
    // 判空（必写步骤）
    if (S->next == NULL) return -1;
    *e = S->next->data;  // 直接读取头节点next（栈顶）的数据，无需修改指针
    return 0;
}