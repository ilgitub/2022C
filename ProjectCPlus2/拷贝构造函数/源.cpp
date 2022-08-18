#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Test()..." << endl;
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		cout << "Test(int x,int y)..." << endl;
		m_x = x;
		m_y = y;
	}
	Test(const Test& t)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = t.m_x;
		m_y = t.m_y;
	}
	void operator =(const Test& another)
	{
		cout << "operator=(const Test& another)" << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}
	void PrintT()
	{
		cout << "x= " << m_x << ",y= " << m_y << endl;
	}
	~Test()
	{
		cout << "~Test()..." << endl;
	}
private:
	int m_x;
	int m_y;
};

void test1()
{
	Test t1(10, 20);
	Test t2(t1);
}

void test2()
{
	Test t1(10, 20);
	Test t2;
	t2 = t1;
}
void test4()
{
	Test t1(10, 20);
	Test t2 = t1;
}
//
Test func2()
{
	cout << "func2 begin..." << endl;
	Test temp(10, 20);
	temp.PrintT();

	cout << "func2 end..." << endl;
	return temp;
}
void test5()
{
	cout << "test5 beginning..." << endl;

	func2();

	cout << "test5 end..." << endl;
}
//
void test6()
{
	cout << "test6 beginning..." << endl;

	Test t1=func2();

	cout << "test6 end..." << endl;
}
//
void test7()
{
	cout << "test7 beginning..." << endl;

	Test t1;
	t1 = func2();

	cout << "test7 end..." << endl;
}
//
void func(Test t)
{
	cout << "func begin..." << endl;
	t.PrintT();
	cout << "func end..." << endl;
}
//
void test3()
{
	cout << "test3 begin..." << endl;
	Test t1(10, 20);
	func(t1);
	cout << "test3 end..." << endl;
}


int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	test7();

#if 0
	Test t1(100, 200);
	Test t2(t1);
	t2.PrintT();

	//
	Test t3;
	t3 = t1;
	t3.PrintT();

	Test t4 = t1;
	t4.PrintT();
#endif // 
	return 0;
}