//C++�нṹ��Ҳ���࣬���������ǹ��е�
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Circle
{
public:
	void setR(double r)
	{
		m_r = r;
	}
	double getR()
	{
		return m_r;
	}
	/// <summary>
	/// ��ȡԲ���ܳ�
	/// </summary>
	/// <returns></returns>
	double getCircleLength()
	{
		return 2 * 3.14 *m_r * m_r;
	}
	/// <summary>
	/// ��ȡԲ�����
	/// </summary>
	/// <returns></returns>
	double getCircleArea()
	{
		return 3.14 * m_r * m_r;
	}

private:
	double m_r;

};

int main(void)
{
	Circle c;
	c.setR(10);
	cout << "Circle Length = " << c.getCircleLength() << endl;
	cout << "Cirlce Area= " << c.getCircleArea() << endl;
	return 0;
}
