#include "Circle.h"

void Circle::setR(double r)
{
	m_r = r;
}

double Circle::getR()
{
	return m_r;
}

double Circle::getArea()
{
	return 3.14 * m_r * m_r;
}

double Circle::getGirth()
{
	return 3.14 * m_r * 2;
}
