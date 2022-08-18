#define _CRT_SECURE_NO_WARNINGS
#define DEBUG 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main0(void)
{
	FILE* fp = NULL;
	fp = fopen("./test.txt","r+");
	if (fp==NULL)
	{
		perror("fopen");
		system("pause");

		return -1;
	}
	if (fp!=NULL)
	{
		fclose(fp);
		fp = NULL;
	}

	printf("\n");
	system("pause");
	return 0;
}

void my_fputs(char *path)
{
	FILE* fp = NULL;
	fp = fopen(path,"w+");
	if (fp==NULL)
	{
		perror("my_fputs fopen");
		return;
	}
	//write file
	char buf[] = "this is a text for fputs";
	int i = 0;
	int n = strlen(buf);
	for (i = 0; i < n; i++)
	{
		int ch=fputc(buf[i],fp);
		//printf("ch=%c\n",ch);
	}

	if (fp!=NULL)
	{
		fclose(fp);
		fp = NULL;
	}
}

void my_fgetc(char *path)
{
	FILE* fp = NULL;
	fp = fopen(path, "r+");
	if (fp == NULL)
	{
		perror("my_fgetc fopen");
		return;
	}
	//read file
	//char buf[256] = { 0 };
	//fread(buf,sizeof(char),256,fp);
	//printf("%s",buf);
	char ch;
	while ((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\n");

	if (fp != NULL)
	{
		fclose(fp);
		fp = NULL;
	}
}

int main()
{
	my_fputs("../03.txt");
	my_fgetc("../03.txt");

	printf("\n");
	system("pause");
	return 0;
}