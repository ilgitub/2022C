#include<stdio.h>

int main(void)
{
	//======================================
	//const int a = 10;
	//int* p = NULL;
	//p = &a;
	//*p = 20;
	//printf("a=%d, p=%d\n",a,*p);
	//======================================

	char buf[100] = "abcdef";
	//const char* p = buf;
	////char const* p = buf;

	////p[0] = '1';
	//p = "123345";
	//printf("*p=%s\n",p);

	//======================================
	//char* const p1 = buf;
	//char* p2 = "sadsa";
	////p1 = p2;
	//p1[0] = '2';
	//printf("*p1=%s\n",p1);
	//======================================
	const char* const p3 = buf;

	printf("\n");
	system("pause");
	return 0;
}