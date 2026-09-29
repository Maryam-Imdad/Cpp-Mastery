#include <iostream>
using namespace std;
/*

FILE: 06_05_02_Recursion_vs_Iteration.cpp
TOPIC: RECURSION VS ITERATION


PART A: BEGINNER - What is Difference?

Iteration: Loop (for, while). Repeat with loop variable.
Recursion: Function calls itself with smaller problem.

Same problem solved both ways.

Example - Factorial:
Iterative: for(i=1..n) result *= i
Recursive: n * fact(n-1)

Real Life:
Iteration = Climbing stairs step by step with loop counter.
Recursion = You ask friend to climb remaining stairs, he asks another...

PART B: INTERMEDIATE - Memory & Speed

Iteration:
Memory: O(1) - only 1 variable
Speed: Fast, no function call overhead
Risk: No risk of stack overflow

Recursion:
Memory: O(n) - n stack frames, each stores n, return address
Speed: Slow - function call + return overhead
Risk: Stack overflow if depth large (~10k calls)

When to use which?
Use Iteration: Simple problems like factorial, sum, simple loops.
Use Recursion: Tree, Graph, Divide & Conquer, Backtracking, Tower of Hanoi
Recursion code is shorter, elegant for complex logic.

PART C: ADVANCE - Conversion

Any recursion can be converted to iteration with manual stack.
Any iteration can be converted to recursion.

Tail Recursion: When recursive call is last line, compiler can optimize
to iteration (no extra stack). Modern C++ does tail call optimization sometimes.

PART D: SCHOLAR - Interview

Q: Which is faster?
A: Iteration faster, less memory.

Q: Why still use recursion?
A: Readable for Divide & Conquer like Merge Sort, Quick Sort, Tree traversal.

Q: Stack overflow in recursion?
A: Too deep recursion or missing base case. Stack memory limited ~1-8 MB.
*/

// FACTORIAL - Both ways
int factorialRec(int n){
    if(n==0 || n==1) return 1;
    return n * factorialRec(n-1);
}
int factorialIter(int n){
    int result = 1;
    for(int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}

// SUM N - Both ways
int sumRec(int n){
    if(n==1) return 1;
    return n + sumRec(n-1);
}
int sumIter(int n){
    int sum = 0;
    for(int i=1; i<=n; i++) sum += i;
    return sum;
}

// FIBONACCI - Both ways
int fibRec(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibRec(n-1) + fibRec(n-2);
}
int fibIter(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int a=0, b=1, c;
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_02 - RECURSION VS ITERATION\n";
    cout << "================================================================\n\n";

    cout << "1. Factorial(5):\n";
    cout << "Recursive: " << factorialRec(5) << "\n";
    cout << "Iterative: " << factorialIter(5) << "\n";
    cout << "Rec uses 5 stack frames, Iter uses 1 var\n\n";

    cout << "2. Sum 1 to 10:\n";
    cout << "Recursive: " << sumRec(10) << "\n";
    cout << "Iterative: " << sumIter(10) << "\n\n";

    cout << "3. Fibonacci(8):\n";
    cout << "Recursive: " << fibRec(8) << " (O(2^n) slow)\n";
    cout << "Iterative: " << fibIter(8) << " (O(n) fast)\n\n";

    cout << "4. Memory Compare for n=1000:\n";
    cout << "Iter: ~4 bytes\n";
    cout << "Rec: ~1000 frames * ~32 bytes = ~32KB stack\n\n";

    cout << "================================================================\n";
    cout << "Key: Iteration = Fast, Low Memory. Recursion = Elegant for Trees.\n";
    cout << "================================================================\n";
    return 0;
}