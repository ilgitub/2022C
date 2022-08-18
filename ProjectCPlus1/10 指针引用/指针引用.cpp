#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#define DEBUG 0

using namespace std;

typedef struct Teacher
{
	int id;
	char name[64];
}Teacher;

int get_mem(Teacher** tpp)
{
	//*tpp = (Teacher*)malloc(sizeof(Teacher));
	//if (*tpp==NULL)
	//{
	//	return -1;
	//}
	//strncpy((* tpp)->name, "hello world", 64);
	//(*tpp)->id = 1;
	Teacher* tmp = NULL;
	tmp = (Teacher *)malloc(sizeof(Teacher));
	if (NULL==tmp)
	{
		return -1;
	}
	tmp->id = 01;
	strncpy(tmp->name,"hello China",64);

	*tpp = tmp;

	return 0;
}
void free_TecherMem(Teacher **tpp)
{
	if (NULL==*tpp)
	{
		return;
	}
	free(*tpp);
	*tpp = NULL;
}
//
void free_TeacherMem2(Teacher*& tpp)
{
	if (NULL==tpp)
	{
		return;
	}
	free(tpp);
	tpp = NULL;
}
//
int get_mem2(Teacher*& tpp)
{
	tpp = (Teacher*)malloc(sizeof(Teacher));
	if (NULL==tpp)
	{
		return -1;
	}
	tpp->id = 2;
	strncpy(tpp->name,"Lili",64);
	return 0;
}

int get_memint(int** p)
{
	static int a = 10;
	*p = (int *)malloc(sizeof(int));
	if (*p==NULL)
	{
		return -1;
	}
	memcpy(*p,&a,sizeof(int));
	cout << "p= " << **p << endl;
	return 0;
}

int main(void)
{
#if DEBUG
	Teacher* tp = NULL;
	//get_mem(&tp);
	get_mem2(tp);
	cout << "tp->id= " << tp->id << endl << "tp->name= " << tp->name << endl;
	//free_TecherMem(&tp);
	free_TeacherMem2(tp);
#else
	//int* res=NULL;
	//get_memint(&res);

	//cout << "res= " << *res << endl;
	int    i;
	double d;

	// 声明引用变量
	int& r = i;
	double& s = d;

	i = 5;
	r = 8;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	const int aa = 10;
	const int& bb = aa;
	//int* p = NULL;
	//p = &aa;
	//*p = 20;

	cout << "aa== " << aa << endl;

#endif // 0
	return 0;
}