// Check if the Number is Armstrong
// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


// Example 1
// Input: n = 153
// Output: true

// Explanation: Number of digits : 3.
// 13 + 53 + 33 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.
// Example 2
// Input: n = 12
// Output: false
// Explanation: Number of digits : 2.
// 12 + 22 = 1 + 4 = 5.

Therefore, it is not an Armstrong number.
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  int largest,sum=0;
  int n;
  cout<<"Enter the  number"<<endl;
  cin>>n;
  int Armstrong=n;
  while(n>0)
  {
    largest=n%10;
    sum=sum+(largest*largest*largest);
    n=n/10;
  }
   if(Armstrong==sum){
    cout<<"There fore armstrong";
   }
   else{
    cout<<"therefore not armstrong";
   }

    return 0;
}

Enter the  number
153
There fore armstrong