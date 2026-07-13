// Given an integer n. You need to recreate the pattern given below for any value of N.
//  Let's say for N = 5, the pattern should look like as below:

#include <iostream>
using namespace std;

int main() 
{
   int n;
   cout<<"Enter the number"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++)
    {
        cout << "*";
    }
    cout<<endl;
   }
   for(int i=n;i>=1;i--)
   {
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;

   }
   return 0;
}

// Enter the number
// 8
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
