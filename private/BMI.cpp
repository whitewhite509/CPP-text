#include"BMI.h"


BMI::BMI()              //定義初值
{
     
    weight=1;
    height=1;
}
BMI::BMI(double nw,double nh)   
{                               // 定義得到新的值                            
    weight=nw;                  //初值換成新的值
    height=nh;
}
double BMI::bmi()            //自訂的函式 為算BMI值
{
   return weight/(height*height);
}