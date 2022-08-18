#define _CRT_SECURE_NO_WARNINGS
#define DEBUG 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char buf[] = "this is a test" \
		"this is text test\n";

	FILE* fp = fopen("./test.txt","w+");
	fputs(buf,fp);
	fclose(fp);
	//fflush(fp);
	
	printf("\n");
	system("pause");
	return 0;
}