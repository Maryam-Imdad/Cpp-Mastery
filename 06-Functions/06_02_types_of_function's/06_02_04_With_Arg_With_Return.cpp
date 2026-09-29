#include <iostream>
using namespace std;
/*

FILE: 06_02_04_With_Arg_With_Return.cpp
TOPIC: TYPE 4 - With Argument, With Return (MOST USED)


PART A: BEGINNER - What is it?

Definition: Takes input AND returns output.
Syntax:
returnType functionName(Type arg){
    return value;
}

Example: int add(int a, int b){ return a+b; }

Real Life: Calculator.
You give 2 numbers (arg), it gives you result (return).
This is the real mathematical function: f(x) = x*x

PART B: INTERMEDIATE - How it Works?

Call: int ans = add(10,20);
Flow:
1. 10,20 copied to a,b
2. a+b = 30 calculated
3. 30 returned
4. 30 stored in ans

When to Use?
Almost ALWAYS.
- Any calculation
- Any logic that needs input and gives result
- Reusable formulas

This is the best type for modular code.

PART C: ADVANCE

Memory: Stack frame has parameters + return slot.
Return value is moved via register.
Chaining possible: add(square(2), cube(3))
Because square(2) returns int, that int becomes argument for add().

Advantage:
- Reusable: add(2,3) can be used anywhere
- Testable: You can test return value
- No side effect: Pure function if no global use

PART D: SCHOLAR

Why 90% code is Type 4?
Because it follows Black Box model: Input -> Process -> Output
No hidden dependency.
It is thread-safe if pure.

Comparison:
Type 1: Do something (Procedure)
Type 4: Calculate something (Function) - Best practice
*/

// Example 1: Add Two Numbers
int add(int a, int b){
    int sum = a + b;
    return sum;
}

// Example 2: Square
int square(int n){
    int result = n * n;
    return result;
}

// Example 3: Find Max
int findMax(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

// Example 4: Power
int power(int base, int exp){
    int p = 1;
    for(int i = 0; i < exp; i++){
        p = p * base;
    }
    return p;
}

int main(){
    cout << "================================================================\n";
    cout << "TYPE 4: With Arg, With Return - THEORY DEMO (MOST IMPORTANT)\n";
    cout << "================================================================\n\n";

    cout << "Example 1: add(15,25)\n";
    int sum = add(15, 25);
    cout << "Result = " << sum << "\n\n";

    cout << "Example 2: square(9)\n";
    cout << "Result = " << square(9) << "\n\n";

    cout << "Example 3: findMax(42, 27)\n";
    cout << "Max = " << findMax(42, 27) << "\n\n";

    cout << "Example 4: power(2,5) -> 2^5\n";
    cout << "Result = " << power(2, 5) << "\n\n";

    cout << "Example 5: Chaining - add(square(3), square(4))\n";
    int chain = add(square(3), square(4));
    cout << "Result = 9 + 16 = " << chain << "\n";

    cout << "\n================================================================\n";
    cout << "Key Point: Takes SOMETHING, Returns SOMETHING - Best Type.\n";
    cout << "================================================================\n";
    return 0;
}