// Reverse an array
// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


// Example 1
// Input: n=5, arr = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Example 2
// Input: n=6, arr = [1,2,1,1,5,1]
// Output: [1,5,1,1,2,1]
// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

#include <iostream>
using namespace std;

int Calc(int i,int arr[],int n){
    if(i>=n/2) return r;
    Swap(arr[i],arr[n-1-i]);
}

int main() 
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"enter a value"<,end;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    calc(0,arr,n);
   
    return 0;
}