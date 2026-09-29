#include <iostream>
using namespace std;
/*

FILE: 06_02_03_With_Arg_No_Return.cpp
TOPIC: TYPE 3 - With Argument, No Return


PART A: BEGINNER - What is it?

Definition: Takes input (argument) but returns nothing.
Syntax:
void functionName(dataType arg){
    // use arg but no return
}

Real Life: Printer.
You give paper + file (argument), it prints. It gives no result back.
Example: printSquare(5), printTable(7)

PART B: INTERMEDIATE - How it Works?

Call: printSquare(5);
Flow: Value 5 is copied to parameter n.
Function uses n, prints, but returns nothing (void).

When to Use?
When you have data to process but you only want to DO something,
not calculate something to use later.
- printDetails(name, age)
- saveToFile(data)
- displayResult(score)

PART C: ADVANCE

Memory: Stack frame contains parameter copy (call by value).
No return slot.
If you pass large object, copying costs time. Use reference later.

Parameter vs Argument:
Parameter = variable in definition (int n)
Argument = value in calling (5)

PART D: SCHOLAR

This type is a Procedure. It performs side effects (I/O).
Good for SRP: Function should either DO something or ANSWER something,
not both. This type DOES something.
*/

// Example 1: Print Square
void printSquare(int n){
    int square = n * n;
    cout << "Square of " << n << " = " << square << endl;
}

// Example 2: Print Table
void printTable(int num){
    cout << "Table of " << num << ":\n";
    for(int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Example 3: Check Even/Odd and Print
void checkEvenOdd(int n){
    if(n % 2 == 0){
        cout << n << " is Even" << endl;
    }
    else{
        cout << n << " is Odd" << endl;
    }
}

// Example 4: Print Two Values
void printSum(int a, int b){
    int sum = a + b;
    cout << "Sum of " << a << " + " << b << " = " << sum << endl;
}

int main(){
    cout << "================================================================\n";
    cout << "TYPE 3: With Arg, No Return - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: printSquare(6)\n";
    printSquare(6);
    cout << "\n";

    cout << "Example 2: printTable(7)\n";
    printTable(7);
    cout << "\n";

    cout << "Example 3: checkEvenOdd(9) and checkEvenOdd(10)\n";
    checkEvenOdd(9);
    checkEvenOdd(10);
    cout << "\n";

    cout << "Example 4: printSum(15,25)\n";
    printSum(15, 25);

    cout << "\n================================================================\n";
    cout << "Key Point: Takes SOMETHING, Returns NOTHING.\n";
    cout << "================================================================\n";
    return 0;
}