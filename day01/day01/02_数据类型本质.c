#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int b[10];
	//b和&b数组类型不一致
	//b是数组首元素的地址，一个元素4个字节
	//&b整个数组的首地址，一个数组4*10=40字节,+1和+40
	printf("sizeof(a)=%d,sizeof(b)=%d\n",sizeof(a),sizeof(b));
	printf("b:%d,&b:%d\n",b,&b);
	printf("b+1:%d,&b+1:%d\n", b+1, &b+1);

	//指针类型长度,32位程序,长度4
	//            64位程序，长度8
	char************************** p = NULL;
	int* q = NULL;
	printf("%d, %d\n",sizeof(p),sizeof(q));

	printf("\n");
	system("pause");
	return 0;
}