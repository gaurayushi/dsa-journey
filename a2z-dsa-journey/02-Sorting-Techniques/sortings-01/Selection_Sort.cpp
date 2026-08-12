// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and
// return the sorted array. A sorted array in non-decreasing order is an array where each element is greater than
//  or equal to all previous elements in the array.


// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.

// Example 2
// Input: nums = [5, 4, 4, 1, 1]
// Output: [1, 1, 4, 4, 5]
// Explanation: 1 <= 1 <= 4 <= 4 <= 5.
// Thus the array is sorted in non-decreasing order.



// Selection Sort
// Selection Sort is a comparison-based sorting algorithm. It sorts by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element.
// Find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
// Then find the smallest among remaining elements (or second smallest) and swap it with the second element.
// We keep doing this until we get all elements moved to correct position.

// Algorithm
// arr[]=[64,25,12,22,11];
// current element=64
// min element= 11

// Algorithm 
// Step 1 Start from  first element at index 0  and find the smallest element in the rest of the array
// which is unsorted and swap(11) with current (64 )
// arr[]=[64,25,12,22,11];
// current element=64
// min element= 11


// step 2 :  moved next  element at index 1 and find the smallest element in the rest of the aray which is unsorted 
// and swap 
// arr[]=[11,25,12,22,64];
// current element=25
// min element= 12
// Now : [11,12,25,22,64];


#include <iostream>
using namespace std;

int main() 
{
  int n;
  int min;
  cout<<"Enter the limit"<<n;
  cin>>n;
  int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 //sorting array 
 for(int i=0;i<n;i++)
 {
  int min=i;
  for(int j=i+1;j<n;j++)
  {
    if(arr[j]<arr[min]){
        min=j; 
    }
  }
    swap(arr[i],arr[min]);
  }
  cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Output 
// Enter the limit0  4
// 12 
// 3
// 44
// 5
// Sorted array: 3 5 12 44 

// Complexity Analysis of Selection Sort
// Time Complexity: O(n2) ,as there are two nested loops:

// One loop to select an element of Array one by one = O(n)
// Another loop to compare that element with every other Array element = O(n)
// Therefore overall complexity = O(n) * O(n) = O(n*n) = O(n2)
// Auxiliary Space: O(1) as the only extra memory used is for temporary variable