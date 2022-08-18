#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
* 5.���ַ���������������"abcd11111abcd2222abcdqqqqq"������д��һ������
* �ӿڣ�������½�������ַ����滻�ɣ�dcba11111dcba2222dcbaqqqqq��,���ѽ��������
* Ҫ��
* 1.��ȷʵ�ֽӿڹ���
* 2.��д��������
*/

/*
* src:ԭ�ַ���
* dst:���ɵĻ���Ҫ�����ַ���
* sub:��Ҫ���ҵ����ַ���
* new_sub:�滻�������ַ���
* 
* return :0�ɹ�
* -1ʧ��
* 
*/
int replaceSubstr(/*in*/char* src,/*out*/char** dst,/*in*/char* sub,/*in*/ char* new_sub)
{
	if (src == NULL||dst==NULL||sub==NULL||new_sub==NULL)
	{
		return -1;
	}
	/*
	* src="dddddabcd11111abcd2222abcdqqqqq"
	* sub="abcd"
	* new_sub="aaaaaa"
	*/
	char* start = src;
	char* p = NULL;
	char tmp[512] = { 0 };
	int len = 0;

	do
	{
		p = strstr(start,sub);
		if (p!=NULL)
		{
			len = 0;
			len = p - start;
			if (len>0)
			{
				strncat(tmp, start, len);
			}
			strncat(tmp, new_sub,strlen(new_sub));
			start=p+strlen(sub);
		}
		else
		{
			strcat(tmp,start);
			break;
		}
	} while (*start!='\0');//start[i]!='\0'
	
	char* buf = (char*)malloc(strlen(tmp)+1);
	strcpy(buf,tmp);
	*dst = buf;

	return 0;
}

void free_Buf(char* buf)
{

	if (buf != NULL)
	{
		free(buf);
		buf = NULL;
	}
}

void free_Buf2(char** buf)
{
	char* tmp = *buf;
	if (tmp != NULL)
	{	
		free(tmp);
	}
	*buf = NULL;
}

int main(void)
{

	char* p = "dddddabcd11111abcd2222abcdqqqqq";
	char* buf = NULL;//��replaceSubstr�з���ռ�
	int ret = 0;

	ret = replaceSubstr(p,&buf,"abcd","dcba");
	if (ret!=0)
	{
		printf("replaceSubstr err: %d\n",ret);
		return ret;
	}
	printf("p=%s\n",p);
	printf("buf=%s\n",buf);
	/*
	if (buf!=NULL)
	{
		free(buf);
		buf = NULL;
	}
	*/
	//free_Buf(buf);
	//buf = NULL;

	free_Buf2(&buf);

	system("pause");
	return 0;
}