#define _CRT_SECURE_NO_WARNINGS
#define DEBUG 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义结构体类型时不要直接给成员赋值
typedef struct Teacher
{
	char* name;
	int age;
}Teacher;
void showTeacher(Teacher *p,int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("name=%s,age=%d\n", p[i].name, p[i].age);
	}
}
void freeTeacher(Teacher* q, int num)
{
	for (int i = 0; i < 3; i++)
	{
		if (q[i].name != NULL)
		{
			free(q[i].name);
			q[i].name = NULL;
		}
	}
	if (q != NULL)
	{
		free(q);
		q = NULL;
	}
}
int main(void)
{
#if 0
	//1
	Teacher t;
	t.name = (char*)malloc(sizeof(char)*30);

	strcpy(t.name,"lily");
	t.age = 22;

	printf("name=%s,age=%d\n",t.name,t.age);
	if (t.name!=NULL)
	{
		free(t.name);
		t.name = NULL;
	}

#endif

#if 0
	//2
	Teacher* p = NULL;
	p = (Teacher*)malloc(sizeof(Teacher) * 1);
	p->name = (char*)malloc(sizeof(char) * 30);

	strcpy(p->name, "lily");
	p->age = 22;

	printf("name=%s,age=%d\n", p->name, p->age);
	if (p->name != NULL)
	{
		free(p->name);
		p->name = NULL;
	}
	if (p!=NULL)
	{
		free(p);
		p = NULL;
	}
#endif 

#if 1
	//3
	Teacher* q = NULL;
	q = (Teacher*)malloc(sizeof(Teacher)*3);//Teacher[3]
	char buf[30] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		q[i].name = (char*)malloc(sizeof(char) * 30);
		sprintf(buf,"lily%d",i+1);
		strcpy(q[i].name, buf);
		q[i].age = 22 + i;
	}
	showTeacher(q,3);
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("name=%s,age=%d\n", q[i].name, q[i].age);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	if (q[i].name!=NULL)
	//	{
	//		free(q[i].name);
	//		q[i].name = NULL;
	//	}
	//}
	//if (q!=NULL)
	//{
	//	free(q);
	//	q = NULL;
	//}
	freeTeacher(q,3);
	q = NULL;
#endif 

#if DEBUG
	char* name = NULL;
	name = (char*)malloc(sizeof(char) * 30);
	strcpy(name, "lily");
	printf("%s\n", name);

	if (name != NULL)
	{
		free(name);
		name = NULL;
	}

	Teacher t;
	t.name = (char*)malloc(sizeof(char) * 30);
	strcpy(t.name, "lily");
	printf("t.name is %s\n", t.name);
	if (t.name != NULL)
	{
		free(t.name);
		t.name = NULL;
	}

	Teacher* p = NULL;
	p = (Teacher*)malloc(sizeof(Teacher));
	p->name = (char*)malloc(sizeof(char) * 30);
	strcpy(p->name, "Tony");
	p->age = 22;
	printf("%s, %d\n", p->name, p->age);


#endif // 0

#if DEBUG
	Teacher t1 = { "lily",22 };
	Teacher t2 = t1;
	printf("%s, %d\n", t2.name, t2.age);

	int a = 10;
	int b = a;

	Teacher t3;
	memset(&t3, 0, sizeof(t3));

	printf("[copyTeacher]%s, %d\n", t3.name, t3.age);

	Teacher* p = (Teacher*)malloc(3 * sizeof(Teacher));
	if (NULL == p)
	{
		printf("err");
	}
	char buf[3][50] = { "Tom","Jerry","Lily" };
	for (int i = 0; i < 3; i++)
	{
		p[i].age = i + 10;
		strcpy(p[i].name, buf[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s age is %d.\n", p[i].name, p[i].age);
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
#endif // DEBUG

	printf("\n");
	system("pause");
	return 0;
}