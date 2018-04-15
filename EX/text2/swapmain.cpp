#include"Student.h"
#include<iostream>
using namespace std;

void swap(Student *student1, Student *student2)
{
	Student t = *student1;
	*student1 = *student2;
	*student2 = t;
}

int main() {
	string name;
	int score;
	cin >> name >> score;
	Student student1(name, score);
	cin >> name >> score;
	Student student2(name, score);
	swap(&student1, &student2);
	cout << student1.getName() << " " << student1.getScore() << endl;
	cout << student2.getName() << " " << student2.getScore() << endl;
	return 0;
}
//和text1 共用cpp ,h檔
//以pass by Pointer 方式交換兩個物件。 