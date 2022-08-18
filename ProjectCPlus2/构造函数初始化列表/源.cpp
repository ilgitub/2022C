#include <iostream>
#define _CRT_SECURE_NO_WARNINGS_

using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A()..." << endl;
		m_a = a;
	}
	~A()
	{
		cout << "~A()..." << endl;
	}
	void PrintT()
	{
		cout << "a= " << m_a << endl;
	}
private:
	int m_a;
};

class B
{
public:
	B(A& a1, A& a2, int b):m_a1(a1),m_a2(a2)
	{
		m_b = b;
	}
	~B()
	{
		cout << "~B()..." << endl;
	}
	void PrintT()
	{
		cout << "m_b= " << m_b << endl;
		m_a1.PrintT();
		m_a2.PrintT();
	}

private:
	int m_b;
	A m_a1;
	A m_a2;

};

int main(void)
{
	A a1(10), a2(100);
	B b1(a1, a2, 1000);
	b1.PrintT();

	return 0;
}