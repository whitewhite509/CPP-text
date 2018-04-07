#include"total.h"
#include <iostream>

using namespace std;

// Add circle areas
void sum(int rectArray[], int size) 
{
  // Initialize sum
  int s = 0;

  // Add areas to sum
  for (int i = 0,j=1; j<8;i+=2,j+=2)
    {

      cout<<rectArray[i]<<" "<<rectArray[j]<<" "<<rectArray[i]*rectArray[j]<<endl;

      s=rectArray[i]*rectArray[j]+s;
    }
    cout<<"Total:"<<" "<<s;
}

int main()
{
  int rectArray[8];
  int size;
  for(int i=0;i<8;i++)
  {
    cin>>rectArray[i];
  }
  sum(rectArray,size);

  return 0;
}