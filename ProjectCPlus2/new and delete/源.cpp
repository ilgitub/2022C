#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//C
void test1()
{
	int* p = (int*)malloc(sizeof(int));
	*p = 10;

	if (p!=NULL)
	{
		free(p);//delete
		p = NULL;
	}
}
//C++
void test2()
{
	int* p = new int;
	*p = 20;

	if (p!=NULL)
	{
		delete p;//free();
		p = NULL;
	}

	int* array_p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array_p[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array_p[i] << " ";
	}
	cout << endl;

	if (array_p!=NULL)
	{
		delete[] array_p;
	}
}

int main(void)
{
	test1();
	cout << "----------------------" << endl;
	test2();
	return 0;
}