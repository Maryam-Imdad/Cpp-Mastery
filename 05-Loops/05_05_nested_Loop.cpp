#include <iostream>
using namespace std;
/*

FILE: 05_05_nested_Loop.cpp
TOPIC: NESTED LOOP - BEGINNER TO ADVANCE THEORY


PART A: BEGINNER - What is Nested Loop?

Definition: Loop inside Loop. Outer loop = Rows, Inner loop = Columns.
Real Life: Clock - Hour hand outer loop, Minute hand inner loop.
Every hour, minutes go 1 to 60.

Syntax:
for(i=1; i<=3; i++){ // Outer - Rows
    for(j=1; j<=3; j++){ // Inner - Columns
        body
    }
}

PART B: INTERMEDIATE - How it Works

Flow: Outer i=1 -> Inner j runs FULL (1 to 3) -> Outer i=2 -> Inner j runs FULL again
Total iterations = Outer * Inner. If both 10, total = 100.
Execution Time: O(N*M). If same N, O(N^2).

Example:
i=1: j=1,2,3
i=2: j=1,2,3
i=3: j=1,2,3

PART C: ADVANCE LEVEL

Uses:
a) Patterns Printing: Stars, Triangles
b) 2D Arrays: Matrix traversal
c) Tables: Multiplication table grid
d) Combinations: All pairs (i,j)

Common Mistakes:
1. Using same variable i for both loops -> Infinite or logic error
2. Forgetting {} -> Inner loop only binds to next line, outer breaks
3. Not resetting inner loop variable in while nested loops

PART D: SCHOLAR LEVEL

Complexity: O(N^2) is Quadratic. N=1000 -> 1M operations - slow.
Optimization: Can we reduce nested loops? Use Hashing to make O(N).

Invariant: Outer invariant = Rows processed, Inner invariant = Columns in current row.
Pattern Logic:
- Star Pattern: inner j <= i -> Triangle, j <= n -> Square
- Time Complexity Proof: Sum_{i=1 to N} Sum_{j=1 to M} 1 = N*M

Matrix: Nested loop is Row-Major traversal, cache-friendly in C++.
*/

int main(){
    cout << "=== NESTED LOOP - BEGINNER TO ADVANCE DEMO ===\n\n";

    cout << "1. Basic 3x3 grid (Outer 3, Inner 3):\n";
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "\n2. Clock Simulation (Hours 1-2, Minutes 1-3):\n";
    for(int hour=1; hour<=2; hour++){
        for(int min=1; min<=3; min++){
            cout << hour << ":" << min << " ";
        }
        cout << endl;
    }

    cout << "\n3. Simple Star Square 3x3:\n";
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){ cout << "* "; }
        cout << endl;
    }

    cout << "\n=== Theory File Executed Successfully ===\n";
    return 0;
}