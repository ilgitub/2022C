#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	//写内存时，一定要确保内存可写
	char* buf2 = "sdasdsa";//文字常量区，内存不可改
	//buf2[2] = '1';//error

	char buf3[] = "dsadsa";
	buf3[1] = '1';//ok

	char* p3 = NULL;
	strcpy(p3,"1111");//error

	system("pause");
	return 0;
}