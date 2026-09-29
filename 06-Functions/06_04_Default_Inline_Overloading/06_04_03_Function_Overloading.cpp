#include <iostream>
using namespace std;
/*

FILE: 06_04_03_Function_Overloading.cpp
TOPIC: FUNCTION OVERLOADING


PART A: BEGINNER - What is Overloading?

Definition: Same function name, different parameters.
C++ decides which to call based on arguments you pass.

Syntax:
int add(int a, int b)
float add(float a, float b)
int add(int a, int b, int c)

Call:
add(2,3) -> int version
add(2.5f,3.5f) -> float version
add(1,2,3) -> 3 arg version

Real Life: Same name "Print" -> Print Paper, Print Photo, Print T-shirt.
Same action, different material.

PART B: INTERMEDIATE - How it Works?

Rule: Overloading based on:
1. Number of args: add(a,b) vs add(a,b,c) -> OK
2. Type of args: add(int,int) vs add(float,float) -> OK
NOT based on return type alone: int add() vs float add() -> ERROR if args same

Name Mangling: Compiler internally makes different names:
add_int_int, add_float_float etc. So no conflict.

When to Use?
To make code clean. One name for similar work.

PART C: ADVANCE

Resolution Order:
1. Exact Match: add(2,3) -> int exact
2. Promotion: char -> int, float -> double
3. Standard Conversion: int -> float
4. User Defined

If 2 versions equally good -> Ambiguous Error.

PART D: SCHOLAR - Interview

Q: What is Compile-time Polymorphism?
A: Overloading. Decision at compile time which function to call.

Q: Can we overload by return type only?
A: No. Must differ in number or type of args.

Q: Default + Overloading ambiguity?
void fun(int a, int b=10)
void fun(int a) -> if call fun(5), compiler confused: which fun?
-> Ambiguity error.
*/

int add(int a, int b){
    cout << "[int, int] ";
    return a + b;
}

float add(float a, float b){
    cout << "[float, float] ";
    return a + b;
}

int add(int a, int b, int c){
    cout << "[int, int, int] ";
    return a + b + c;
}

double add(double a, int b){
    cout << "[double, int] ";
    return a + b;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_03 - FUNCTION OVERLOADING - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: add(2,3)\n";
    cout << "Result: " << add(2,3) << "\n\n";

    cout << "Example 2: add(2.5f, 3.5f)\n";
    cout << "Result: " << add(2.5f, 3.5f) << "\n\n";

    cout << "Example 3: add(1,2,3)\n";
    cout << "Result: " << add(1,2,3) << "\n\n";

    cout << "Example 4: add(5.5, 2)\n";
    cout << "Result: " << add(5.5, 2) << "\n\n";

    cout << "Example 5: Overloading with same name but diff jobs\n";
    cout << "Same name add, 4 versions, compiler auto picks correct.\n";

    cout << "\n================================================================\n";
    cout << "Key: Same name, diff signature (count or type). Return alone not enough.\n";
    cout << "This is Compile-Time Polymorphism.\n";
    cout << "06_04 FOLDER COMPLETE - 7 Files!\n";
    cout << "================================================================\n";
    return 0;
}