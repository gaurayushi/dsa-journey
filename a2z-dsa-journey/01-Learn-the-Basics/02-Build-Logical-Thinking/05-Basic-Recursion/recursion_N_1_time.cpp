// Sum of First N Numbers
// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


// Example 1
// Input : N = 4
// Output : 10
// Explanation : first four natural numbers are 1, 2, 3, 4.

// Sum is 1 + 2 + 3 + 4 => 10.
// Example 2
// Input : N = 2
// Output : 3
// Explanation : first two natural numbers are 1, 2.

// Sum is 1 + 2 => 3.


#include <iostream>
using namespace std;

void printnum(int i)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<"";
    printnum(i-1);
}

int main() 
{   int n;
    cout << "Enter n";
    cin>>n;
    printnum(n);
    return 0;
}


// Enter n 
// 12
// 121110987654321
