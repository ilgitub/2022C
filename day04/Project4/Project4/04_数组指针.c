#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Debug 0

typedef int(*P)[4];

int printfA(int(*p)[4],int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d  ",p[i][j]);
		}
	}
	return 1;
}

int main(void)
{
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int res;
	res=printfA(a,sizeof(a)/sizeof(a[0]));
	printf("res=%d\n",res);

#if Debug
	//����ָ�룬��ָ�룬ָ��һ�������ָ��
	//��������ָ�����
	int a[10] = { 0 };
	//1���ȶ����������ͣ��������Ͷ���ָ�����
	typedef int A[10];//A��������
	A* p = NULL;//p����ָ�����ͱ���
	//p=a;//a��ʾ������Ԫ�ص�ַ��a��&aһ��������Ҳ�ǵ�&a������
	p = &a;//&a�������������׵�ַ
	for (int i = 0; i < 10; i++)
	{
		(*p)[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", (*p)[i]);
	}
#endif
	printf("\n");
	system("pause");
	return 0;
}