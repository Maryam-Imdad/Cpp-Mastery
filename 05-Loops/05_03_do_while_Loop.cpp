#include <iostream>
using namespace std;
/*

FILE: 05_03_do_while_Loop.cpp
TOPIC: DO-WHILE LOOP - BEGINNER TO ADVANCE THEORY


PART A: BEGINNER - What is Do-While Loop?

Definition: Do-While = Do First, Then Ask.
It will execute at least ONCE even if condition is false.
Real Life: ATM Menu - Show menu at least once, then ask to continue.
Difference: while() checks first, do-while() does first then checks.

Syntax:
do{
    body;
}while(condition);

Note: Semicolon ; after while(condition); is MANDATORY.

PART B: INTERMEDIATE - How it Works

Flow: START -> Execute Body -> Check Condition -> TRUE -> Body Again
                                          -> FALSE -> Exit
Guarantee: Runs minimum 1 time. While loop can run 0 times, but do-while cannot.

Example:
int i=10;
do{
    cout << i; // Will print 10 once even though i<=5 is false
    i++;
}while(i<=5);

PART C: ADVANCE LEVEL

Best Use Cases:
a) Menu-Driven Programs: do{show menu}while(choice!=exit)
b) Input Validation: do{ask marks}while(marks<0 || marks>100)
c) Games: do{play}while(playAgain=='y')

Common Mistakes:
1. Forgetting ; at end: }while(condition) -> Compiler error
2. Using it when while is better: If 0 execution is needed, don't use do-while

Performance: O(N) same as others. Slightly slower because it always does 1 extra check.

PART D: SCHOLAR LEVEL

Post-Test Loop: Called post-test because test is after body.
Equivalence: do{S;}while(B); is equal to { S; while(B){ S; } }

Macro Trick: In C/C++ macros, do{...}while(0) is used to make multi-line macros safe.
do-while(0) executes once and stops, used to avoid dangling if-else bugs.

Invariant & Variant: Same as while - invariant true after each iteration, variant decreases to terminate.
*/

int main(){
    cout << "=== DO-WHILE LOOP - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Runs once even if false (i=10, cond i<=5):\n";
    int i=10;
    do{
        cout << "Value i=" << i << " printed (condition was false but still ran once)\n";
        i++;
    }while(i<=5);

    cout << "\n2. Normal 1 to 5:\n";
    int j=1;
    do{
        cout << j << " "; j++;
    }while(j<=5);

    cout << "\n\n3. Even 2 to 20:\n";
    int k=2;
    do{
        cout << k << " "; k+=2;
    }while(k<=20);

    cout << "\n\n=== Theory File Executed Successfully ===\n";
    return 0;
}