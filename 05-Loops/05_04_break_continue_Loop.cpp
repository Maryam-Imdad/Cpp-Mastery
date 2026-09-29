#include <iostream>
using namespace std;
/*

FILE: 05_04_break_continue_Loop.cpp
TOPIC: BREAK & CONTINUE - BEGINNER TO ADVANCE THEORY


PART A: BEGINNER - What are Break & Continue?

Definition: They control the loop, not the data.
break = Full Stop, Exit the loop immediately.
continue = Skip, Skip current round and go to next round.

Real Life:
Break: Searching a student in class. Found at roll 5, stop searching.
Continue: Checking 100 copies, skip absent students.

PART B: INTERMEDIATE - How they Work

Inside for loop:
for(i=1; i<=10; i++){
    if(i==5) break; // Jump OUTSIDE loop
    if(i==2) continue; // Jump to i++ (update)
}

Flow:
break -> Exit loop -> Code after loop runs
continue -> Skip body below it -> Go to update/condition

PART C: ADVANCE LEVEL

Best Uses:
break: 1. Searching, 2. Prime check, 3. Exit infinite loop
continue: 1. Filtering, 2. Guard Clause: if(bad) continue; -> Avoids deep nesting

Common Mistakes:
1. break only breaks INNER loop in nested loops, not all loops
2. Using continue in while without updating -> Infinite loop
   while(i<10){ if(i==5) continue; i++; } -> Stuck at 5 forever!

PART D: SCHOLAR LEVEL

Debate: break is a structured goto - Dijkstra allowed it, but avoid overuse.

Performance: break improves average time from O(N) to O(N/2) in searching.
Example: Searching array, if element at middle, break saves 50% time.

Modern C++: Now we use views::filter instead of continue for cleaner code.
for(int x : numbers | views::filter([](int n){return n%2==0;}))

Labeled Break: In Java, break label breaks outer loop. In C++ we use flag or goto.
*/

int main(){
    cout << "=== BREAK & CONTINUE - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Break Demo - Stop at 5:\n";
    for(int i=1; i<=10; i++){
        if(i==5){ cout << "Found 5 -> Break!"; break; }
        cout << i << " ";
    }

    cout << "\n\n2. Continue Demo - Skip 5:\n";
    for(int i=1; i<=10; i++){
        if(i==5) continue; // Skip 5
        cout << i << " ";
    }

    cout << "\n\n3. Guard Clause with Continue - Print only Even:\n";
    for(int i=1; i<=10; i++){
        if(i%2!=0) continue; // Skip odd
        cout << i << " ";
    }

    cout << "\n\n=== Theory File Executed Successfully ===\n";
    return 0;
}