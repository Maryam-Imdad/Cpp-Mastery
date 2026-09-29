#include <iostream>
using namespace std;
/*

FILE: 06_02_01_No_Arg_No_Return.cpp
TOPIC: TYPE 1 - No Argument, No Return


PART A: BEGINNER - What is it?

Definition: Function that takes nothing and returns nothing.
Syntax: void functionName(){ // body }

void = No return
() empty = No argument

Real Life: Like a self-working robot.
Press button -> It does dance -> No input needed, no result needed.
Example: printMenu(), greet(), showTime().

PART B: INTERMEDIATE - How it Works?

1. Declaration: void greet();
2. Definition: void greet(){ cout << "Hello"; }
3. Call: greet();

Flow: main() -> calls greet() -> executes -> returns to main() (without value)
Control comes back but no data comes back.

When to Use?
When you just want to do some work, not calculate something to return.
- Printing pattern
- Showing menu
- Displaying welcome message

PART C: ADVANCE

Memory: Creates Stack Frame with no parameters.
No return value, so no value stored in RAX register.
Even without return statement, compiler adds implicit return.

Limitation: Not reusable for calculations, because it gives no result back.
For calculation we need Type 4.

PART D: SCHOLAR

Why void?
void means complete work and die silently. No output channel.
Best for procedures, not functions in math sense.
In C, void fun() and void fun(void) are different. In C++ both are same.
*/

// Example 1: Simple Greeting
void greet(){
    cout << "Hello! Welcome to Type 1 Functions." << endl;
}

// Example 2: Print Line
void printLine(){
    cout << "-----------------------------------" << endl;
}

// Example 3: Show Menu - Real Use Case
void showMenu(){
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Exit" << endl;
}

// Example 4: Pattern - No input needed for fixed pattern
void printStars(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    cout << "================================================================\n";
    cout << "TYPE 1: No Argument, No Return - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Calling greet():\n";
    greet();
    printLine();

    cout << "\nCalling showMenu():\n";
    showMenu();
    printLine();

    cout << "\nCalling printStars():\n";
    printStars();

    cout << "\n================================================================\n";
    cout << "Key Point: All these take NOTHING and return NOTHING.\n";
    cout << "================================================================\n";
    return 0;
}