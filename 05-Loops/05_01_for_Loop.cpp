#include <iostream>
using namespace std;
/*

FILE: 05_01_for_Loop.cpp
TOPIC: FOR LOOP - BEGINNER TO ADVANCE - COMPLETE THEORY


PART A: BEGINNER - What is For Loop?

Definition: Loop means to Repeat.
For loop is used when you KNOW how many times to repeat.
Real Life: You have to write "I will learn C++" 100 times. You know count = 100.

Syntax:
for(initialization; condition; update){
    body
}

Example: for(int i=1; i<=5; i++) { cout << i; }

3 Parts:
1. int i=1 -> Initialization - Happens only ONCE at start
2. i<=5 -> Condition - Checked BEFORE every round
3. i++ -> Update - Happens AFTER every round

PART B: INTERMEDIATE - How it Works

Flowchart:
START -> Create i=1 -> Is i<=5? --YES--> Print Body -> Update i++ -> Back to Check
                         --NO--> EXIT LOOP

Memory: int i=1 reserves 4 bytes in RAM. When loop ends, i dies. That's why you can't use i outside loop.
Scope: Variable inside for() is local to the loop only.

PART C: ADVANCE LEVEL

1. Types of For Loop:
   a) Counter: for(i=1; i<=100; i++)
   b) Reverse: for(i=10; i>=1; i--)
   c) Step: for(i=2; i<=20; i+=2) -> Even numbers
   d) Char: for(char c='A'; c<='Z'; c++)
   e) Infinite: for(;;) -> Used in Operating Systems, never ends

2. Common Mistakes:
   for(i=1; i<=5; i++); -> This semicolon kills the loop
   for(i=1; i<=5; i--) -> Wrong update = Infinite loop
   for(float f=0.1; f!=1.0; f+=0.1) -> Never ends due to float precision error

3. Performance: Time O(N). If N=1000, it runs 1000 times.
   Big Mistake: for(i=0; i<strlen(s); i++) -> This is O(N^2) slow. Calculate strlen outside.

PART D: SCHOLAR LEVEL - Topper Concepts

Invariant: A condition that is TRUE before and after each iteration.
Example: In sum loop, Invariant: sum = sum of numbers from 1 to i-1

Variant: A value that strictly decreases to prove loop will terminate. V = N - i
If variant doesn't decrease, loop is infinite - Halting Problem.

Equivalence: for(A;B;C){ D } is 100% equal to { A; while(B){ D; C; } }
This is used in compiler design and formal verification.
*/

int main(){
    cout << "=== FOR LOOP - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Simple 1 to 5:\n";
    for(int i=1; i<=5; i++) cout << i << " ";

    cout << "\n\n2. Reverse 10 to 1:\n";
    for(int i=10; i>=1; i--) cout << i << " ";

    cout << "\n\n3. Even 2 to 20 (Step):\n";
    for(int i=2; i<=20; i+=2) cout << i << " ";

    cout << "\n\n4. Alphabets A-Z (Char Loop):\n";
    for(char c='A'; c<='Z'; c++) cout << c << " ";

    return 0;
}