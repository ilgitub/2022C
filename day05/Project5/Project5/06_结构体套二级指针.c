#define _CRT_SECURE_NO_WARNINGS
#define DEBUG 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Teacher
{
	char** stu;
}Teacher;

int main(void)
{
	int n = 2;
#if 0
	//char* name = NULL;
	//name = (char*)malloc(sizeof(char) * 30);

	char** name = NULL;
	name = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		name[i] = (char*)malloc(sizeof(char)*30);
		strcpy(name[i],"lily");
	}
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",name[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (name[i]!=NULL)
		{
			free(name[i]);
			name[i] = NULL;
		}
	}
	if (name!=NULL)
	{
		free(name);
		name = NULL;
	}
#endif

	printf("\n");
	system("pause");
	return 0;
}