// Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.

// Start with the second element as the first element is assumed to be sorted.
// Compare the second element with the first if the second is smaller then swap them.
// Move to the third element, compare it with the first two, and put it in its correct position
// Repeat until the entire array is sorted.



#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the Number";
    cout << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // sorting array
    for (int i = 1; i < n; i++) {
        int key = arr[i];       // element to be inserted
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // shift element right
            j = j - 1;
        }
        arr[j + 1] = key;        
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Enter the Number
//  4
// Enter the element
// 12
// 34
// 4
// 563
// Sorted array: 4 12 34 563 



// arr = {23, 1, 10, 5, 2}  

// Initial: 

//  Current element is  23 
//  The first element in the array is assumed to be sorted. 
//  The sorted part until  0th  index is :  [23] 
//  First Pass: 

//  Compare  1  with  23  (current element with the sorted part). 
//  Since  1  is smaller, insert  1  before  23  . 
//  The sorted part until  1st  index is:  [1, 23] 
//  Second Pass: 

//  Compare  10  with  1  and  23  (current element with the sorted part). 
//  Since  10  is greater than  1  and smaller than  23  , insert  10  between  1  and  23  . 
//  The sorted part until  2nd  index is:  [1, 10, 23] 
//  Third Pass: 

//  Compare  5  with  1  ,  10  , and  23  (current element with the sorted part). 
//  Since  5  is greater than  1  and smaller than  10  , insert  5  between  1  and  10 
//  The sorted part until  3rd  index is  :  [1, 5, 10, 23] 
//  Fourth Pass: 

//  Compare  2  with  1, 5, 10  , and  23  (current element with the sorted part). 
//  Since  2  is greater than  1  and smaller than  5  insert  2  between  1  and  5  . 
//  The sorted part until  4th  index is:  [1, 2, 5, 10, 23] 
//  Final Array: 

//  The sorted array is:  [1, 2, 5, 10, 23] 
// Complexity Analysis of Insertion Sort
// Time Complexity

// Best case: O(n), If the list is already sorted, where n is the number of elements in the list.
// Average case: O(n2), If the list is randomly ordered
// Worst case: O(n2), If the list is in reverse order
// Space Complexity

// Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.
// Please refer Complexity Analysis of Insertion Sort for details.

// Advantages and Disadvantages of Insertion Sort
// Advantages

// Simple and easy to implement.
// Stable sorting algorithm.
// Efficient for small lists and nearly sorted lists.
// Space-efficient as it is an in-place algorithm.
// Adoptive. the number of inversions is directly proportional to number of swaps. For example, no swapping happens for a sorted array and it takes O(n) time only.
// Disadvantages

// Inefficient for large lists.
// Not as efficient as other sorting algorithms (e.g., merge sort, quick sort) for most cases.