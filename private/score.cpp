#include"score.h"

Score::Score()//初值
{
    math=0;
    name="";
}
Score::Score(string name,int math)
{
    this->name=name;
    this->math=math;
}
void Score::setALL(string name,int math)//把私人的參數回傳到 setall裡 但setall是不回傳的  
{
    this->name=name;//舊換新
    this->math=math;
}
void Score::p()
{
    cout<<name<<" "<<math<<endl; 
}
