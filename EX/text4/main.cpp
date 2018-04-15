
#include"Date.h"
#include"Student.h"
#include<iostream>
#include<string>

using namespace std;


int main() {
	int year;
	int month,day;
	string name;
	int score;
	cin >>name>>year >> month>>score ;
	Date date1(year, month);
	Student student1(name,score, date1);

	cin >> name >> year  >> month >> score;
	Date date2(year, month);
	Student student2(name,score, date2);

	student1.print();
	student2.print();

}
//結合text1,text3完成此檔
//主程式輸入2組姓名、年、月、成績建立兩個Student物件student1和student2， 最後利用Student的print輸出。
