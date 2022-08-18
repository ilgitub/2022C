#include"test.h"

void test1()
{
	const int a = 10;
	int* p =  (int *) & a;
	*p = 20;
	cout << "a= " << a << endl;
	cout << "p= " << *p << endl;
}

int main(void)
{
	test1();
}