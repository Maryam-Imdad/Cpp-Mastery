#include <iostream>
using namespace std;
/*

FILE: 07_03_00_Traversal_Search_Insert_Delete.cpp
TOPIC: Core Array Operations


PART A: BEGINNER - 4 Main Operations

1. Traversal: Visit every element (using for loop)
   for(i=0;i<n;i++) cout<<arr[i];

2. Searching: Find element
   - Linear Search: Check one by one O(n)
   - Binary Search: Only for sorted array O(log n)

3. Insertion: Add element
   - At end: arr[n]=value; n++;
   - At position: Shift elements to right

4. Deletion: Remove element
   - Shift elements to left to fill gap

PART B: INTERMEDIATE - Insertion & Deletion Logic

Insertion at pos:
  for(i=n; i>pos; i--) arr[i]=arr[i-1];
  arr[pos]=value; n++;

Deletion at pos:
  for(i=pos; i<n-1; i++) arr[i]=arr[i+1];
  n--;

PART C: ADVANCE - Time Complexity

Traversal O(n)
Linear Search O(n)
Insertion: O(n) worst (insert at start), O(1) best (at end)
Deletion: O(n) worst, O(1) best
Binary Search O(log n) but needs sorted array

Array size is fixed, so insertion may fail if full. Use vector for dynamic.

PART D: SCHOLAR - Interview

Q: Why insertion/deletion is costly in array?
Ans: Because we need to shift elements. Linked List is O(1) for insertion if we have pointer.

Q: Linear vs Binary Search when to use?
Ans: Linear works on unsorted, Binary only on sorted but faster.
*/

// Function to traverse and print
void traverse(int arr[], int n){
    // Loop through all elements
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function for Linear Search
int linearSearch(int arr[], int n, int key){
    // Check each element one by one
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

// Function to insert at position
int insertAt(int arr[], int n, int pos, int value, int capacity){
    // Check if array is full
    if(n >= capacity){
        cout << "Array full!\n";
        return n;
    }
    // Shift elements to the right from pos
    for(int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value; // Insert new value
    return n + 1; // New size
}

// Function to delete from position
int deleteAt(int arr[], int n, int pos){
    // Check invalid position
    if(pos < 0 || pos >= n){
        cout << "Invalid position!\n";
        return n;
    }
    // Shift elements to the left
    for(int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    return n - 1; // New size
}

int main(){
    cout << "================================================================\n";
    cout << "07_03_00 - ARRAY OPERATIONS\n";
    cout << "================================================================\n\n";

    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int capacity = 10;

    cout << "Initial array: ";
    traverse(arr, n);

    // Search example
    int key = 30;
    int idx = linearSearch(arr, n, key);
    cout << "Search " << key << " found at index: " << idx << "\n\n";

    // Insertion example
    cout << "Insert 99 at position 2\n";
    n = insertAt(arr, n, 2, 99, capacity);
    cout << "After insertion: ";
    traverse(arr, n);

    // Deletion example
    cout << "Delete from position 1\n";
    n = deleteAt(arr, n, 1);
    cout << "After deletion: ";
    traverse(arr, n);

    cout << "\n================================================================\n";
    return 0;
}