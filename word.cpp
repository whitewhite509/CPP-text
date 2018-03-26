#include <iostream>
#include <sstream>
#include <string>
using namespace std;



void printStringArray(string word[], int size)
    {
    cout << word[size] << endl;
    }

int main()
{
    
  string text;
 getline ( cin , text) ;
stringstream ss(text);
  
  int size;
  size=0;
  string word[10];
  cout << "The words in the text are " << endl;
 
  while (!ss.eof())
  {
       ss >> word[size];
       printStringArray(word,size);
  } 

}
//輸入一段文字一空白隔開 每一個空白換一次行
