#include <iostream>
using namespace std;
/*

FILE: 06_03_02_Call_By_Reference.cpp
TOPIC: CALL BY REFERENCE


PART A: BEGINNER - What is Call by Reference?

Definition: Same variable, new name (alias). Original WILL change.
Syntax: void fun(int &x)  // & = reference symbol

Real Life: One person, two names.
Ali is called Munna at home. If you tell Munna to get haircut,
Ali gets haircut. Because Munna and Ali are same person.

Example:
int a = 10;
int &x = a; // x is another name of a. Same memory.

PART B: INTERMEDIATE - How it Works?

Memory Flow:
1. int main() has a=10 at address 1000
2. fun(int &x) does NOT create new variable.
3. x is just another name pointing to same address 1000
4. x=100 changes address 1000, so a also becomes 100

Swap SUCCESS:
void swap(int &a, int &b){
  int temp = a; a = b; b = temp;
}
This swaps originals because a and b are references to main() variables.

When to Use?
- When you WANT to change original
- For big objects (no copy, fast)
- For returning multiple values

PART C: ADVANCE

No new memory. Reference must be initialized: int &x = a; is must.
Reference cannot be null. Cannot change to point to other variable later.
Difference from Pointer: Reference is safer, auto-dereferenced.

Stack: No new frame for copy. Just alias entry in symbol table.

PART D: SCHOLAR

Interview Point: This is C++ feature, not in C.
Why C++ added? To support operator overloading and pass by reference easily
without * syntax.
Reference is 90% better than pointer for changing original.
*/

// Example 1: Reference changes original
void tryToChange(int &x){
    x = 100;
    cout << "Inside function, x = " << x << endl;
}

// Example 2: Swap by Reference - SUCCESS (Most Important)
void swapByReference(int &a, int &b){
    cout << "Inside swap - Before: a=" << a << " b=" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap - After: a=" << a << " b=" << b << endl;
}

// Example 3: Increment by Reference
void increment(int &n){
    n++;
}

int main(){
    cout << "================================================================\n";
    cout << "06_03_02 - CALL BY REFERENCE - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: tryToChange() with &\n";
    int num = 10;
    cout << "Before call, num = " << num << endl;
    tryToChange(num);
    cout << "After call, num = " << num << " (CHANGED!)" << endl;
    cout << "\n";

    cout << "Example 2: swapByReference() - SUCCESS\n";
    int p = 5, q = 15;
    cout << "Before swap call, p=" << p << " q=" << q << endl;
    swapByReference(p, q);
    cout << "After swap call, p=" << p << " q=" << q << " (Swapped!)" << endl;
    cout << "Proof: Call by Reference CAN change original.\n\n";

    cout << "Example 3: increment() by Reference\n";
    int m = 6;
    cout << "Before, m = " << m << endl;
    increment(m);
    increment(m);
    cout << "After 2 increments, m = " << m << " (Changed to 8)" << endl;

    cout << "\n================================================================\n";
    cout << "Key Point: & = Alias. Same memory, new name. Original CHANGES.\n";
    cout << "================================================================\n";
    return 0;
}