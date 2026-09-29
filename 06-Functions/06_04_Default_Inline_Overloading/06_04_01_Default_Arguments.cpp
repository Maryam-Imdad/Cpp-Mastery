#include <iostream>
using namespace std;
/*

FILE: 06_04_01_Default_Arguments.cpp
TOPIC: DEFAULT ARGUMENTS


PART A: BEGINNER - What is Default Argument?

Definition: If user does not give value, function uses default value.

Syntax: int add(int a, int b = 10)
Here b has default 10.

Call 1: add(5) -> a=5, b=10 (default used) -> 15
Call 2: add(5,20) -> a=5, b=20 (default overridden) -> 25

Real Life: Auto rickshaw default fare 100. If you go far, you pay more.
If you don't say, 100 is taken.

PART B: INTERMEDIATE - Rules & How it Works?

Rule 1: Default must be from RIGHT side.
int fun(int a, int b=10, int c=20) // OK
int fun(int a=10, int b, int c) // ERROR - left default but right not default
int fun(int a=10, int b=20, int c=30) // OK

Rule 2: Default given in declaration, not necessarily in definition if separate.
Declaration: int sum(int a, int b=10);
Definition: int sum(int a, int b){ return a+b; }

Memory: No extra memory. Compiler fills missing value at compile time.

Why use?
Avoid function overloading for simple cases. One function works for both.

PART C: ADVANCE

Default can be expression: int fun(int a, int b = a*2) // allowed? No, not in C++ 
But you can do: int fun(int a, int b = 10) and inside use a.

Multiple defaults: you can have many defaults, but once you start default,
all to the right must be default.

Ambiguity with Overloading:
void fun(int a, int b=10)
void fun(int a) // Overload conflict if called fun(5) -> ambiguous error

PART D: SCHOLAR - Interview

Q: Where does default value get assigned? At compile time by compiler.
Q: Can default be changed at runtime? No, fixed in function signature.
Q: Is default argument efficient? Yes, saves writing duplicate functions.
*/

// Example 1: One Default
int add(int a, int b = 10){
    return a + b;
}

// Example 2: Two Defaults
int sum3(int a, int b = 10, int c = 20){
    return a + b + c;
}

// Example 3: Default with different types
void greet(string name = "Guest"){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_01 - DEFAULT ARGUMENTS - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: add(a, b=10)\n";
    cout << "add(5) = " << add(5) << " (default b=10 used)\n";
    cout << "add(5,20) = " << add(5,20) << " (override)\n\n";

    cout << "Example 2: sum3(a, b=10, c=20)\n";
    cout << "sum3(1) = " << sum3(1) << " -> 1+10+20=31\n";
    cout << "sum3(1,2) = " << sum3(1,2) << " -> 1+2+20=23\n";
    cout << "sum3(1,2,3) = " << sum3(1,2,3) << " -> 1+2+3=6\n\n";

    cout << "Example 3: greet(name='Guest')\n";
    greet();
    greet("Ali");
    cout << "\n";

    cout << "Rule Demo: Default must be from right. Left default alone is error.\n";
    cout << "Correct: fun(int a, int b=10) not fun(int a=10, int b)\n";

    cout << "\n================================================================\n";
    cout << "Key: Default = Optional value given by compiler if user misses.\n";
    cout << "================================================================\n";
    return 0;
}