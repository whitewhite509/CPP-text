#ifndef Rectangle_H
#define Rectangle_H

#include<iomanip>
#include<iostream>
using namespace std;

class Rectangle
{
public:
  
    Rectangle();
    Rectangle(double ,double );
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setLength(double);

private:
    double width, height;
};
#endif