#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX2(a,b) (a)>(b)?(a):(b)
//#define MAX3(a,b,c) (a)>MAX2(b,c)?(a):MAX2(b,c) 1>2>3?2:3
#define MAX3(a,b,c) (a)>(MAX2(b,c))?(a):(MAX2(b,c))

void fun()
{
#define A 10;
}
void funB()
{
	int a = A;
}
void funC()
{
#undef A
}
void funD()
{
	//int b = A;
}

int main(void)
{
	//int a = MAX2(1, 2);
	int a = MAX3(1, 2,3);
	printf("max value is %d\n",a);

	printf("\n");
	system("pause");
	return 0;
}