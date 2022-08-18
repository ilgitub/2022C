#include<stdio.h>
#include<stdlib.h>

int get_b()
{
	int a = 10;
	return a;
}

void get_a2(int b)
{
	b = 22;
}

void get_a3(int* p)
{
	*p = 33;
}

void fun2(int* p)
{
	p = 0xaabb;
	printf("fun2:p=%p\n",p);
}
void fun3(int** p)
{
	*p = 0xaabb;
	printf("fun3:p=%p\n", p);
}

int main(void)
{
	/*
	* 通过指针间接赋值
	* 1、两个变量
	* 2、建立关系
	* 3、通过*操作内存
	*/
	//int a = 100;
	//int* p = NULL;

	//p = &a;
	//*p = 22;
	//printf("a=%d\n",a);
	//printf("*p=%d\n", *p);

	//int b = get_b();
	//printf("b=====%d\n",b);

	//get_a2(b);
	//printf("b2=====%d\n", b);

	////如果想通过形参改变实参的内容，必须地址传递
	//get_a3(&b);
	//printf("b3=====%d\n", b);

	int* p = 0x1122;
	printf("p1=%p\n", p);

	fun2(p);//值传递
	printf("p2=%p\n",p);

	printf("\n---------------------\n");

	fun3(&p);//地址传递
	printf("p3=%p\n", p);

	system("pause");
	return 0;
}