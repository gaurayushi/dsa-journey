// Check if String is Palindrome or Not
// Given a string s, return true if the string is palindrome, otherwise false.
// A string is called palindrome if it reads the same forward and backward.


// Example 1
// Input : s = "hannah"
// Output : true
// Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

// Example 2
// Input : s = "aabbaA"
// Output : false
// Explanation : The string when reversed is --> "Aabbaa", which is not same as original string, So we return false.

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the limit: ";
    cin >> n;

    cout << "Enter the elements up to limit: ";
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0, end = n - 1;
    bool isPalindrome = true;   // fixed: start as true

    while (start < end) {
        if (arr[start] != arr[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

// Enter the limit:  3
// Enter the elements up to limit:  nan
// The string is a palindrome.