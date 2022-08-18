#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
	int id;//������
	struct Node *next;//ָ����
}Node;

Node* SListCreat()
{
	Node* head = NULL;
	head = (Node*)malloc(sizeof(Node));
	if (head==NULL)
	{
		return NULL;
	}
	head->id = -1;
	head->next = NULL;

	Node *pCur = head;
	Node* pNew = NULL;

	int data;
	while (1)
	{
		printf("����������: ");
		scanf("%d",&data);
		if (data==-1)
		{
			break;
		}

		pNew = (Node*)malloc(sizeof(Node));
		if (pNew==NULL)
		{
			continue;
		}
		pNew->id = data;
		pNew->next = NULL;

		pCur->next = pNew;
		pNew->next = NULL;

		pCur = pNew;
	}
	return head;
}
int SListPrint(Node* head)
{
	if (head==NULL)
	{
		return -1;
	}
	Node* pCur = head->next;
	printf("head->");
	while (pCur!=NULL)
	{
		printf("%d->",pCur->id);
		pCur = pCur->next;
	}
	printf("NULL\n");
	return 0;
}

int SListNodeInsert(Node* head, int x, int y)
{
	if (head==NULL)
	{
		return -1;
	}
	Node *pPre = head;
	Node* pCur = head->next;

	while (pCur!=NULL)
	{
		if (pCur->id==x)
		{
			break;
		}
		//
		pPre = pCur;
		pCur = pCur->next;
	}
	//
	Node* pNew = (Node*)malloc(sizeof(Node));
	if (pNew==NULL)
	{
		return -2;
	}
	//
	pNew->id = y;
	pNew->next = NULL;
	//
	pPre->next = pNew;
	pNew->next = pCur;
	 
	return 0;
}

int SListNodeDel(Node* head, int x)
{
	if (head==NULL)
	{
		return -1;
	}
	Node *pPre = head;
	Node* pCur = head->next;
	int flag = 0;

	while (pCur!=NULL)
	{
		if (pCur->id==x)
		{
			pPre->next = pCur->next;
			free(pCur);
			pCur = NULL;
			flag = 1;
			break;
		}
		pPre = pCur;
		pCur = pCur->next;
	}
	if (0==flag)
	{
		printf("û��ֵΪ%d�Ľڵ�\n",x);
		return -2;
	}
	
	return 0;
}
//��������ͷ�all node
int SListNodeDestroy(Node* head)
{
	if (head==NULL)
	{
		return -1;
	}
	Node* tmp = NULL;
	int i = 0;
	while (head!=NULL)
	{
		tmp = head->next;
		free(head);
		head = NULL;
		head = tmp;
		i++;
	}
	printf("i=%d\n",i);
}

int main(void)
{
	Node* head = NULL;
	head = SListCreat();
	SListPrint(head);

	SListNodeInsert(head,5,4);
	printf("��5��ǰ�����4��\n");
	SListPrint(head);

	SListNodeDel(head, 5);
	printf("ɾ��5�ڵ��\n");
	SListPrint(head);
	SListNodeDestroy(head);

	printf("\n");
	system("pause");
	return 0;
}