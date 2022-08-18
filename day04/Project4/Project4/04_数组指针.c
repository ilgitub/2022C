#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Debug 0

typedef int(*P)[4];

int printfA(int(*p)[4],int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d  ",p[i][j]);
		}
	}
	return 1;
}

int main(void)
{
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int res;
	res=printfA(a,sizeof(a)/sizeof(a[0]));
	printf("res=%d\n",res);

#if Debug
	//数组指针，是指针，指向一个数组的指针
	//定义数组指针变量
	int a[10] = { 0 };
	//1、先定义数组类型，根据类型定义指针变量
	typedef int A[10];//A数组类型
	A* p = NULL;//p数组指针类型变量
	//p=a;//a表示数组首元素地址，a和&a一样，最终也是当&a，警告
	p = &a;//&a代表整个数组首地址
	for (int i = 0; i < 10; i++)
	{
		(*p)[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", (*p)[i]);
	}
#endif
	printf("\n");
	system("pause");
	return 0;
}