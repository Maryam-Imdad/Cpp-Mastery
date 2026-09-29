#include <iostream>
using namespace std;
/*

PROJECT: Dynamic Array Manager - Manual like vector
Features: Create, Insert, Delete, Display using pointers only

*/

int main(){
    cout << "================================================================\n";
    cout << "09_06_00 - MINI PROJECT: DYNAMIC ARRAY MANAGER\n";
    cout << "================================================================\n\n";

    int size = 5; // Initial size
    int *arr = new int[size]; // Allocate array of 5 in heap

    cout << "Step 1: Initialize dynamic array of size " << size << "\n";
    for(int i=0; i<size; i++){ // Initialize
        arr[i] = (i+1)*10; // Values 10,20,30,40,50
    }
    cout << "Array: ";
    for(int i=0; i<size; i++) cout << arr[i] << " "; // Print
    cout << "\n\n";

    // Insert element at position (manual resize)
    cout << "Step 2: Insert 25 at index 2 (3rd position)\n";
    int newSize = size + 1; // New size 6
    int *newArr = new int[newSize]; // Allocate bigger array

    int insertPos = 2; // Position to insert
    int insertVal = 25; // Value to insert

    for(int i=0; i<insertPos; i++){ // Copy elements before pos
        newArr[i] = arr[i]; // Copy 0,1
    }
    newArr[insertPos] = insertVal; // Insert new value at pos
    for(int i=insertPos; i<size; i++){ // Copy remaining after pos
        newArr[i+1] = arr[i]; // Shift by 1
    }

    delete[] arr; // Delete old array to avoid leak
    arr = newArr; // Point arr to new array
    size = newSize; // Update size

    cout << "After insert: ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Delete element at position
    cout << "Step 3: Delete element at index 3\n";
    int deletePos = 3; // Position to delete
    newSize = size - 1; // New size smaller
    newArr = new int[newSize]; // Allocate smaller array

    for(int i=0; i<deletePos; i++){ // Copy before delete pos
        newArr[i] = arr[i];
    }
    for(int i=deletePos+1; i<size; i++){ // Copy after delete pos
        newArr[i-1] = arr[i]; // Shift back by 1
    }

    delete[] arr; // Delete old bigger array
    arr = newArr; // Point to smaller array
    size = newSize; // Update size

    cout << "After delete: ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Search using pointer arithmetic
    cout << "Step 4: Search 40 using pointer\n";
    int *searchPtr = arr; // Start pointer
    bool found = false; // Flag
    for(int i=0; i<size; i++){
        if(*(searchPtr+i) == 40){ // Check using pointer arithmetic
            cout << "Found 40 at index " << i << " via pointer\n";
            found = true;
            break;
        }
    }
    if(!found) cout << "Not found\n";

    // Clean up
    delete[] arr; // Free final array
    cout << "\nCleaned up heap memory with delete[]\n";

    cout << "\n================================================================\n";
    cout << "PROJECT DONE - Dynamic Array like Vector manually\n";
    cout << "================================================================\n";
    return 0;
}