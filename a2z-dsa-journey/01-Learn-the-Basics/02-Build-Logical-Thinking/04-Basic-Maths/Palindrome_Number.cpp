#include <iostream>
using namespace std;

int main() 
{
  int n;
  int count=0;
  int store;
  int original;
  cout<<"Enter the number";
  cin>>n;
  original=n;
  while(n>0){
    store=n%10;
    count=count*10+store;
    n=n/10;
  }
  if(original==count){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}

// Enter the number 66
// true

// Enter the number 666
// true
