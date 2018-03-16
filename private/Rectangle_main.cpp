#include"Rectangle.h"

int main()
{
    double input1,input2;
    cin>>input1>>input2;
    Rectangle s1(input1,input2);
    
    cin>>input1>>input2;
    Rectangle s2(input1,input2);
    cout<<fixed<<setprecision(2)<<s1.getArea()<<" "<<s1.getPerimeter()<<endl;
    cout<<s2.getArea()<<" "<<s2.getPerimeter()<<endl;

    s2.setWidth(2.5);
    s2.setLength(5.0);
    cout<<s2.getArea()<<" "<<s2.getPerimeter()<<endl;
}