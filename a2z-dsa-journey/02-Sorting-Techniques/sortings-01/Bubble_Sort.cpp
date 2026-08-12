// Given an array of integers called nums,sort the array in non-decreasing order using the
// bubble sort algorithm and return the sorted array.  A sorted array in non-decreasing order is an array 
//where each element is greater than or equal to all preceding elements in the array.


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




// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not efficient for large data sets as its average and worst-case time complexity are quite high.

// Sorts the array using multiple passes. After the first pass, the maximum goes to end (its correct position). Same way, after second pass, the second largest goes to second last position and so on.
// In every pass, process only those that have already not moved to correct position. After k passes, the largest k must have been moved to the last k positions.
// In a pass, we consider remaining elements and compare all adjacent and swap if larger element is before a smaller element. If we keep doing this, we get the largest (among the remaining elements) at its correct position.
// bubble-sort-3.webp



// How it works algo 
//  Phase -01 
//  i=0  5,6,1,3  
//  i=1  5,1,6,3
//  i=2  5,1,3,6
//  Result is  5,1,3,6
//  phase -02 
//  i=0  5,1,3,6
//  i=1  1,5,3,6
//  i=2  1,3,5,6





#include <iostream>
using namespace std;

int main() 
 {
     int n;
     bool sorted;
     cout<<"Enter the Number";
     cout<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter the element"<<endl;
      for(int i=0;i<n;i++){
           cin>>arr[i];
        }

        //sorting array 
        for(int i=0;i<n;i++)
        { 
          sorted=false;
        for(int j=0;j<n-1-i;j++)
        {
         if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
          sorted=true; }
        }
        if(!sorted){
          break;}}
       
        for(int i=0;i<n;i++){
           cout<<arr[i]<<",";
        }
    return 0;
}


// Enter the Number
//  3
// Enter the element
// 12
// 233
// 4
// 4,12,233,



// Complexity Analysis of Bubble Sort:
// Time Complexity: O(n2)
// Auxiliary Space: O(1)
// Please refer Complexity Analysis of Bubble Sort for details.

// Advantages of Bubble Sort
// Bubble sort is easy to understand and implement.
// It does not require any additional memory space.
// It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

// Disadvantages of Bubble Sort
// Bubble sort has a time complexity of O(n2) which makes it very slow for large data sets.
// Bubble sort has almost no or limited real world applications. It is mostly used in academics to teach different ways of sorting.