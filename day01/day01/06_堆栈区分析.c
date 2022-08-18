#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* get_str()
{
	char str[] = "abcdefdjsh";
	return str;
}

char* get_str2()
{
	char* p = (char *)malloc(100);
	if (p == NULL)
		return NULL;
	strcpy_s(p,100,"asdadsadsad");
	return p;
}

int main(void)
{
	char buf[128] = { 0 };
	//ยาย๋
	//strcpy(buf,get_str());
	//printf("buf=%s\n",buf);
	char* p = NULL;
	p = get_str2();
	if (p != NULL)
	{
		printf("p=%s\n",p);

		free(p);
		p = NULL;
	}

	system("pause");
	return 0;
}