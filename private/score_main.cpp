#include"score.h"
#include<string>
using namespace std;

int main()
{
    Score score1("John" ,90);
    Score score2("Mary" ,80);
    
    string name;
    int math;
    
    cin>>name>>math;
    score1.setALL(name,math);//把私人的參數回傳到 setall裡 但setall是不回傳的  
    cin>>name>>math;
    score2.setALL(name,math);//把內定的值改成新輸入的值 題目需求
    score1.p();
    score2.p();
}
//輸入2組參數，修改score1及score2的名字、成績(第一個改名字，第二個改成績
    
