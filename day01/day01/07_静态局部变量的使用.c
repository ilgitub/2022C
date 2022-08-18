#include<stdio.h>

int* getA()
{
	static int a = 10;
	return &a;
}

int main(void)
{
	int* p = getA();
	printf("p=%p,p=%d",p,*p);
	system("pause");
	return 0;
}