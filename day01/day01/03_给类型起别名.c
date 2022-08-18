#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned int u32;

struct MyStruct
{
	int a;
	int b;
};
//typedef和结构体使用
typedef struct MyStruct2
{
	int c;
	int d;
}MS;

int main(void)
{
	u32 t;
	printf("sizeof(u32): %d", sizeof(u32));

	struct MyStruct c;
	MS d;

	printf("\n");
	system("pause");
	return 0;
}