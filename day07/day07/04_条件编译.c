#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define D1
#define D2 1

#ifndef _SOMEHEAD_H_
#define _SOMEHEAD_H_
#endif // !_SOMEHEAD_H_


int main(void)
{
#ifndef D1
	printf("-------------------\n");
#else// D1
	printf("===============\n");
#endif

#ifndef D2
	printf("D2-----------------\n");
#else
	printf("D2===================\n");
#endif // D2


	printf("\n");
	system("pause");
	return 0;
}