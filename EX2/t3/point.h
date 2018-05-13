#ifndef POINT_H
#define POINT_H
#include<string>
using namespace std;

class Point
{
public:
	Point();
	Point(int,int);
	int getnum1();
	int getnum2();
	Point add(Point&);
	Point subtract(Point&);
	string toString();

private:
	int num1,num2;
};

#endif