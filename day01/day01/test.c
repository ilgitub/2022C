#include<stdio.h>
#include<string.h>

int main(void)
{
	void* p = 0x1122;
	char buf[1024] = "asdsadsa";

	p = buf;
	printf("p=%s\n",(char*)p);

	int a[100] = { 1,2,3,4 };
	p = a;

	for (int i = 0; i < 4; i++)
	{
		printf("%d ",*((int *)p)+i);
	}
	printf("\n");
	printf("======================\n");

	int b[3] = { 1,2,3 };
	int c[3];
	memcpy(c, b, sizeof(b));
	for (int i = 0; i < 3; i++)
	{
		printf("%d ",c[i]);
	}

	char* q = 0x1231;//野指针，指针指向的地址没有分配

	char str2[100] = { 0 };

	q = str2;
	strcpy_s(q,sizeof(str2),"1234");

	printf("q=%s\n",q);

	printf("\n");
	system("pause");
	return 0;
}