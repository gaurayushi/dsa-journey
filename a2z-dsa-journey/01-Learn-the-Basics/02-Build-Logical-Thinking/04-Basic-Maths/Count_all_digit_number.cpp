// Count all Digits of a Number Subscribe to TUF+
// The number will have no leading zeroes, except when the number is 0 itself.


// Example 1
// Input: n = 4
// Output: 1
// Explanation: There is only 1 digit in 4.

// Example 2
// Input: n = 14
// Output: 2
// Explanation: There are 2 digits in 14.


#include <iostream>
using namespace std;

int main() 
{
  int n;
  int count=0;
  cout<<"Enter the number";
  cin>>n;
  while(n>0){ //if n greater then 0  then enter inside condition 
    n=n/10;
    count++;
  }
  cout<<count;
  return 0;
}

// output 
// Enter the number 567
// 3


// Enter the number 902929292
// 9
