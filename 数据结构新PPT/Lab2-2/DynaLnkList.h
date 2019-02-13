/***
*DynaLnkList.h - 动态链表的定义
*	
****/

#if !defined(DYNALNKLIST_H)
#define DYNALNKLIST_H

#include "ElemType.h"

/*------------------------------------------------------------
// 链表结构的定义
------------------------------------------------------------*/
typedef struct Node
{
	ElemType data;				// 元素数据
	struct Node *next;			// 链表中结点元素的指针
} LNode, *LinkList;

/*------------------------------------------------------------
// 链表的基本操作
------------------------------------------------------------*/

bool InitList(LinkList *L);
void DestroyList(LinkList *L);
bool ListEmpty(LinkList L);
int  ListLength(LinkList L);
bool GetElem(LinkList L, int i, ElemType *e);
int  LocateElem(LinkList L, ElemType e, int (*fp)(ElemType, ElemType));
bool PriorElem(LinkList L, ElemType cur_e, ElemType *pre_e);
bool NextElem(LinkList L, ElemType cur_e, ElemType *nxt_e);
void ListTraverse(LinkList L, void (*fp)(ElemType));
void ClearList(LinkList L);
bool ListInsert(LinkList L, int i, ElemType e);
bool ListDelete(LinkList L, int i, ElemType *e);
void sort(LinkList L);

#endif /* DYNALNKLIST_H */