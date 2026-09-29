#include <iostream>
using namespace std;
/*

FILE: 05_02_while_Loop.cpp
TOPIC: WHILE LOOP - BEGINNER TO ADVANCE THEORY


PART A: BEGINNER - What is While Loop?

Definition: Loop means to repeat.
While loop is used when you DON'T KNOW how many times to repeat.
Real Life: Keep filling the tank UNTIL it is full. You don't know the exact count.
Difference: For Loop = Known Count, While Loop = Unknown Count.

Syntax:
initialization;
while(condition){
    body;
    update;
}

PART B: INTERMEDIATE - How it Works

Execution Flow:
1. Initialization happens OUTSIDE loop
2. Condition is checked
3. If TRUE -> Execute Body -> Update -> Check Again
4. If FALSE -> Exit Loop
Important: While loop can run 0 times if condition is false at start.

PART C: ADVANCE LEVEL

Common Uses:
a) Input Validation: while(pin!= correct_pin)
b) File Reading: while(file >> data)
c) Game Loop: while(gameIsRunning)
d) Infinite Loop for OS: while(true)

Common Mistakes:
1. Forgetting update i++ -> Infinite loop, program hangs
2. Using assignment = instead of == : while(i=5) is always true

Performance: Time Complexity O(N) same as for loop.

PART D: SCHOLAR LEVEL

Invariant: A condition that remains true before and after each iteration.
Variant: A value that strictly decreases to guarantee termination.
Example: In counting digits, variant = remaining number which decreases by /10.

Theorem: While is the ONLY loop you need. Dijkstra proved all for loops can be converted to while.
C++20 Feature: while(int x = getData(); x > 0) -> initialization inside while.

Equivalence: for(A;B;C){D} is equal to { A; while(B){D; C;} }
*/

int main(){
    cout << "=== WHILE LOOP - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Simple 1 to 5:\n";
    int i=1;
    while(i<=5){ cout << i << " "; i++; }

    cout << "\n\n2. Reverse 10 to 1:\n";
    int j=10;
    while(j>=1){ cout << j << " "; j--; }

    cout << "\n\n3. Even 2 to 20:\n";
    int k=2;
    while(k<=20){ cout << k << " "; k+=2; }

    cout << "\n\n=== Theory File Executed Successfully ===\n";
    return 0;
}