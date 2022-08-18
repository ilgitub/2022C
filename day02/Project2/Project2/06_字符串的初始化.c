#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main0(void)
{
	/*
	* c语言没有字符串类型，通过字符数组模拟
	* C语言字符串,以字符'\0'，数字0
	*/
	//不指定长度,没有0结束符，有多少个元素就有多长
	char buf[] = { 'a','b','c','\0' };
	printf("buf=%s\n",buf);

	//指定长度，后面没有赋值的元素自动补零
	char buf2[100] = { 'a','b','c' };
	printf("buf2=%s\n", buf2);

	//所有元素赋值为0
	char buf3[100] = { 0 };

	//使用字符串初始化，常用
	char buf8[] = "dadsadasda";
	//strlen:测字符串长度，不包含数字0，字符'\0'
	//sizeof:测数组长度，包含数字0，字符'\0'
	printf("buf8:%d\n", buf8[strlen(buf8)]);//空字符，值0

	printf("strlen=%d,sizeof=%d\n",strlen(buf8),sizeof(buf8));
	char buf9[100] = "dadsadasda";
	printf("strlen=%d,sizeof=%d\n", strlen(buf9), sizeof(buf9));

	printf("test");
	char str[] = "\0129";
	printf("%s\n",str);

	system("pause");
	return 0;
}

int main()
{
	char buf[] = "dasdsada";
	char* p = NULL;

	//[]方式
	int i = 0;
	int n = strlen(buf);

	for (i = 0; i < n; i++)
	{
		printf("%c",buf[i]);
	}
	printf("\n===================\n");
	//指针方式
	//数组名字为数组首元素地址
	p = buf; 
	for ( i = 0; i < n; i++)
	{
		printf("%c",p[i]);
	}
	printf("\n===================\n");

	for (i = 0; i < n; i++)
	{
		printf("%c", *(p+i));
	}
	printf("\n===================\n");

	for (i = 0; i < n; i++)
	{
		printf("%c", *(buf + i));
	}
	printf("\n===================\n");

	//P和buf完全等价吗？
	//p++OK
	//buf++NOK,buf只是一个常量，不能更改



	printf("\n");
	system("pause");
	return 0;
}