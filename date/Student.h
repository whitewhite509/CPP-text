#ifndef Student_H
#define Student_H
#include"Date.h"
#include<string>
using namespace std;

class Student
{
public:
    Student();
    Student(string name ,Date birthDay,int score);

    void setName(string name);
    void setDate(Date birthDay);
    void setScore( int score);
    string getName();
    Date getDate();
    int getScore();
    void print();

private:
    int score;
    Date birthDay;
    string name;

};
#endif
//物件二 h檔