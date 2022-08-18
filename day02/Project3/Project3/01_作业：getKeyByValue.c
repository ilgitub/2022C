#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum ErrCode
{
	NOError=0,
	NULLValue=-1,
	NOKey=-2,
	NOEqual=-3,
};
/*
* 4.键值对（“key=value”）字符串，在开发中经常使用
* 要求1：请自己定义一个接口，实现根据key获取
* 要求2：编写测试用例
* 要求3：键值对中可能有n多个空格，请去除空格
* 
* 注意：键值对字符串格式可能如下：
* “key1=value1”
* “key2=         value2”
* “key3  =value3”
* “key4              =value4”
* “key5    =    ”
* “key6    =”
* 
* int getKeyByValue(char *keyvaluebuf,char *keybuf, char *valuebuf, int *valuebuflen);
*/
int getKeyByValue(char* keyvaluebuf, char* keybuf, char* valuebuf, int* valuebuflen)
{
	int ret = 0;
	/*
	keyvaluebuf = "key4              =value4";
	keybuf = "key4";
	*/
	if (keybuf==NULL||keyvaluebuf==NULL||valuebuf==NULL||valuebuflen==NULL)
	{
		return -1;
	}
	char* p = NULL;
	//查找匹配键值
	//"key4              =value4",找kye4找到返回首地址
	p = strstr(keyvaluebuf,keybuf);
	if (p == NULL)
		return -2;
	//找到则重新设置起点位置，跳过字符
	//p="              =value4"
	p += strlen(keybuf);

	//查找=
	p = strstr(p, "=");
	if (p == NULL)
		return -3;
	//找到则重新设置起点位置，跳过字符
	//p="value4"
	p += strlen("=");

	//取非空字符
	
	ret = trimSpace(p,valuebuf);
	if (ret!=0)
	{
		printf("trimSpace err:%d\n",ret);
		return ret;
	}
	//获取长度,通过*间接赋值
	*valuebuflen = strlen(valuebuf);

	return 0;
}
int trimSpace(char* inbuf, char* outbuf)
{
	if (inbuf==NULL||outbuf==NULL)
	{
		return -1;
	}
	char *p= inbuf;
	int begin = 0;
	int end = strlen(p) - 1;
	int n = 0;
	if (end < 0)
		return -2;
	//从左往右移动，如果哦当前字符为空，而且没有结束
	while (p[begin]==' '&&p[begin]!=0)
	{
		begin++;//位置从右移动一位
	}
	while (p[end]==' ' && end>0)
	{
		end--;//往左移动
	}
	if (end==0)
	{
		return -2;
	}
	n = end - begin + 1;//非空元素个数
	strncpy(outbuf, p + begin, n);
	outbuf[n] = 0;
	return 0;
}

int main(void)
{
	//char* keyVal = "key4              =value4";
	char* keyVal = "key4=              ";

	char* key = "key4";
	char value[100] = { 0 };

	int len = 0;
	int ret = 0;

	ret = getKeyByValue(keyVal, key, value, &len);
	if (ret != 0)
	{
		printf("getKeyValue err :%d\n",ret);
		return ret;
	}
	printf("val:%s\n",value);
	printf("len=%d\n",len);

#if 0
	char* p = "    dadsadsadadsa   ";
	char buf[100] = { 0 };

	int ret = 0;
	ret = trimSpace(p, buf);
	if (ret != 0)
	{
		printf("timeSpace err:%d\n",ret);
		return ret;
	}
	printf("buf=%s\n",buf);
#endif
	printf("\n");
	system("pause");
	return 0;
}