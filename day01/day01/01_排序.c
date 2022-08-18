#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main01(void)
//{
//	printf("≈≈–Ú«∞\n");
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//
//	//—°‘Ò≈≈–Ú∑®
//	for (int i = 0;  i < n-1; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		}
//	}
//
//	printf("≈≈–Ú∫Û\n");
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void sort_array(int a[], int n)
{
	//—°‘Ò≈≈–Ú∑®
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(void)
{
	int a[] = { 10,7,1,9,4,6,7,3,2,0 };
	int n;
	int i = 0;
	int j = 0;
	int temp = 0;

	n = sizeof(a) / sizeof(a[0]);
	printf("n=%d\n",n);

	printf("≈≈–Ú«∞£∫\n");
	print_array(a,n);

	printf("\n");
	printf("≈≈–Ú∫Û£∫\n");
	sort_array(a,n);
	print_array(a,n);

	system("pause");
	return 0;
}