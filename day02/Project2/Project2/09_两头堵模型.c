#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int fun(char* p, int* n)
{
	if (p == NULL || n == NULL)
	{
		return -1;
	}
	int begin = 0;
	int end = strlen(p) - 1;
	//从左边开始
	//如果当前字符为空，而且没有结束
	while (isspace(p[begin]) && p[begin] != 0)
	{
		begin++;//位置从右移动一位
	}
	//从右边开始
	//如果当前字符为空，而且没有结束
	while (isspace(p[end]) && p[end] != 0)
	{
		end--;//位置从左移动一位
	}
	*n = end - begin + 1;
	return 0;
}

int main(void)
{
	char *p = "      dsadasa        ";
	//int begin = 0;
	//int end = strlen(p) - 1;
	int n = 0;
	int ret = 0;

	ret = fun(p, &n);
	if (ret != 0)
	{
		return ret;
	}
	printf("n=%d\n",n);

	////从左边开始
	////如果当前字符为空，而且没有结束
	//while (isspace(p[begin]) && p[begin]!=0)
	//{
	//	begin++;//位置从右移动一位
	//}
	////从右边开始
	////如果当前字符为空，而且没有结束
	//while (isspace(p[end]) && p[end] != 0)
	//{
	//	end--;//位置从左移动一位
	//}
	//n = end - begin + 1;
	//printf("n=%d\n",n);


	printf("\n");
	system("pause");
	return 0;
}