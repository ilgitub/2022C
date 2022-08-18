#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUM(a) (sizeof(a)/sizeof(*a))

/*
* 功能：找到数组中指定字符串的位置
* 参数：
*	table:字符串数组（指针数组）首地址
*	size：数组元素个数
*	key：匹配字符串，如"do"
*	pos：匹配字符串在数组中位置，如果"do"在keywords[]中位置为4
* 返回值：
*	成功：0
*	不成功：非0
*/
int searchKeyTable(const char* table[], const int size, const char* key, int* pos)
{
	if (NULL==key||NULL==table||NULL==pos)
	{
		return -1;
	}

	int i = 0;
	int n = -1;
	for ( i = 0; i < size; i++)
	{
		if (strcmp(table[i],key)==0)
		{
			n = i;
			break;
		}
	}
	if (-1==n)//没有匹配字符串
	{
		return -2;
	}
	
	*pos = n + 1;
	 
	return 0;
}

int main(void)
{
	const char* keywords[] =
	{
		"while",
		"case",
		"static",
		"do"
	};

	int pos = 0;
	int ret = 0;

	ret = searchKeyTable(keywords,NUM(keywords),"d",&pos);
	if (ret!=0)
	{
		printf("searchKeyTable err:%d\n", ret);
		system("pause");
		return ret;
	}
	printf("%s 在 keywords位置为：%d\n", "d", pos);


	printf("\n");
	system("pause");
	return 0;
}