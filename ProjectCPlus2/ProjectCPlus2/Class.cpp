#include "Class.h"
void Class::setR(double r)
{
	m_r = r;
}
double Class::getR()
{
	return m_r;
}
double Class::getArea()
{
	m_area= 3.14 * m_r * m_r;
	return m_area;
}
double Class::getCircle()
{
	m_length= 2 * 3.14 * m_r;
	return m_length;
}