#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("&a=%d,&b=%d\n",&a,&b);

	int buf[100];
	printf("buf:%p,buf+1:%p\n", buf, buf + 1);
	printf("buf:%d,buf+1:%d\n",buf, buf+1);

	system("pause");
	return 0;
}