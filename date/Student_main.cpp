#include"Student.h"
#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int year,month,day;
    string name;
    Date date1(1990 ,3,25); //原設定 年月日值
    Date date2(1993,12,1);

    Student student1("John",date1,90);  //原設定值 名子生日分數
    Student student2("Mary",date2,80);

    cin>>name>>month>>day>>year;

    student1.setName(name); 

    date2.setyear(year);    //建立新值在date檔
    date2.setmonth(month);
    date2.setday(day);
    student2.setDate(date2); //把值放到物件二的建立新的生日

    student1.print(); //輸出
    student2.print();
}

//主程式建立兩個Student物件student1和student2，分別為John 3 25 1990 90, Mary 12 1 1993 80，
然後輸入名字和生日，修改student1的名字和修改student2的生日，最後利用物件的print輸出。
