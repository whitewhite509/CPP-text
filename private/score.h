#ifndef SCORE_H
#define SCORE_H

#include<iostream>
#include<string>
using namespace std;

class Score
{ 
public:
    Score();
    Score(string name,int math);
    void setALL(string name,int math);
    void p(); //輸出

private:
    int math;
    string name;
};

#endif
