#include <iostream>
using namespace std;
/*

FILE: 07_05_00_Sorting_And_Rotations.cpp
TOPIC: Sorting and Rotations (Medium Level)


PART A: BEGINNER - What is Sorting & Rotation?

Sorting: Arrange elements in ascending/descending order.
{5,1,4,2} -> sorted {1,2,4,5}

Rotation: Shift elements.
Left Rotate by 1: {1,2,3,4} -> {2,3,4,1}
Right Rotate by 1: {1,2,3,4} -> {4,1,2,3}

PART B: INTERMEDIATE - Sorting Logic

1. Bubble Sort: Compare adjacent, swap if wrong. O(n^2)
   for(i=0;i<n-1;i++)
     for(j=0;j<n-1-i;j++)
       if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);

2. Left Rotation by 1:
   temp = arr[0]
   for(i=0;i<n-1;i++) arr[i]=arr[i+1]
   arr[n-1]=temp

3. Left Rotation by k:
   Reverse first k, reverse last n-k, reverse whole.
   Or use temp array O(n).

PART C: ADVANCE - Complexity

Bubble/Insertion/Selection: O(n^2) - good for learning, not for large data
Optimized: STL sort() uses IntroSort O(n log n)

Rotation by k:
- Naive: Rotate k times one by one O(n*k)
- Better: Use temp array O(n) space O(n) time
- Best: Reversal algorithm O(n) time O(1) space

PART D: SCHOLAR - Interview

Q: Sort 0s,1s,2s without sorting? (Dutch National Flag)
Ans: Three pointers low, mid, high.

Q: Check if array is sorted and rotated?
Ans: Count breaks where arr[i] > arr[i+1], should be <=1.

Q: Rotate without extra space?
Ans: Use reversal: reverse(0,k-1), reverse(k,n-1), reverse(0,n-1)
*/

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void reversePart(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
}

void leftRotateByK(int arr[], int n, int k){
    k = k % n; // Handle k>n
    reversePart(arr, 0, k-1);
    reversePart(arr, k, n-1);
    reversePart(arr, 0, n-1);
}

int main(){
    cout << "================================================================\n";
    cout << "07_05_00 - SORTING & ROTATIONS\n";
    cout << "================================================================\n\n";

    int arr[] = {5,1,4,2,8};
    int n=5;
    cout << "Before Sort: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    bubbleSort(arr,n);
    cout << "\nAfter Bubble Sort: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    int rot[] = {1,2,3,4,5};
    leftRotateByOne(rot,5);
    cout << "\n\nLeft Rotate by 1: ";
    for(int i=0;i<5;i++) cout<<rot[i]<<" ";

    int rotK[] = {1,2,3,4,5};
    leftRotateByK(rotK,5,2);
    cout << "\nLeft Rotate by 2: ";
    for(int i=0;i<5;i++) cout<<rotK[i]<<" ";

    cout << "\n\n================================================================\n";
    return 0;
}