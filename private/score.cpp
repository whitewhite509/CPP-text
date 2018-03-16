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
void Score::setALL(string name,int math)
{
    this->name=name;//舊換新
    this->math=math;
}
