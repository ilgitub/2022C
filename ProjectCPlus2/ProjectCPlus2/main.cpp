#include<iostream>
#include"Class.h"

using namespace std;

int main(void)
{
	Class c;
	c.setR(10);

	cout << "circle area is " << c.getArea() << "," << "length is " << c.getCircle() << endl;
}