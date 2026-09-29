#include <iostream>
using namespace std;
/*

FILE: 06_05_00_Overview_Recursion.cpp
TOPIC: RECURSION OVERVIEW - ROADMAP
ROLE: Intro file for 06_05 folder


PART A: BEGINNER - What is Recursion?

Definition: Function calling itself.

Normal: funA() calls funB()
Recursion: funA() calls funA() itself

Real Life: Mirror in front of mirror -> infinite mirrors.
Or: Russian Doll - inside doll, smaller doll, inside smaller etc.

Example:
void count(int n){
  if(n==0) return;
  cout << n;
  count(n-1); // function calls itself
}
count(3) -> 3 2 1

PART B: INTERMEDIATE - 2 Must Parts

Every recursion has 2 parts:
1. Base Case: Where to stop. If no base case -> infinite loop -> stack overflow
2. Recursive Case: Where it calls itself with smaller problem

Factorial Example:
5! = 5 * 4! 
4! = 4 * 3!
3! = 3 * 2!
2! = 2 * 1!
1! = 1 (BASE CASE - stop here)

Code:
int fact(int n){
  if(n==0 || n==1) return 1; // Base
  return n * fact(n-1);      // Recursive
}

PART C: ADVANCE - Memory

Each recursive call creates new stack frame.
fact(5) calls fact(4) calls fact(3) ... -> stack grows.
When base hits, returns come back one by one.

Recursion vs Iteration:
Iteration: for loop, uses 1 frame, fast, less memory.
Recursion: elegant, short code, but slow + more memory (stack).
Some problems recursion is natural: Tree, Graph, Fibonacci.

PART D: SCHOLAR - Roadmap of this folder

06_05_01_Basic_Recursion_Factorial_Fibonacci.cpp
   -> Factorial, Fibonacci, Sum of n numbers, Countdown

06_05_02_Recursion_vs_Iteration.cpp
   -> Same problem solved both ways, compare speed/memory

06_05_03_Advanced_Recursion_Problems.cpp
   -> Power, GCD, Reverse String, Palindrome, Tower of Hanoi intro

Interview: Recursion must have base case otherwise Stack Overflow.
Tail recursion can be optimized by compiler.
*/

// Demo 1: Countdown recursion
void countdown(int n){
    if(n == 0){
        cout << "0 - STOP (Base Case)" << endl;
        return; // Base case
    }
    cout << n << " ";
    countdown(n-1); // Recursive call
}

// Demo 2: Factorial recursion
int factorial(int n){
    if(n == 0 || n == 1) return 1; // Base
    return n * factorial(n-1);     // Recursive
}

// Demo 3: Sum of n numbers recursion
int sumN(int n){
    if(n == 1) return 1; // Base
    return n + sumN(n-1);
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_00 - RECURSION OVERVIEW - INTRO FILE\n";
    cout << "================================================================\n\n";

    cout << "ROADMAP OF 06_05 FOLDER:\n";
    cout << "1. 06_05_01_Basic_Recursion_Factorial_Fibonacci\n";
    cout << "2. 06_05_02_Recursion_vs_Iteration\n";
    cout << "3. 06_05_03_Advanced_Recursion_Problems\n";
    cout << "----------------------------------------\n\n";

    cout << "Demo 1: Countdown(5)\n";
    countdown(5);
    cout << "\n";

    cout << "Demo 2: factorial(5)\n";
    cout << "5! = " << factorial(5) << endl;
    cout << "Flow: 5*4*3*2*1 = 120\n\n";

    cout << "Demo 3: sumN(5) = 1+2+3+4+5\n";
    cout << "sum = " << sumN(5) << endl;

    cout << "\n================================================================\n";
    cout << "Key Rule: Recursion = Base Case + Recursive Call (Smaller Problem)\n";
    cout << "No Base = Infinite = Stack Overflow Crash!\n";
    cout << "================================================================\n";
    return 0;
}