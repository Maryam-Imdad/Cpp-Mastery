#include <iostream>
using namespace std;
/*

FILE: 06_03_00_Overview_Call_Types.cpp
TOPIC: CALL TYPES - OVERVIEW / ROADMAP FILE
ROLE: This is Intro File for 06_03 folder.


PART A: BEGINNER - Why we need Call Types?

In 06_02 we learned function takes argument.
Question: HOW it takes argument? Copy? Original?

Example: You have original document.
You can send to friend in 3 ways:
1. Photocopy -> Friend changes photocopy, original safe (Call by Value)
2. Send Original -> Friend changes original (Call by Reference)
3. Send Location/Address -> Friend goes to your house and changes (Pointer)

This folder is about these 3 ways.

PART B: INTERMEDIATE - The 3 Types Roadmap

1. Call by Value: 06_03_01
   void fun(int x) { x = 100; }
   Original safe. Copy is changed.
   Syntax: just int x

2. Call by Reference: 06_03_02
   void fun(int &x) { x = 100; }
   Original changed. Uses alias/nickname.
   Syntax: int &x  (& = reference)
   This is C++ special feature.

3. Call by Address / Pointer: 06_03_03
   void fun(int *x) { *x = 100; }
   Original changed. Uses address.
   Syntax: int *x, call with &var
   This is from C language.

PART C: ADVANCE

Memory:
Value: Creates new variable in stack. Copy cost.
Reference: No new memory, same memory with new name. Fast.
Pointer: Pointer variable stores address. Needs dereference *.

When to use what?
- Value: When you don't want to change original (Safe)
- Reference: When you want to change original + faster for big objects
- Pointer: When null allowed, or dynamic memory, or C-compatibility

PART D: SCHOLAR - Why this file?

This file is MAP. Without map, student gets confused between & and *.
We will see all 3 with same example: swapping two numbers.
- swap by Value -> FAILS
- swap by Reference -> PASSES
- swap by Pointer -> PASSES

That one example proves everything.
*/

// DEMO 1: Call by Value - Will NOT change original
void byValue(int a){
    a = 100;
    cout << "Inside byValue, a = " << a << endl;
}

// DEMO 2: Call by Reference - WILL change original
void byReference(int &a){
    a = 100;
    cout << "Inside byReference, a = " << a << endl;
}

// DEMO 3: Call by Pointer/Address - WILL change original
void byPointer(int *a){
    *a = 100; // dereference
    cout << "Inside byPointer, *a = " << *a << endl;
}

int main(){
    cout << "================================================================\n";
    cout << "06_03_00 - CALL TYPES OVERVIEW - INTRO FILE\n";
    cout << "================================================================\n\n";

    cout << "ROADMAP OF THIS FOLDER:\n";
    cout << "1. 06_03_01_Call_By_Value (Photocopy)\n";
    cout << "2. 06_03_02_Call_By_Reference (Original - C++)\n";
    cout << "3. 06_03_03_Call_By_Address_Pointer (Address - C)\n";
    cout << "----------------------------------------\n\n";

    cout << "DEMO 1: Call By Value\n";
    int x = 10;
    cout << "Before call, x = " << x << endl;
    byValue(x);
    cout << "After call, x = " << x << " (NOT changed!)" << endl;
    cout << "\n";

    cout << "DEMO 2: Call By Reference\n";
    int y = 10;
    cout << "Before call, y = " << y << endl;
    byReference(y);
    cout << "After call, y = " << y << " (CHANGED!)" << endl;
    cout << "\n";

    cout << "DEMO 3: Call By Pointer\n";
    int z = 10;
    cout << "Before call, z = " << z << endl;
    byPointer(&z); // pass address
    cout << "After call, z = " << z << " (CHANGED!)" << endl;

    cout << "\n================================================================\n";
    cout << "Key Lesson: Value = Safe Copy, Reference/Pointer = Original Change\n";
    cout << "Now open next 3 files to learn each in detail.\n";
    cout << "================================================================\n";
    return 0;
}