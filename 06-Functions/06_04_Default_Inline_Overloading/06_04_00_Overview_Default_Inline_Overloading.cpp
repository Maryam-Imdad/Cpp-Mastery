#include <iostream>
using namespace std;
/*

FILE: 06_04_00_Overview_Default_Inline_Overloading.cpp
TOPIC: OVERVIEW - Default, Inline, Overloading
ROLE: Intro file for 06_04 folder


PART A: BEGINNER - Why this folder?

We learned Types (06_02) and Call Methods (06_03).
Now we learn SMART features that make C++ powerful.

3 Smart Features:
1. Default Argument = Optional argument. You may not give value,
   function will use default value itself.
   Real Life: Tea with default sugar = 1 spoon. If you say no, you
   can say 0 or 2 spoon. Otherwise 1 spoon by default.

2. Inline Function = Fast function. Normally function call goes to
   other place in memory (stack overhead). Inline copies code directly
   where it is called. No jump. Fast.
   Real Life: Instead of calling friend to tell formula, you write
   formula on your own paper. Faster.

3. Function Overloading = Same name, different forms.
   One name add() can add 2 ints, 2 floats, 3 ints.
   C++ decides which version to call based on arguments.
   Real Life: One name "Biryani" - Chicken biryani, Mutton biryani,
   Veg biryani. Same name, different ingredients.

PART B: INTERMEDIATE - Roadmap of this folder

06_04_01_Default_Arguments.cpp
   Syntax: int sum(int a, int b = 10) { return a+b; }
   sum(5) -> 5+10=15 (uses default)
   sum(5,20) -> 5+20=25 (override)
   Rule: Default must be from RIGHT side only.

06_04_02_Inline_Functions.cpp
   Syntax: inline int square(int x){ return x*x; }
   Use for small functions (1-2 lines). Not for big loops.
   It is REQUEST to compiler, not order. Compiler can ignore.

06_04_03_Function_Overloading.cpp
   Syntax:
   int add(int a, int b)
   float add(float a, float b)
   int add(int a, int b, int c)
   Same name, different signature (type or number of args)
   Return type alone is NOT enough for overloading.

PART C: ADVANCE

Default: Saves writing many similar functions. Reduces code duplication.
Inline: No function call overhead. No stack frame. Good for getters/setters.
        But code size increases if used too much (code bloat).
Overloading: Base of Polymorphism in OOP. Compile-time polymorphism.
             Compiler does name mangling to create different internal names.

PART D: SCHOLAR - Interview Points

Default: void fun(int a=10, int b) -> ERROR. Right side default is must.
         void fun(int a, int b=10, int c=20) -> OK.

Inline vs Macro: Macro #define SQUARE(x) x*x is unsafe. Inline is type safe.

Overloading Rule:
Exact match > Promotion (char to int) > Standard conversion > User defined.
If ambiguous, compiler error: call of overloaded 'add()' is ambiguous.
*/

// 1. DEFAULT - Demo
int addDefault(int a, int b = 10){
    return a + b;
}

// 2. INLINE - Demo
inline int squareInline(int x){
    return x * x;
}

// 3. OVERLOADING - Demo
int addOver(int a, int b){
    cout << "[int add] ";
    return a + b;
}
float addOver(float a, float b){
    cout << "[float add] ";
    return a + b;
}
int addOver(int a, int b, int c){
    cout << "[3-int add] ";
    return a + b + c;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_00 - DEFAULT, INLINE, OVERLOADING - OVERVIEW\n";
    cout << "================================================================\n\n";

    cout << "1. Default Argument Demo:\n";
    cout << "   addDefault(5) = " << addDefault(5) << " (b used default 10)\n";
    cout << "   addDefault(5,20) = " << addDefault(5,20) << " (b overridden)\n\n";

    cout << "2. Inline Function Demo:\n";
    cout << "   squareInline(6) = " << squareInline(6) << " (code copied, fast)\n\n";

    cout << "3. Function Overloading Demo:\n";
    cout << "   addOver(2,3) = " << addOver(2,3) << "\n";
    cout << "   addOver(2.5f,3.5f) = " << addOver(2.5f, 3.5f) << "\n";
    cout << "   addOver(1,2,3) = " << addOver(1,2,3) << "\n";

    cout << "\n================================================================\n";
    cout << "Key: Default=Optional, Inline=Fast Copy, Overload=Same Name Diff Args\n";
    cout << "Next: Open 06_04_01_Default_Arguments.cpp in detail.\n";
    cout << "================================================================\n";
    return 0;
}