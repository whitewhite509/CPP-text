#include"Student.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	Student student1("John",90);

	Student student2("Mary",80);

	string name;
	int score;
	cin >> name >> score;
	student1.setName(name);
	student2.setScore(score);
	student1.print();
	student2.print();

}
//主程式建立兩個Student物件student1和student2，分別為John 90, Mary 80
//然後輸入1個名字和1個分數，第1個輸入修改student1的名字，第2個輸入修改student2的分數。
