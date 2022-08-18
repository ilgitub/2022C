#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stu
{
	int id;//Êý¾ÝÓò
	char name[100];
	struct Stu* next;//Ö¸ÕëÓò
}Stu;

int main(void)
{
	Stu s1 = { 1,"mike",NULL };
	Stu s2 = { 2,"nike",NULL };
	Stu s3 = { 3,"tom",NULL };
	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;

	Stu* p = &s1;
	while (p!=NULL)
	{
		printf("id=%d,name=%s\n",p->id,p->name);
		p = p->next;
	}

	printf("\n");
	system("pause");
	return 0;
}