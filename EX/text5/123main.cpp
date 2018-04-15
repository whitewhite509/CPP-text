
#include"Student.h"
#include<iostream>
#include<iomanip>
using namespace std;

double average(Student stuArray[], int size)
{
	float s = 0;
	for(int i= 0;i<size;i++)
	{
		cout << stuArray[i].getName() <<" "<< stuArray[i].getScore() << endl;
		
		s = s+stuArray[i].getScore();
	}
	return s/size;
}
void printArray(Student stuArray[], int size)
{
	
	cout << fixed << setprecision(2) <<  "Average: "<<average(stuArray, size) << endl;
}

int main() {
	string name[3];
	int score[3];
	for (int i = 0; i<3; i++) {
		cin >> name[i] >> score[i];
	}
	Student stuArray[3] = { Student(name[0],score[0]),  Student(name[1],score[1]) , Student(name[2],score[2]) };
	int size = 3;
	printArray(stuArray, size);
	
	return 0;

}
//和 text1共用 cpp,h檔

