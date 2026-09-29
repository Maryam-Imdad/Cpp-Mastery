#include <iostream>
using namespace std;
/*

FILE: 06_03_01_Call_By_Value.cpp
TOPIC: CALL BY VALUE


PART A: BEGINNER - What is Call by Value?

Definition: Value is copied. Original remains safe.
Syntax: void fun(int x)  // normal parameter

Real Life: Photocopy of document.
You give photocopy to friend. Friend writes on it.
Your original document is still clean and safe.

Example:
int a = 10;
fun(a); // a's VALUE (10) is copied to x, not a itself.

PART B: INTERMEDIATE - How it Works?

Memory Flow:
1. int main() has variable a=10 at address 1000
2. fun(int x) creates NEW variable x at address 2000
3. x = 10 (copy)
4. Inside fun, x = 100 changes x at 2000, not a at 1000

Swap Fails:
void swap(int a, int b){
   int temp = a; a = b; b = temp;
}
This swaps copies, not originals. So original main() variables
never swap. This proves Value is safe but useless for modifying.

When to Use?
- When you DON'T want to change original
- For small data types (int, char)
- Default behavior in C++

PART C: ADVANCE

Cost: Copying takes time + memory.
If you pass big object like array struct with 10000 ints,
copying 10000 ints is expensive. So for big objects we use Reference.

Stack: Each call creates new frame. Frame has its own copy.
After return, frame destroyed.

PART D: SCHOLAR

Why default is Value?
Safety principle. Function should not accidentally damage caller's data.
Pure functions use Value to avoid side effects.

Interview Point: Call by Value is always safe but swap program fails with it.
*/

// Example 1: Value does not change original
void tryToChange(int x){
    x = 100;
    cout << "Inside function, x = " << x << endl;
}

// Example 2: Swap by Value - FAILS (Important Example)
void swapByValue(int a, int b){
    cout << "Inside swap - Before: a=" << a << " b=" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap - After: a=" << a << " b=" << b << endl;
}

// Example 3: Square by Value - Safe
int squareByValue(int n){
    n = n * n;
    return n;
}

int main(){
    cout << "================================================================\n";
    cout << "06_03_01 - CALL BY VALUE - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: tryToChange()\n";
    int num = 10;
    cout << "Before call, num = " << num << endl;
    tryToChange(num);
    cout << "After call, num = " << num << " (Unchanged - Safe!)" << endl;
    cout << "\n";

    cout << "Example 2: swapByValue() - It FAILS\n";
    int p = 5, q = 15;
    cout << "Before swap call, p=" << p << " q=" << q << endl;
    swapByValue(p, q);
    cout << "After swap call, p=" << p << " q=" << q << " (Not Swapped!)" << endl;
    cout << "Proof: Call by Value cannot change original.\n\n";

    cout << "Example 3: squareByValue(6)\n";
    int m = 6;
    cout << "Original m = " << m << endl;
    int sq = squareByValue(m);
    cout << "Square = " << sq << endl;
    cout << "After call, m = " << m << " (Still safe)" << endl;

    cout << "\n================================================================\n";
    cout << "Key Point: Copy is passed. Original is SAFE.\n";
    cout << "================================================================\n";
    return 0;
}