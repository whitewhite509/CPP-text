#include"Rectangle.h"

Rectangle::Rectangle()
{
    width=1 ;
    height=1;
}
Rectangle::Rectangle(double height,double width)
{
    this->width=width;
    this->height=height;
}
double Rectangle::getArea()
{
    return height*width;
}
double Rectangle::getPerimeter()
{
    return 2*(height+width);
}
void Rectangle::setWidth(double width)
{
    if(width>=0)
        this->width=width;
    else
        this->width=0;
}
void Rectangle::setLength(double height)
{
    this->height=(height>=0)? height : 0;

    // ?前為條件 後為  (成立)true:false（不成立）
//     if(height>=0)
//     this->height=height;
//     else
//     this->height=0; 四行和一行的功能一樣 
 }
