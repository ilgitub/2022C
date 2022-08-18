#define _CRT_SECURE_NO_WARNINGS
#define DEBUG 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
* 值传递，形参的任何修改不会影响到实参
*/
int getMem(char* p)
{
	p = (char*)malloc(sizeof(char) * 100);
	if (p == NULL)
	{
		return -1;
	}
	strcpy(p, "dadsa");
	printf("p=%s\n",p);

	return 0;
}
//地址传递，形参修改会影响实参
int getMem2(char** p)
{
	if (p==NULL)
	{
		return -1;
	}
	char* tmp = (char*)malloc(sizeof(char) * 100);
	if (tmp==NULL)
	{
		return -2;
	}
	strcpy(tmp,"DASJDSAJHKJDS");

	*p = tmp;

	return 0;
}

int main(void)
{
	char* p = NULL;
	int ret = 0;
#if DEBUG
	ret = getMem(p);

	if (ret != 0)
	{
		printf("getMem err:%d\n",ret);
		return ret;
	}

#endif

	ret = getMem2(&p);

	if (ret != 0)
	{
		printf("getMem2 err:%d\n", ret);
		return ret;
	}
	printf("p=%s\n",p);

	if (p!=NULL)
	{
		free(p);
		p = NULL;
	}

	printf("\n");
	system("pause");
	return 0;
}
