#include"Rectangle.h"

int main()
{
    double input1,input2;
    cin>>input1>>input2;
    Rectangle a(input1,input2);
    
    cin>>input1>>input2;
    Rectangle b(input1,input2);

    cout<<fixed<<setprecision(2)<<a.getArea()<<a.getPerimeter()
                    <<endl;
    cout<<fixed<<setprecision(2)<<b.getArea()<<b.getPerimeter()<<endl;

    b.width=2.5;
    b.height=5.0;
    cout<<b.getArea()<<b.getPerimeter()<<endl;
    return 0;

}
//text的主程式檔  
