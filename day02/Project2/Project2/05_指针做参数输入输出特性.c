#include<stdio.h>
#include<stdlib.h>

void func(char* p)//in
{
	//给p指向的内存区域拷贝
	strcpy(p,"dadsadsadsa");
}

void func2(char* p)//in
{
	if (NULL == p)
	{
		return;
	}
	//给p指向的内存区域拷贝
	strcpy(p, "dadsadsadsa");
}

void func3(char** p,int *len)
{
	if (NULL == p)
		return;

	char* tmp = (char *)malloc(100);
	if (NULL == tmp)
		return;
	strcpy(tmp, "dasdassa");
	//间接赋值
	*p = tmp;
	*len = strlen(tmp);
}

int main(void)
{
	//输入，主调函数分配内存
	char buf[100] = { 0 };
	func(buf);
	printf("buf=%s\n",buf);

	char* str = NULL;
	func2(str);//野指针

	//输出,被调用函数分配内存,地址传递
	char* p = NULL;
	int len = 0;
	func3(&p,&len);
	if (p != NULL)
	{
		printf("p=%s,len=%d\n",p,len);
	}

	system("pause");
	return 0;
}