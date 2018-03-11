#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle //類別
{
public:
double height; //宣告
double width;
Rectangle() // 初值
{
    width=1;
    height=1;
}
Rectangle(double nw,double nh)
{
    height=nh;
    width=nw;
}
double getArea() //長方形面積
{
    return height*width;
}
double getPerimeter()// 週長
{
    return 2*(width+height);
}

};
//主程式 物件
int main()
{
    double input1,input2;
     
    cin>>input1>>input2;
    Rectangle a(input1,input2); //第一個長方形
    
    cin>>input1>>input2;
    Rectangle b(input1,input2); //第二個長方形

    cout<<fixed<<setprecision(2)<<a.getArea()<<" "<<a.getPerimeter()
                    <<endl;
    cout<<fixed<<setprecision(2)<<b.getArea()<<" "<<b.getPerimeter()<<endl;

    b.width=2.5;
    b.height=5.0;
    cout<<b.getArea()<<" "<<b.getPerimeter()<<endl;
    return 0;

}
//輸入2組長方形的長寬作為建構2個長方形的參數，輸出2個長方形的面積和周長。

//再將第二個長方形的長改為5.0、寬改為2.5，輸出修改後第2個長方形的面積和周長。