#include<stdio.h>

int main(void)
{

	char* p = NULL;
	char buf[] = "abcdef";
	
	printf("p1=%d\n",p);
	printf("p1=%p\n", p);

	//改变指针变量的值
	p = buf;
	printf("p2=%d\n", p);
	printf("p2=%p\n", p);

	printf("p3=%c\n",*p);

	printf("-----------------------\n");

	//指针变量和指向的内存是两个不同的概念
	p = p + 1;//改变了指向变量的值，改变了指针的指向
	printf("p2=%d\n",p);
	printf("buf=%s\n",buf);
	printf("*p=%c\n",*p);

	//改变指针指向的内存，并不会影响指针的值
	printf("-----------------------\n");
	buf[1] = '1';
	printf("p4=%d\n",p);
	printf("buf2=%s\n",buf);
	printf("*p=%c\n", *p);
	printf("------------------------------\n");

	*p = 'm';
	printf("p5=%d\n",p);
	printf("buf3=%s\n",buf);

	printf("\n");
	system("pause");
	return 0;
}