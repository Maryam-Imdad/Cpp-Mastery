#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_03_01 - PRACTICE POINTER & ARRAY (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Prove arr == &arr[0]
    cout << "Q1: arr == &arr[0]\n";
    int arr[3] = {10, 20, 30}; // Array init
    cout << "arr = " << arr << "\n"; // Address of first element
    cout << "&arr[0] = " << &arr[0] << "\n"; // Address of first element explicitly
    if(arr == &arr[0]){ // Compare
        cout << "Both are equal\n\n";
    }

    // Q2: Access array using pointer arithmetic *(arr+i)
    cout << "Q2: Access using *(arr+i)\n";
    for(int i=0; i<3; i++){ // Loop 0 to 2
        cout << "arr[" << i << "] = " << *(arr+i) << "\n"; // arr[i] == *(arr+i)
    }
    cout << "\n";

    // Q3: Access array using variable pointer p[i]
    cout << "Q3: Using variable pointer p[i]\n";
    int *p = arr; // p points to arr[0]
    for(int i=0; i<3; i++){ // Loop
        cout << "p[" << i << "] = " << p[i] << "\n"; // p[i] == arr[i]
    }
    cout << "\n";

    // Q4: Traverse array using pointer increment p++
    cout << "Q4: Traverse using p++\n";
    int *ptr = arr; // Start at first
    for(int i=0; i<3; i++){ // 3 elements
        cout << "*ptr = " << *ptr << "\n"; // Print value at ptr
        ptr++; // Move to next element, adds 4 bytes
    }
    cout << "\n";

    // Q5: Difference between arr and p, arr++ is error
    cout << "Q5: arr is constant pointer, p is variable\n";
    cout << "int *p = arr; p++ is VALID, it moves p\n";
    int *q = arr; // Variable pointer
    q++; // Valid, now points to arr[1]
    cout << "After q++, *q = " << *q << "\n"; // 20
    cout << "arr++ is INVALID - compile error, arr is constant\n\n";

    // Q6: sizeof(arr) vs sizeof(p)
    cout << "Q6: sizeof difference\n";
    cout << "sizeof(arr) = " << sizeof(arr) << " bytes\n"; // 3 ints *4 =12
    cout << "sizeof(p) = " << sizeof(p) << " bytes (pointer size)\n"; // 8 bytes
    cout << "Number of elements using sizeof(arr)/sizeof(arr[0]) = " << sizeof(arr)/sizeof(arr[0]) << "\n\n";

    // Q7: Pointer to whole array int (*pa)[3]
    cout << "Q7: Pointer to whole array\n";
    int (*pa)[3] = &arr; // pa points to whole array of 3 ints
    cout << "pa = " << pa << "\n"; // Address of whole array
    cout << "(*pa)[0] = " << (*pa)[0] << "\n"; // Dereference to get array then [0]
    cout << "(*pa)[1] = " << (*pa)[1] << "\n\n";

    // Q8: Sum array using pointer
    cout << "Q8: Sum array using pointer\n";
    int sum = 0; // Initialize sum 0
    int *sPtr = arr; // Pointer to start
    for(int i=0; i<3; i++){ // Loop
        sum = sum + *sPtr; // Add value at sPtr to sum
        sPtr++; // Move to next
    }
    cout << "Sum = " << sum << "\n\n"; // 10+20+30=60

    // Q9: Find max using pointer
    cout << "Q9: Max using pointer\n";
    int *maxPtr = arr; // Assume first is max
    int maxVal = *maxPtr; // Max value = first element
    for(int i=1; i<3; i++){ // Start from second
        if(*(arr+i) > maxVal){ // If current > max
            maxVal = *(arr+i); // Update maxVal
            maxPtr = (arr+i); // Update pointer to max
        }
    }
    cout << "Max = " << maxVal << " at address " << maxPtr << "\n\n";

    // Q10: Reverse array using two pointers
    cout << "Q10: Reverse array using two pointers\n";
    int revArr[4] = {1, 2, 3, 4}; // Array to reverse
    int *left = &revArr[0]; // Left pointer at start
    int *right = &revArr[3]; // Right pointer at end
    cout << "Before: ";
    for(int i=0; i<4; i++) cout << revArr[i] << " "; // Print before
    cout << "\n";

    while(left < right){ // While left before right
        int temp = *left; // Save left value
        *left = *right; // Left = right
        *right = temp; // Right = temp (swap)
        left++; // Move left forward
        right--; // Move right backward
    }
    cout << "After reverse: ";
    for(int i=0; i<4; i++) cout << revArr[i] << " "; // Print after
    cout << "\n";

    cout << "\n================================================================\n";
    return 0;
}