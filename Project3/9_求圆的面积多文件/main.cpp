#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Circle.h"

using namespace std;

int main(void)
{
	Circle c;
	c.setR(10);
	cout << "Area = " << c.getArea() << endl;
	cout << "Girth = " << c.getGirth() << endl;

	return 0;
}