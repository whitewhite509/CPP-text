#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();
    Date(int year ,int month,int day);
    void setmonth(int month);
    void setyear(int year);
    void setday(int day);
    int getmonth();
    int getyear();
    int getday();
    void print();

private:
    int month;
    int year;
    int day;

};
#endif

//寫一個年月日物件 h檔