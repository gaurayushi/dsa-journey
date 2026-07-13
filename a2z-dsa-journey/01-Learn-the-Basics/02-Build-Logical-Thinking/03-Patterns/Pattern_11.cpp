// Given an integer n. You need to recreate the pattern given below for any value of N. 
//Let's say for N = 5, the pattern should look like as below:

// 1 

// 2 3 

// 4 5 6 

// 7 8 9 10 

// 11 12 13 14 15

// Print the pattern in the function given to you.





#include <iostream>
using namespace std;

int main() 
{   int n;
    int count=1;
    cout<<"Enter the nunber ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    
   
    return 0;
}

Enter the nunber 7


1
23
456
78910
1112131415