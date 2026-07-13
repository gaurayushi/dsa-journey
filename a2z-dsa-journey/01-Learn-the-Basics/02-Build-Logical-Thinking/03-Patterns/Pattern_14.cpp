// Given an integer n. You need to recreate the pattern given below for any value of N.
//  Let's say for N = 5, the pattern should look like as below:



// ABCDE

// ABCD

// ABC

// AB

// A


#include <iostream>
using namespace std;

int main() 
{   int n;
    // char ch='A';
    cout<<"Enter the nunber ";
    cin>>n;

    for(int i=n;i>1;i--)
    {
        char ch='A';
        for(int j=i;j>1;j--)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
   
    return 0;
}



// Enter the nunber 8
// ABCDEFG
// ABCDEF
// ABCDE
// ABCD
// ABC
// AB
// A