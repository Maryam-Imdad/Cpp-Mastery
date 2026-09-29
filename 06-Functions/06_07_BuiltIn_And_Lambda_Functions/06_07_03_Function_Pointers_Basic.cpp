#include <iostream>
using namespace std;
/*

FILE: 06_07_03_Function_Pointers_Basic.cpp
TOPIC: FUNCTION POINTERS BASIC


PART A: BEGINNER - What is Function Pointer?

Pointer that points to function, not variable.
We can call function via pointer.
Allows passing function as argument to another function (callback).

Syntax: returnType (*ptrName)(paramTypes)

Example: int add(int a,int b) -> pointer: int (*p)(int,int) = add;

Call: p(2,3) or (*p)(2,3)

Real Life: Remote control - pointer is remote, function is TV. Remote can
turn on any TV if pointed.

PART B: INTERMEDIATE - Why use?

1. Callback: Pass function to another function
   Example: sort with custom comparator via function pointer

2. Strategy: Choose function at runtime

3. Array of functions

PART C: ADVANCE - Syntax details

int (*ptr)(int,int) -> pointer to function taking int,int returning int
int *ptr(int,int) -> WRONG, this is function returning int* pointer
Use brackets!

PART D: SCHOLAR - Interview

Q: What is function pointer? Pointer holding address of function.
Q: Use? Callback, passing function as param.
Q: How to call? ptr(args) or (*ptr)(args)
Q: Difference with lambda? Lambda can capture, function pointer cannot capture context.
*/

int add(int a, int b){
    return a + b;
}
int multiply(int a, int b){
    return a * b;
}

// Function taking function pointer as param
int calculate(int a, int b, int (*operation)(int,int)){
    return operation(a,b);
}

int main(){
    cout << "================================================================\n";
    cout << "06_07_03 - FUNCTION POINTERS BASIC\n";
    cout << "================================================================\n\n";

    cout << "1. Declare and Assign:\n";
    int (*ptrAdd)(int,int) = add; // ptr points to add
    cout << "ptrAdd(5,3) = " << ptrAdd(5,3) << endl;
    cout << "(*ptrAdd)(5,3) = " << (*ptrAdd)(5,3) << " (same)\n\n";

    cout << "2. Reassign pointer to multiply:\n";
    int (*ptrOp)(int,int) = multiply;
    cout << "ptrOp(5,3) = " << ptrOp(5,3) << " (now multiply)\n\n";

    cout << "3. Passing function as argument (Callback):\n";
    cout << "calculate(10,5, add) = " << calculate(10,5, add) << endl;
    cout << "calculate(10,5, multiply) = " << calculate(10,5, multiply) << endl;
    cout << "Same calculate, different behavior based on function passed!\n\n";

    cout << "4. Array of function pointers:\n";
    int (*ops[2])(int,int) = {add, multiply};
    cout << "ops[0](2,3)=" << ops[0](2,3) << " ops[1](2,3)=" << ops[1](2,3) << "\n\n";

    cout << "================================================================\n";
    cout << "Key: Function pointer = pointer to function, enables callback.\n";
    cout << "================================================================\n";
    return 0;
}