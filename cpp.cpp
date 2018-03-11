#include"Rectangle.h"

Rectangle::Rectangle()
{
    width=1;
    height=1;
}
Rectangle::Rectangle(double nw,double nh)
{
    height=nh;
    width=nw;
}
double Rectangle::getArea()
{
    return height*width;
}
double Rectangle::getPerimeter()
{
    return 2*(width+height);
}
//text拆三個檔之一的 cpp檔 