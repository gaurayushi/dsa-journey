
// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.

#include <iostream>
using namespace std;

void printNumbers(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << i << " ";

    printNumbers(i + 1, n);
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    printNumbers(1, n);

    return 0;
}


// Enter n: 12
// 1 2 3 4 5 6 7 8 9 10 11 12 