#include "operator.h"
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
Point Point::add(const Point& secondPoint)const
{
	int n = num1 + secondPoint.getnum1();
	int d = num2 + secondPoint.getnum2();
	return Point(n,d);
}
Point Point::subtract(const Point& secondPoint)const
{
	int n = num1- secondPoint.getnum1();
	int d = num2- secondPoint.getnum2();

	return Point(n, d);
}
string Point::toString()const
{
	stringstream ss;
	ss << "(" << num1 << "," << num2 << ")";
	return ss.str();
}
int Point::getnum1()const
{
	return num1;
	
}
int Point::getnum2()const
{
	return num2;
}
Point Point::operator+()
{
    return Point(num1,num2);
}
Point Point::operator-()
{
    return Point(-num1,num2);
}
ostream& operator<<(ostream& out, const Point& point)
{
    
        out<<"("<<point.num1<<","<<point.num2<<")";
    
    return out;
}
Point operator+(const Point& r1, const Point& r2)
{
return r1.add(r2);
}
Point operator-(const Point& r1,const  Point& r2)
{
return r1.subtract(r2);
}