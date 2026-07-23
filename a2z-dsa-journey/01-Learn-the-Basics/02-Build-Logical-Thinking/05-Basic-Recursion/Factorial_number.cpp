// Sum of First N NumbersGiven an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


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

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main() 
{   int n;
    int total;
    cout<< "Enter n";
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial is not defined ";
    }
    else{
        cout<<"Factorial of "<<n<<": :"<<factorial(n);
    }
    return 0;
}



// Enter n
// 5
// Factorial of 5: :120