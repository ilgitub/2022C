#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义结构体类型时不要直接给成员赋值
typedef struct Teacher
{
	char name[50];
	int age;
}Teacher;

//void copyTeacher(Teacher to,Teacher from)
//{
//	to = from;
//	printf("[copyTeacher]%s, %d\n",to.name,to.age);
//}
void copyTeacher(Teacher* to, Teacher* from)
{
	*to = *from;
	printf("[copyTeacher]%s, %d\n", to->name, to->age);
}

int main(void)
{
	Teacher t1 = { "lily",22 };
	Teacher t2 = t1;
	printf("%s, %d\n",t2.name,t2.age);

	int a = 10;
	int b = a;

	Teacher t3;
	memset(&t3,0,sizeof(t3));

	//copyTeacher(t3,t1);
	copyTeacher(&t3,&t1);
	printf("[copyTeacher]%s, %d\n", t3.name, t3.age);

	Teacher* p = (Teacher *)malloc(3*sizeof(Teacher));
	if (NULL==p)
	{
		printf("err");
	}
	char buf[3][50] = { "Tom","Jerry","Lily" };
	for (int i = 0; i < 3; i++)
	{
		p[i].age = i + 10;
		strcpy(p[i].name,buf[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s age is %d.\n",p[i].name,p[i].age);
	}
	if (p!=NULL)
	{
		free(p);
		p = NULL;
	}


	printf("\n");
	system("pause");
	return 0;
}