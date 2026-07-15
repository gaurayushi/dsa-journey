// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
// Example 1
// Input: n = 25
// Output: 52

// Explanation: Reverse of 25 is 52.
// Example 2
// Input: n = 123
// Output: 321

// Explanation: Reverse of 123 is 321.

#include <iostream>
using namespace std;

int main() 
{
  int n;
  int count=0;
  int store;
  cout<<"Enter the number";
  cin>>n;
  while(n>0){
    store=n%10;
    count=count*10+store;
    n=n/10;
  }
  cout<<count;
  return 0;
}

// Enter the number 34
// 43