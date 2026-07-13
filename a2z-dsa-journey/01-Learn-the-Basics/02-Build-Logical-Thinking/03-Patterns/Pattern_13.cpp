// Given an integer n. You need to recreate the pattern given below for any value of N. 
// Let's say for N = 5, the pattern should look like as below:

// A

// AB

// ABC

// ABCD

// ABCDE

// Print the pattern in the function given to you.

#include <iostream>
using namespace std;

int main() 
{   int n;
    // char ch='A';
    cout<<"Enter the nunber ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char ch='A';
        for(int j=1;j<i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
   
    return 0;
}



// Enter the nunber  8


// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF