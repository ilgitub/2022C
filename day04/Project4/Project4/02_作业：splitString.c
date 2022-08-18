#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int splitString2(const char* str, char c, char buf[10][30], int* count)
{
	if (str==NULL||count==NULL)
	{
		return -1;
	}

	//str="abcdef,acccd,eeee,aaaa,e3eeee,ssss,";
	const char* start = str;
	char* p = NULL;
	int i = 0;

	do
	{
		p = strchr(start,c);
		if (p != NULL)
		{
			int len = p - start;
			strncpy(buf[i], start, len);
			buf[i][len] = '\0';
			i++;
			start = p + 1;
		}
		else
			break;
	} while (*start!='\0');

	if (i==0)
	{
		return -2;
	}

	*count = i;

	return 0;
}

char** getMem(int n)
{
	char** buf = NULL;
	buf = (char**)malloc(n*sizeof(char *));
	if (buf==NULL)
	{
		return NULL;
	}
	for (size_t i = 0; i < n; i++)
	{
		buf[i] = (char*)malloc(30);
	}
	return buf;
}
int splitString2(const char* str, char c, char **buf, int* count)
{
	if (str == NULL || count == NULL)
	{
		return -1;
	}

	//str="abcdef,acccd,eeee,aaaa,e3eeee,ssss,";
	const char* start = str;
	char* p = NULL;
	int i = 0;

	do
	{
		p = strchr(start, c);
		if (p != NULL)
		{
			int len = p - start;
			strncpy(buf[i], start, len);
			buf[i][len] = '\0';
			i++;
			start = p + 1;
		}
		else
		{
			strcpy(buf[i],start);
			i++;
			break;

		}
	} while (*start != '\0');

	if (i == 0)
	{
		return -2;
	}

	*count = i;

	return 0;
}



//有一个字符串符合以下特征("abcdef,acccd,eeee,aaaa,e3eeee,ssss,")
int main(void)
{
	const char* p = "abcdef,acccd,eeee,aaaa,e3eeee,ssss,";
	//char buf[10][30] = { 0 };
	char** buf = NULL;
	int i = 0;
	int n = 0;
	int ret = 0;

	buf = getMem(6);
	if (buf==NULL)
	{
		return -1;

	}


	ret = splitString2(p,',',buf,&n);
	if (ret!=0)
	{
		printf("splitString err: %d",ret);
		system("pause");

		return ret;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%s\n",buf[i]);
	}

	for (size_t i = 0; i < n; i++)
	{
		free(buf[i]);
		buf[i] = NULL;
	}

	if (buf!=NULL)
	{
		free(buf);
		buf = NULL;
	}

	printf("\n");
	system("pause");
	return 0;
}