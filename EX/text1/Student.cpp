#include"Student.h"
#include<iostream>
using namespace std;
Student::Student()      //建構者初值
{
	 name=" ";
	 score=0;
	// sex=0;
}
Student::Student(string newname, int newscore) //建構者新值
{
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
/*void Student::setsex(bool newsex) //舉例 建立性別
{
	sex = newsex;
}
*/
string Student::getName()
{
	return name;
}
int Student::getScore()
{
	return score;

}

/*bool Student::getsex() 舉例 得到性別
{
	return sex;
}
*/
void Student::print() //輸出
{
	cout << name << " " << score << endl;
}
