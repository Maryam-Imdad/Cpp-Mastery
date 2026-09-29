#include <iostream>
using namespace std;
/*

FILE: 06_03_03_Call_By_Address_Pointer.cpp
TOPIC: CALL BY ADDRESS / POINTER


PART A: BEGINNER - What is Call by Address?

Definition: We pass address, function goes to that address and changes.
Syntax:
void fun(int *x)  // * = pointer
call: fun(&a);    // & = address of a

Real Life: Home Address.
You give your home address to delivery boy. He comes to your home
and changes your fridge items. Original changes.

PART B: INTERMEDIATE - How it Works?

Memory:
int a = 10 at address 1000
fun(&a) passes 1000
int *x stores 1000
*x = 100 means go to address 1000 and put 100 there.

*x = dereference. Means value at address.

Swap by Pointer - SUCCESS:
void swap(int *a, int *b){
  int temp = *a; *a = *b; *b = temp;
}
Pass &p, &q -> swaps originals.

When to Use?
- When you want to change original (like Reference)
- When NULL is allowed (pointer can be nullptr, reference cannot)
- C language has no reference, so it uses pointer.

PART C: ADVANCE

Pointer needs 2 steps: store address, then dereference with *.
Reference is easier: auto-dereferenced.

Cost: Pointer variable itself takes memory (8 bytes) to store address.
Reference takes no extra memory (just alias).

Null Check: You can check if(x != nullptr) then use. Safe for big projects.

PART D: SCHOLAR

Reference vs Pointer?
- Reference: Must be initialized, cannot be null, cannot reassign, easy syntax.
- Pointer: Can be null, can reassign, needs * and &, powerful for dynamic memory.

Interview: Both Reference and Pointer can change original. Value cannot.
In C++ we prefer Reference. In C we must use Pointer.
*/

// Example 1: Change by Pointer
void tryToChange(int *x){
    *x = 100; // go to address and change
    cout << "Inside function, *x = " << *x << endl;
}

// Example 2: Swap by Pointer - SUCCESS
void swapByPointer(int *a, int *b){
    cout << "Inside swap - Before: *a=" << *a << " *b=" << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swap - After: *a=" << *a << " *b=" << *b << endl;
}

// Example 3: Increment by Pointer
void increment(int *n){
    (*n)++;
}

int main(){
    cout << "================================================================\n";
    cout << "06_03_03 - CALL BY ADDRESS / POINTER - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: tryToChange() with pointer\n";
    int num = 10;
    cout << "Before call, num = " << num << endl;
    tryToChange(&num); // pass address
    cout << "After call, num = " << num << " (CHANGED!)" << endl;
    cout << "\n";

    cout << "Example 2: swapByPointer() - SUCCESS\n";
    int p = 5, q = 15;
    cout << "Before swap call, p=" << p << " q=" << q << endl;
    swapByPointer(&p, &q);
    cout << "After swap call, p=" << p << " q=" << q << " (Swapped!)" << endl;
    cout << "\n";

    cout << "Example 3: increment() by Pointer\n";
    int m = 6;
    cout << "Before, m = " << m << endl;
    increment(&m);
    increment(&m);
    cout << "After 2 increments, m = " << m << " (Changed to 8)" << endl;

    cout << "\n================================================================\n";
    cout << "Key Point: Pass address with &, change with *.\n";
    cout << "Value = Copy Safe, Reference & Pointer = Original Change.\n";
    cout << "06_03 FOLDER COMPLETE!\n";
    cout << "================================================================\n";
    return 0;
}