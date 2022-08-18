#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strcpy(char* dst, char* src)
{
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		//dst[i] = src[i];
		*(dst + i) = *(src + i);
	}
	//dst[i] = '\0';
	*(dst + i) = 0;
}

void my_strcpy2(char* dst, char* src)
{
	while (*src!=0)
	{
		*dst = *src;
		 dst++;
		 src++;
	}
	*dst = 0;
}

void my_strcpy3(char* dst, char* src)
{
	while (*src != 0)
	{
		*dst++ = *src++;
	}
	*dst = 0;
}

void my_strcpy4(char* dst, char* src)
{
	//*dst=*src
	//dst++,src++
	//判断*dst是否为0，为0跳出循环
	while (*dst++==*src++)
	{
		NULL;
	}
}
//成功0，失败非0 
//1、判断形参指针是否为NULL
//2、不要直接使用形参
int my_strcpy5(char* dst, char* src)
{
	if (dst == NULL || src == NULL)
	{
		return -1;
	}
	//辅助变量把形参接过来
	char* to = dst;
	char* from = src;
	//*dst=*src
	//dst++,src++
	//判断*dst是否为0，为0跳出循环
	while (*to++ == *from++)
	{
		NULL;
	}

	printf("my_strcpy5:dst=%s\n",dst);

	return 0;
}

int main(void)
{
	char src[] = "dajdnewm";
	char dst[100];
	//char dts[100] = { 0 };\\初始化的话字符串赋值就会有结束符

	int i = 0;
	int n = strlen(src);
	for ( i = 0; i < n; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	printf("%s\n",dst);

	for ( i = 0; src[i] != '\0' ; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	printf("%s\n",dst);

	my_strcpy4(dst,src);
	printf("%s\n", dst);

	int ret=my_strcpy5(dst, src);
	if (ret != 0)
	{
		printf("my_strcpy4 err:%d\n",ret);
		return ret;
	}

	printf("\n");
	system("pause");
	return 0;
}