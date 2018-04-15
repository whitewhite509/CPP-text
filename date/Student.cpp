#include"Student.h"
#include"Date.h"
#include<iostream>
#include<string>
using namespace std;


Student::Student()
{
name=" ";
//birth=0;  不需要幫birthDay設初值 因為date檔設過
score=0;
}
Student::Student(string name ,Date birthDay,int score)
{
    this->name=name;
    this->birthDay=birthDay;
    this->score=score;
}
 void Student::setName(string name)
 {
    this->name=name;
 }
 void Student::setDate(Date birthDay)
 {
    this->birthDay=birthDay;
 }
 void Student::setScore( int score)
 {
    this->score=score;
 }
 string Student::getName()
 {
    return name;
 }
 Date Student::getDate()
 {
    return birthDay;
 }
 int Student::getScore()
 {
    return score;
 }
 void Student::print()
 {
    cout<<name<<" ";
    birthDay.print();
    cout<<" "<<score<<endl;
 }
 //物件二 cpp 功能檔  name score birthday