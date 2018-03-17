#include"BMI.h"

int main()
{
string name;    
double inpute1,input2;      //宣告變數
cin>>name>>inpute1>>input2; //引入值

BMI c(inpute1,input2);     //用c變數把輸入的值告訴 BMI::BMI(double nw,double nh) 
cout<<fixed<<setprecision(2)<<name<<" "<<c.bmi()<<endl;
                           // 所以輸出的bmi()裡可以得到重量跟身高的值 做運算
}