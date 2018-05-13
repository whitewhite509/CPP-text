#ifndef OPERATOR_H
#define OPERATOR_H
#include<string>
using namespace std;

class Point
{
public:
	Point();
	Point(int,int);
	int getnum1()const;
	int getnum2()const;
	Point add(const Point&)const;
	Point subtract(const Point&)const;
	string toString()const;

    Point operator+();
    Point operator-();
    friend ostream& operator<<(ostream&,const Point&);
private:
	int num1,num2;
};
Point operator+(const Point& r1,const  Point& r2);
Point operator-(const Point& r1,const  Point& r2);
#endif
