#include<stdio.h>
#include"method.h"

int main(void)
{
	char* p = NULL;
	int ret = 0;

	//ret = getMem(p);//传值拷贝，函数返回即释放
	ret = getMem(&p);

	if (ret!=0)
	{
		printf("getMem err:%d\n",ret);
		return ret;
	}
	printf("actual parameter p = % s\nret=%d\n", p,ret);
	return 0;
}
//int getMem(char* p)
//{
//	p = malloc(sizeof(char)*100);
//	if (p==NULL)
//	{
//		return -1;
//	}
//	strcpy(p,"adasdsj");
//	printf("formal parameter p=%s\n",p);
//	return 0;
//}
int getMem(char** p)
{
	
	char *temp = malloc(sizeof(char) * 100);

	if (temp == NULL)
	{
		return -1;
	}
	strcpy(temp, "adasdsj");
	*p = temp;

	printf("formal parameter *p=%s\n", *p);
	return 0;
}