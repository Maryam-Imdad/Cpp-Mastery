#include <iostream>
using namespace std;
/*

FILE: 09_02_00_Dereference_Arithmetic.cpp
TOPIC: Pointer Dereference & Arithmetic


PART A: BEGINNER - 4 Operations

1. Dereference: *p gives value at address
2. Increment: p++ moves to next element address (not +1 byte, but +sizeof(type))
3. Decrement: p-- moves back
4. Addition: p+2 moves 2 elements ahead

int *p: p+1 = p + 4 bytes (if int 4 bytes)
char *p: p+1 = p + 1 byte

PART B: INTERMEDIATE - Logic

int arr[3] = {10,20,30};
int *p = arr; // p points to arr[0]

p -> 10
p+1 -> 20 (adds 4 bytes)
p+2 -> 30

*p++ = value then move pointer
*(p+1) = value at next position without moving pointer

PART C: ADVANCE - Complexity

Pointer arithmetic O(1)
Dereference O(1)
void* cannot do arithmetic because size unknown.

PART D: SCHOLAR - Interview

Q: Why p++ adds 4 for int?
Ans: Pointer arithmetic scales by sizeof(type). To point to next int.

Q: Difference between *p++ and (*p)++?
Ans: *p++ = dereference then increment pointer address
     (*p)++ = increment value at pointer

Q: Can we add two pointers?
Ans: No. You can subtract (p2-p1) to get distance, but not add.
*/

int main(){
    cout << "================================================================\n";
    cout << "09_02_00 - POINTER OPERATIONS\n";
    cout << "================================================================\n\n";

    int a = 10; // Variable
    int *p = &a; // Pointer to a

    cout << "Dereference:\n";
    cout << "p = " << p << "\n"; // Address
    cout << "*p = " << *p << "\n"; // Value at address
    cout << "(*p)++ increments value\n";
    (*p)++; // Increment value at p, a becomes 11
    cout << "After (*p)++, a = " << a << "\n\n";

    cout << "Arithmetic:\n";
    int arr[3] = {10, 20, 30}; // Array
    int *ptr = arr; // Pointer to first element, ptr = &arr[0]
    cout << "ptr points to arr[0]: " << *ptr << "\n"; // 10
    cout << "ptr address: " << ptr << "\n"; // Address of arr[0]

    ptr++; // Move to next int, adds 4 bytes internally
    cout << "After ptr++, points to: " << *ptr << "\n"; // 20
    cout << "ptr address now: " << ptr << "\n"; // +4 bytes

    cout << "ptr+1 without moving ptr: " << *(ptr+1) << "\n"; // Value at next, 30 but ptr still at 20
    cout << "ptr still at: " << *ptr << "\n\n";

    cout << "Difference between *p++ and (*p)++:\n";
    int x = 5; // Variable
    int *px = &x; // Pointer
    cout << "x = " << x << "\n"; // 5
    cout << "*px++ means: value = " << *px << " then ptr moves (dangerous on single var)\n";
    // Reset
    px = &x; // Point again
    (*px)++; // Increment value
    cout << "After (*px)++, x = " << x << "\n"; // x becomes 6, pointer same

    cout << "\n================================================================\n";
    return 0;
}