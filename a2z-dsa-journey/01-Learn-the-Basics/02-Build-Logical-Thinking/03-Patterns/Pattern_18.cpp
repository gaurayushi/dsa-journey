// Given an integer n. You need to recreate the pattern given below for any value of N. 
// Let's say for N = 5, the pattern should look like as below:



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// Enter the number
// 8
// ****************
// *******  *******
// ******    ******
// *****      *****
// ****        ****
// ***          ***
// **            **
// *              *
// *              *
// **            **
// ***          ***
// ****        ****
// *****      *****
// ******    ******
// *******  *******
// ****************