#include<stdio.h>
#include<stdlib.h>

typedef struct MyStruct
{
	int a;
	int b;
}MyStruct;

void fun(MyStruct* p)
{
	//指针能变
	//指针指向的内存也可以变
	//p = NULL;
	p->a = 10;//ok
}

void fun1(MyStruct const* p)
{
	//p=NULL;//ok
	//p->a = 10;//err
}

void fun3(MyStruct* const p)
{
	//p = NULL;//err
	p->a = 1;//ok

}

void fun4(const MyStruct* const p)
{
	//p = NULL;//err
	//p->a=10;//err
	MyStruct tmp;
	tmp.a = p->a;//p只读
}

int main(void)
{
	//const修饰一个变量为只读
	const int a = 10;
	//a = 100;//error
	//指针变量，指针指向的内存,2个不同概念
	char buf[] = "dadsadsadaweq";
	//从左往右看，跳过类型，看修饰哪个字符
	//如果是*，说明指针指向的内存不能改变
	//如果是指针变量，说明指针的指向不能改变，指针的值不能修改
	const char* p = buf;
	//等价于上面char const *p1=buf;
	//p[1] = '1';//error
	p = "dasd232";//ok

	char* const p2 = buf;
	p2[0] = '1';//ok
	//p2 = "dadsa";//error

	//p3为只读，指向不能变，指向的内存也不能变
	const char* const p3 = buf;
	//p3[0] = '1';//error
	//p3 = "dsad";//error

	const int value = 10;
	int* q = &value;
	*q = 100;
	printf("value=%d,*q=%d\n",value,*q);

	//如何引用另外.c中的const变量
	extern const int ac;//不能赋值只能声明
	printf("a=%d\n",ac);

	system("pause");
	return 0;
}