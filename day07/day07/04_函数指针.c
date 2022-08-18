#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun(int a)
{
	printf("a============%d\n",a);
	return 0;
}

int main(void)
{
#if 0
	typedef int FUN(int );
	FUN *p1 = NULL;
	p1 = &fun;
	p1(2);
	fun(2);

#endif // 1
#if 0
	typedef int(*PFUN)(int );
	PFUN p2 = fun;
	p2(2);
#endif // 1
#if 1
	int(*p3)(int a) = fun;
	p3(2);
#endif // 1



	printf("\n");
	system("pause");
	return 0;
}