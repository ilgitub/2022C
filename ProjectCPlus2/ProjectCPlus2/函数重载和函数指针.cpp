#include<iostream>

using namespace std;

typedef int FUN(int, int);
typedef int (* FUNC)(int, int);

int func(int a, int b)
{
	cout << "two" << endl;
	return 0;
}
char func(int a, int b, int c)
{
	cout << "three" << endl;
	return 0;
}

class Hero
{
	int id=900;

public:
	int get_ID()
	{
		return id;
	}
};

int main(void)
{
	//1.
	FUN* fun = NULL;
	fun = func;
	fun(1, 2);
	//2.
	FUNC fun2 = NULL;
	fun2 = func;
	fun2(1,2);
	//3.
	int (*fun3)(int, int) = NULL;
	fun3 = fun;
	fun3(1,2);

	Hero h;
	int getID = h.get_ID();
	cout << "getID= " << getID << endl;

	//func(1, 2, 3);
	return 0;
}