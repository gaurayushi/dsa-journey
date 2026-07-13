// Given an integer n. You need to recreate the pattern given below for any value of N. 
// Let's say for N = 5, the pattern should look like as below:
// *
// **
// ***
// ****
// *****


#include <iostream>
using namespace std;

int main() 
{
   int n;
   cout<<"Enter the number"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
}


// Enter the number
// 10

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********