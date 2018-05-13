
#include "Point.h"
#include<sstream>
using namespace std;

Point::Point()
{
	num1 = 0;
	num2 = 0;
}
Point::Point(int a, int b)
{
	num1 = a;
	num2 = b;
}
Point Point::add(Point& secondPoint)
{
	int n = num1 + secondPoint.getnum1();
	int d = num2 + secondPoint.getnum2();
	return Point(n,d);
}
Point Point::subtract(Point& secondPoint)
{
	int n = num1- secondPoint.getnum1();
	int d = num2- secondPoint.getnum2();

	return Point(n, d);
}
string Point::toString()
{
	stringstream ss;
	ss << "(" << num1 << "," << num2 << ")";
	return ss.str();
}
int Point::getnum1()
{
	return num1;
	
}
int Point::getnum2()
{
	return num2;
}
