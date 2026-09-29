#include <iostream>
using namespace std;
/*

FILE: 06_02_02_No_Arg_With_Return.cpp
TOPIC: TYPE 2 - No Argument, With Return


PART A: BEGINNER - What is it?

Definition: Function takes nothing, but returns something.
Syntax:
returnType functionName(){
    return value;
}

Example: int getNumber(){ return 100; }

Real Life: ATM Machine with fixed amount.
You press button (no input), it gives you 5000 cash (return).

PART B: INTERMEDIATE - How it Works?

Call: int x = getNumber();
Flow: main() calls getNumber() -> executes -> return 100 -> 100 goes to x

Key Point: Must have return type, not void.
If returnType is int, you must return int value.
If you forget return, you get garbage value / UB.

When to Use?
When you need to generate or fetch something without needing input.
- getRandomNumber()
- getCurrentYear()
- getPiValue()
- getUserInputInsideFunction()

PART C: ADVANCE

Memory: Stack frame created. No parameters, but has return value slot.
Return value is copied to calling function via CPU register (RAX/EAX).

This type often uses internal variables or global data.
Example: It can read from file or generate data internally.

PART D: SCHOLAR

Pure Function? No, often impure because it generates data without input.
But useful for abstraction: Caller does not need to know HOW value is made.
Encapsulation: Hides logic of value creation.

Difference from Type 1: Type 1 does work silently. Type 2 brings result back.
*/

// Example 1: Return Fixed Number
int getFixedNumber(){
    int num = 100;
    return num;
}

// Example 2: Return Pi Value
float getPi(){
    return 3.14f;
}

// Example 3: Return Sum of 1 to 10 - Calculates internally
int getSumOfFirst10(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum = sum + i;
    }
    return sum;
}

// Example 4: Return Character
char getGrade(){
    return 'A';
}

int main(){
    cout << "================================================================\n";
    cout << "TYPE 2: No Arg, With Return - THEORY DEMO\n";
    cout << "================================================================\n\n";

    cout << "Example 1: getFixedNumber()\n";
    int n1 = getFixedNumber();
    cout << "Returned Value = " << n1 << "\n\n";

    cout << "Example 2: getPi()\n";
    float pi = getPi();
    cout << "Returned Pi = " << pi << "\n\n";

    cout << "Example 3: getSumOfFirst10()\n";
    int sum = getSumOfFirst10();
    cout << "Sum 1 to 10 = " << sum << "\n\n";

    cout << "Example 4: getGrade()\n";
    char g = getGrade();
    cout << "Grade = " << g << "\n";

    cout << "\n================================================================\n";
    cout << "Key Point: Takes NOTHING, but Returns SOMETHING.\n";
    cout << "================================================================\n";
    return 0;
}