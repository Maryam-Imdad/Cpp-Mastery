#include <iostream>
using namespace std;
/*

FILE: 06_04_02_Inline_Functions.cpp
TOPIC: INLINE FUNCTIONS


PART A: BEGINNER - What is Inline?

Definition: Request compiler to copy function code where it is called.
No jump to function, no stack frame. Fast.

Normal Function:
main() -> jump to square() -> execute -> return -> main()
-> overhead of push/pop stack.

Inline Function:
main() has square code directly copied inside. No jump.

Syntax: inline int square(int x){ return x*x; }

Real Life: If teacher says formula 10 times in class, you write it in
your own copy 10 times instead of going to staff room each time to ask.

PART B: INTERMEDIATE - When to use?

Use for SMALL functions: 1-3 lines. Getter, Setter, square, cube, max.

Don't use for BIG functions: Loops, recursion, large code.
Because code bloat: Every call copies full code, EXE size grows.

Inline is REQUEST not ORDER:
Compiler may ignore if function is big, has loop, recursion, static variable.

Example:
inline int add(int a, int b){ return a+b; } // Perfect inline

PART C: ADVANCE

Advantage: Speed. No function call overhead. Saves time.
Disadvantage: Size. If inline function is called 1000 times, its code
copied 1000 times. EXE becomes big.

Stack: Normal function creates new stack frame. Inline does NOT.
So inline is inside caller frame only.

vs Macro:
#define SQUARE(x) x*x  // macro is text replacement, no type check, unsafe
inline int square(int x){return x*x;} // type safe, has types

PART D: SCHOLAR - Interview

Q: What is inline?
A: Suggestion to compiler to expand code inline.

Q: Will inline always be inline?
A: No. Compiler decision. Modern compilers are smart, they auto inline
small functions even without inline keyword. And ignore inline if big.

Q: Inline vs Normal?
Normal = Call + Execute + Return (slow but small code)
Inline = Direct paste (fast but bigger code)

For OOP: Class methods defined inside class are auto inline.
*/

// Small functions perfect for inline
inline int square(int x){
    return x * x;
}

inline int cube(int x){
    return x * x * x;
}

inline int add(int a, int b){
    return a + b;
}

inline int getMax(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_02 - INLINE FUNCTIONS - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: square(5)\n";
    cout << "Result: " << square(5) << " (code pasted here, no jump)\n\n";

    cout << "Example 2: cube(3)\n";
    cout << "Result: " << cube(3) << "\n\n";

    cout << "Example 3: add(10,20)\n";
    cout << "Result: " << add(10,20) << "\n\n";

    cout << "Example 4: getMax(45,12)\n";
    cout << "Result: Max = " << getMax(45,12) << "\n\n";

    cout << "Example 5: Using inline 3 times - compiler pastes 3 times\n";
    cout << "square(2)=" << square(2) << " square(3)=" << square(3) << " square(4)=" << square(4) << "\n";

    cout << "\n================================================================\n";
    cout << "Key: inline = Fast. Use for small 1-2 line functions.\n";
    cout << "Compiler may ignore if big. Class inside methods auto inline.\n";
    cout << "================================================================\n";
    return 0;
}