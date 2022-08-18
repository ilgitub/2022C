#include<stdio.h>
#include<stdlib.h>
#define DEBUG 1

void getMem(char** p1, int* len)
{
	*p1 = (char*)malloc(sizeof(char) * 100);

	p1[0] = 'a';
	p1[1] = 'b';
	p1[2]=0;

	*len = 100;
}

int main(void)
{
#if DEBUG
	int len = 0;
	char* p1 = NULL;

	getMem(&p1,&len);

	printf("p1=%s, len=%d\n",p1,len);

	if (p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	}
#endif
	system("pause");
	return 0;
}