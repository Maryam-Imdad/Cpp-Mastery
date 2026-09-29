#include <iostream>
using namespace std;
/*

FILE: 07_02_00_Array_Input_Output.cpp
TOPIC: Array Input Output - The Foundation


PART A: BEGINNER - Why we need loops for array?

We cannot do cin>>arr for whole array. Array has multiple boxes.
We must access each box by index: arr[0], arr[1], etc.
So we use for loop to take input and output.

Example:
for(int i=0; i<5; i++){
    cin >> arr[i]; // takes 5 values one by one
}

PART B: INTERMEDIATE - Different Input Methods

1. User Input: cin in loop
2. Direct Initialization: int arr[] = {1,2,3}
3. Partial Initialization: int arr[5] = {1,2} -> rest becomes 0
4. Taking size from user: first take n, then take n elements.

Always validate size: n should be <= array capacity.

PART C: ADVANCE - Memory & Validation

If you declare arr[5] but try to access arr[10], it is out-of-bounds.
This causes garbage value or segmentation fault.
Best practice:
- Take n as input
- Check if(n > capacity) then show error
- Use sizeof(arr)/sizeof(arr[0]) to find length of static array.

Array is stored contiguously, so cache-friendly.

PART D: SCHOLAR - Interview Questions

Q: How to find size of array?
Ans: sizeof(arr)/sizeof(arr[0]) -> only works in same scope where array is declared.
Inside function it fails because array decays to pointer.

Q: Why we pass size with array to function?
Ans: Because inside function sizeof will give pointer size (8 bytes), not array size. So we must pass length separately.

Q: What is difference between int arr[5] and int* arr?
Ans: arr[5] reserves 5*4=20 bytes. int* arr is just a pointer. But when passed to function, arr decays to pointer.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_02_00 - ARRAY INPUT OUTPUT\n";
    cout << "================================================================\n\n";

    // Example 1: Static Input Output
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Finding length

    cout << "Example 1: Static Array\n";
    cout << "Array elements are: ";
    // Loop for output
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; // Printing each index
    }
    cout << "\nLength = " << n << "\n\n";

    // Example 2: User Input Output
    cout << "Example 2: User Input Array\n";
    int size;
    cout << "Enter size (max 10): ";
    cin >> size;

    // Validation
    if(size > 10){
        cout << "Error: Size exceeds capacity!\n";
        return 0;
    }

    int userArr[10]; // Capacity 10
    cout << "Enter " << size << " elements:\n";
    // Input loop
    for(int i = 0; i < size; i++){
        cout << "Enter element [" << i << "]: ";
        cin >> userArr[i]; // Storing at index i
    }

    cout << "You entered: ";
    // Output loop
    for(int i = 0; i < size; i++){
        cout << userArr[i] << " ";
    }
    cout << "\n";

    cout << "\n================================================================\n";
    cout << "Key: Always use loop + validate size + track length\n";
    cout << "================================================================\n";
    return 0;
}