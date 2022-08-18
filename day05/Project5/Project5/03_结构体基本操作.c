#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Teacher
{
	char name[50];
	int age;
};

int main(void)
{
	struct Teacher t2;
	strcpy(t2.name,"xiaoli");
	t2.age = 18;

	//结构体指针变量，没有指向空间，不能给其他成员赋值
	struct Teacher* p = NULL;
	p = &t2;
	strcpy(p->name,"xiaoming");
	p->age = 22;
	printf("%s, %d\n",p->name,p->age);


	printf("\n");
	system("pause");
	return 0;
}