#ifndef Student_H
#define	Student_H
#include<string>
using namespace std;

class Student
{
public:

	Student();
	Student(string newname,int newscore);
	void setName(string newname);
	void setScore(int newscore);
	string getName();
	int getScore();
//	void setsex(bool newsex);
//	bool getsex();
	void print();
private:
	string name;
	int score;
	//bool sex;
};

#endif 
//舉例 性別用bool