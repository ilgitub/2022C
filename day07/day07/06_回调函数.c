#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

void func(int a, int b, int(*fun)(int a, int b))
{
	printf("func============>\n");
	int res = fun(a, b);
	printf("res=%d\n",res);
}

int main(void)
{
	func(3, 2, add);
	func(3, 2, minus);

	printf("\n");
	system("pause");
	return 0;
}