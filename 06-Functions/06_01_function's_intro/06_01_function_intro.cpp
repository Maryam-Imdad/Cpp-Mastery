#include <iostream>
using namespace std;
/*

FILE: 06_01_function_intro.cpp
TOPIC: FUNCTION INTRODUCTION - BEGINNER TO ADVANCE


PART A: BEGINNER - What is Function?

Definition: Function is a block of code that performs a specific task.
Write once, use many times. It helps to avoid code repetition.
Real Life: TV Remote - One button one function. Press power(), tv on.

Syntax:
returnType functionName(parameters){
    // body
    return value;
}

Example:
int add(int a, int b){
    return a+b;
}

PART B: INTERMEDIATE - How it Works?

3 Steps:
1. Declaration / Prototype: Tell compiler function exists. int add(int,int);
2. Definition: Actual body of function.
3. Call: Use the function. add(5,10);

Flow: main() calls add() -> Control jumps to add() -> Executes -> Returns value -> Back to main().

Types by Source:
- Library Functions: Already built-in like pow(), sqrt(), cout
- User-defined: Created by you like add(), greet()

PART C: ADVANCE LEVEL

Memory: Function code lives in Code Segment. When called, a Stack Frame is created.
It contains parameters, local variables, return address.
After return, stack frame is deleted.

Why use Functions?
a) Reusability: One time writing, many time use
b) Readability: Clean code, divided into parts
c) Debugging: Easy to find bug in small function
d) Modularity: Team can work on different functions

PART D: SCHOLAR LEVEL

Stack: LIFO. If main() calls f1() calls f2(), stack = main->f1->f2. Returns in reverse.
Inline Function: inline int add(){...} - Compiler copies body at call place to save jump time.
Void: No return value. Non-void must return, otherwise Undefined Behavior.
Function Signature: Name + Parameters. Return type not part of signature for overloading.
*/

void greet(){
    cout << "Hello! Welcome to Functions." << endl;
}

int add(int a, int b){
    return a+b;
}

int square(int n){
    return n*n;
}

int getNumber(){
    return 100;
}

int main(){
    cout << "=== FUNCTION INTRO - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Void Function - No return value:\n";
    greet();

    cout << "\n2. Function with Parameters & Return - add(10,20):\n";
    cout << "Result = " << add(10,20) << endl;

    cout << "\n3. Reusability Demo - square() used 3 times:\n";
    cout << "square(2) = " << square(2) << endl;
    cout << "square(5) = " << square(5) << endl;
    cout << "square(9) = " << square(9) << endl;

    cout << "\n4. Function with Return but No Parameter - getNumber():\n";
    cout << "Number = " << getNumber() << endl;

    cout << "\n=== Theory File Executed Successfully ===\n";
    return 0;
}