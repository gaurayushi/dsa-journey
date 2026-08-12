// Divisors of a Number

// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

// A number which completely divides another number is called it's divisor.


// Example 1

// Input: n = 6

// Output = [1, 2, 3, 6]

// Explanation: The divisors of 6 are 1, 2, 3, 6.

// Example 2

// Input: n = 8

// Output: [1, 2, 4, 8]

// Explanation: The divisors of 8 are 1, 2, 4, 8.


#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}


Optimize approach 
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int>ls;

    cout << "Divisors of " << n << ": ";
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ls.push_back(i);
        }
        if(n/i!=i){
          ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    cout << endl;

    return 0;
}