#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//每个类型都是char*
	char* p0 = "1111111111";
	char* p1 = "0000000000";
	char* p3 = "bbbbbbbbbb";
	char* p4 = "aaaaaaaaaa";
	//指针数组，指针的数组，它是一个数组，每一个元素都是指针char*
	char* p[] = { "1111111111","00000000000","bbbbbbbbbbb","aaaaaaaaaaaaa" };

	char* q[10] = { "1111111111","00000000000","bbbbbbbbbbb","aaaaaaaaaaaaa" };

	int n = sizeof(p) / sizeof(p[0]);
	printf("sizeof(p)=%d,sizof(p[0])=%d\n",sizeof(p),sizeof(p[0]));

	int nn = sizeof(q) / sizeof(q[0]);
	printf("sizeof(q)=%d,sizof(q[0])=%d\n", sizeof(q), sizeof(q[0]));
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s\n",p[i]);
	}

	system("pause");
	return 0;
}