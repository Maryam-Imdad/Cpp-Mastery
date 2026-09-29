#include <iostream>
using namespace std;
/*

FILE: 06_05_01_Basic_Recursion_Factorial_Fibonacci.cpp
TOPIC: BASIC RECURSION - Factorial, Fibonacci, Sum


PART A: BEGINNER - What we learn here?

Most famous recursion examples:

1. Factorial: n! = n * (n-1)!
   5! = 5*4*3*2*1
   Base: 0! = 1, 1! = 1

2. Fibonacci: 0,1,1,2,3,5,8...
   fib(n) = fib(n-1) + fib(n-2)
   Base: fib(0)=0, fib(1)=1

3. Sum of N: sum(n) = n + sum(n-1)
   Base: sum(1)=1

Real Life: Factorial = ways to arrange books.
Fibonacci = nature pattern (flower petals).

PART B: INTERMEDIATE - How recursion goes inside?

Call Stack for factorial(3):
fact(3) -> wait for fact(2)
  fact(2) -> wait for fact(1)
    fact(1) -> return 1 (Base)
  fact(2) = 2*1=2 return
fact(3)=3*2=6 return

Same for Fibonacci: Tree structure. Slow if naive.

PART C: ADVANCE - Code Pattern

Always:
if(base condition) return base_value;
else return something + recursive(smaller)

PART D: SCHOLAR - Interview Points

Q: Factorial complexity? O(n) time, O(n) stack space.
Q: Fibonacci naive complexity? O(2^n) - exponential, very slow.
Q: Why slow? Repeats same calculation. fib(3) calculated many times.
Solution: Memoization / DP.

Q: Stack Overflow when? When base missing or n too large (~10^5 depth).
*/

// 1. Factorial
int factorial(int n){
    if(n == 0 || n == 1) return 1; // Base
    return n * factorial(n-1);
}

// 2. Fibonacci
int fibonacci(int n){
    if(n == 0) return 0; // Base
    if(n == 1) return 1; // Base
    return fibonacci(n-1) + fibonacci(n-2);
}

// 3. Sum of N
int sumN(int n){
    if(n == 1) return 1; // Base
    return n + sumN(n-1);
}

// 4. Countdown print
void countdown(int n){
    if(n == 0){
        cout << "0";
        return;
    }
    cout << n << " ";
    countdown(n-1);
}

// 5. Power: n^p
int powerRec(int base, int exp){
    if(exp == 0) return 1; // Base: anything^0=1
    return base * powerRec(base, exp-1);
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_01 - BASIC RECURSION - Factorial, Fibonacci\n";
    cout << "================================================================\n\n";

    cout << "1. Factorial:\n";
    cout << "factorial(5) = " << factorial(5) << " | Flow: 5*4*3*2*1\n\n";

    cout << "2. Fibonacci:\n";
    cout << "Series 0 to 7: ";
    for(int i=0; i<=7; i++){
        cout << fibonacci(i) << " ";
    }
    cout << "\n fib(6) = " << fibonacci(6) << " (0,1,1,2,3,5,8)\n\n";

    cout << "3. Sum of N (1 to 10):\n";
    cout << "sumN(10) = " << sumN(10) << "\n\n";

    cout << "4. Countdown(5):\n";
    countdown(5);
    cout << "\n\n";

    cout << "5. PowerRec(2,5):\n";
    cout << "2^5 = " << powerRec(2,5) << "\n\n";

    cout << "================================================================\n";
    cout << "Interview: Base Case must else Stack Overflow.\n";
    cout << "================================================================\n";
    return 0;
}