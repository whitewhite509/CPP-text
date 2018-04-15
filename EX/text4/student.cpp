
#include"Student.h"
#include"Date.h"
#include<iostream>
using namespace std;


Student::Student()
{
	name = " ";
	score = 0;
}
Student::Student(string newname, int newscore, Date newbirthDay)
{
	birthDay = newbirthDay;
	name = newname;
	score = newscore;
	//sex = newsex;
}
void Student::setName(string newname)
{
	name = newname;
	//this->name = name;
}
void Student::setScore(int newscore)
{
	score = newscore;
}

string Student::getName()
{
	return name;
}
int Student::getScore()
{
	return score;
	//Š³œÆŒÆ¥Î?§ÎŠ¡
}


void Student::print()
{
	cout << name<<" " ;
	birthDay.print();
	cout<<" "<< score <<endl;;
}
