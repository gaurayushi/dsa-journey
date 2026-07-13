// Given an integer n. You need to recreate the pattern given below for any value of N.
//  Let's say for N = 5, the pattern should look like as below:



// A
// BB
// CCC
// DDDD
// EEEEE


#include <iostream>
using namespace std;

int main() 
{   int n;
    // char ch='A';
    cout<<"Enter the nunber ";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
        }
    
        cout<<endl;
    }
    
   
    return 0;
}


// Enter the nunber 6
// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF
// GGGGGGG