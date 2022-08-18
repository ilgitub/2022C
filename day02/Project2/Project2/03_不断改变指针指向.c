#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char* p = NULL;
	char* q = NULL;
	char buf[100] = "dadasdsa";

	int i = 0;

	p = &buf[0];
	printf("p1=%d, %c\n",p,*p);

	p = &buf[1];
	printf("p2=%d, %c\n",p,*p);
	printf("====================\n");

	q = (char*)malloc(100);
	if (q == NULL)
	{
		return -1;
	}

	strcpy(q,"abcdefghipoq");
	for (i = 0; i < strlen(q); i++)
	{
		p = q + i;
		printf("%c\n",*p);
	}

	printf("=====================");
	system("pause");
	return 0;
}