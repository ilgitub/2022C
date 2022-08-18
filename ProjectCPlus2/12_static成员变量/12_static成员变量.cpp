#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class AA
{
public:
	AA(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	//
	static int m_c;
	int getC()
	{
		m_c++;
		return m_c;
	}
	 
private:
	int m_a;
	int m_b;
};

int AA::m_c = 100;

int main(void)
{
	AA a1(100, 200);
	AA a2(10, 20);
	cout << a1.getC() << endl;
	cout << a2.getC() << endl;

	a1.m_c = 1000;
	AA::m_c = 2000;

	return 0;
}