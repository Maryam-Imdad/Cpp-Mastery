#include <iostream>
using namespace std;
/*

FILE: 09_01_00_Pointer_Basics.cpp
TOPIC: Introduction to Pointers


PART A: BEGINNER - What is Pointer?

Pointer is a variable that stores ADDRESS of another variable.
Normal variable stores value. Pointer stores address.

int a = 10; // a stores 10
int *p = &a; // p stores address of a

& = Address operator (gives address)
* = Dereference operator (gives value at address)
* is used in 2 ways:
    1. Declaration: int *p means p is pointer
    2. Dereference: *p means value at p

PART B: INTERMEDIATE - How it works

int a = 10;
Memory: Address 1000 holds value 10
p = &a => p = 1000
*p = 10 => value at address 1000

Size: Pointer size is 8 bytes in 64-bit, 4 bytes in 32-bit, regardless of type.

PART C: ADVANCE - Why pointers?

1. Dynamic memory allocation
2. Pass by reference
3. Arrays and strings implementation
4. Data structures (Linked List, Tree)
5. Memory efficient

Null Pointer: int *p = nullptr; means points to nothing. Good practice to init.

PART D: SCHOLAR - Interview

Q: What is pointer to pointer?
Ans: Stores address of pointer. int **pp = &p;

Q: Dangling pointer?
Ans: Pointer pointing to freed memory.

Q: Wild pointer?
Ans: Uninitialized pointer pointing to random location.
*/

int main(){
    cout << "================================================================\n";
    cout << "09_01_00 - POINTER BASICS\n";
    cout << "================================================================\n\n";

    int a = 10; // Normal variable with value 10
    int *p = &a; // Pointer p stores address of a

    cout << "Value of a: " << a << "\n"; // Direct value
    cout << "Address of a: " << &a << "\n"; // Address using &
    cout << "Value of p (address of a): " << p << "\n"; // p holds address
    cout << "Value at p (*p): " << *p << "\n"; // Dereference gives value at address
    cout << "Address of p: " << &p << "\n\n"; // Address of pointer itself

    // Changing value using pointer
    *p = 20; // Change value at address p
    cout << "After *p=20, a = " << a << "\n"; // a changed because p points to a

    // Null pointer
    int *nullPtr = nullptr; // Init with nullptr
    cout << "Null pointer: " << nullPtr << " (points to nothing)\n";

    cout << "\n================================================================\n";
    return 0;
}