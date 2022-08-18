#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main0(void)
{
	char a0[30] = "2222222222";
	char a1[30] = "11111111111";
	char a2[30] = "bbbbbbbbbbb";
	char a3[30] = "aaaaaaaaaaaaaa";

	char a[4][30] = { "222222222222","111111111111","bbbbbbbbbbbbbb","aaaaaaaaaaaaa" };
	
	printf("a=%d,a+1=%d\n",a,a+1);
	
	int i = 0;
	for ( i = 0; i < 4; i++)
	{
		printf("%s\n",a[i]);
	}

	char b[30];
	printf("&b:%d,&b+1:%d\n",&b,&b+1);
	printf("b:%d,b+1£º%d\n",b,b+1);

	printf("\n");
	system("pause");
	return 0;
}

void print_array_err(char** a, int n)
{
	//printf("a=%d,a+1=%d\n",a,a+1);
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		//printf("%s\n",a[i]);
		 
	}
}
void print_array(char a[][30], int n)
{
	//printf("a=%d,a+1=%d\n", a, a + 1);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%s\n",a[i]);

	}
}

void sort_array(char a[][30],int n)
{
	int i = 0;
	int j = 0;
	char tmp[30];

	for (i = 0; i < n-1; i++)
	{
		for ( j = i+1; j < n; j++)
		{
			if (strcmp(a[i],a[j])>0)
			{
				//½»»»ÄÚ´æ¿é
				strcpy_s(tmp,30,a[i]);
				strcpy_s(a[i],30,a[j]);
				strcpy_s(a[j],30, tmp); 
			}
		}
	}
}

int main(void)
{
	char a[][30] = { "222","111","bbb","aaa" };
	int n = sizeof(a) / sizeof(a[0]);

	printf("before sort:\n");
	print_array(a, n);

	sort_array(a,n);

	printf("\nafter sort:\n");
	print_array(a,n);


	printf("\n");
	system("pause");
	return 0;
}