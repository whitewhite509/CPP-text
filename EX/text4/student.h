#ifndef Student_H
#define	Student_H
#include<string>
#include"Date.h"
using namespace std;

class Student
{
public:

	Student();
	Student(string newname, int newscore, Date birthDay);
	void setName(string newname);
	void setScore(int newscore);
	string getName();
	int getScore();
	//void setsex(bool newsex);
	void print();
private:
	Date birthDay;
	int score;
	string name;
};

#endif 
//利用text1的cpp,h檔