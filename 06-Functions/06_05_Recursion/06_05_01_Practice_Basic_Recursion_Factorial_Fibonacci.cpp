#include <iostream>
using namespace std;

// Q1: Factorial
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n * factorial(n-1);
}

// Q2: Fibonacci nth term
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}

// Q3: Sum of n
int sumN(int n){
    if(n==1) return 1;
    return n + sumN(n-1);
}

// Q4: Print n to 1
void printNto1(int n){
    if(n==0) return;
    cout << n << " ";
    printNto1(n-1);
}

// Q5: Print 1 to n (tricky - print after call)
void print1toN(int n){
    if(n==0) return;
    print1toN(n-1);
    cout << n << " ";
}

// Q6: Power
int power(int base, int exp){
    if(exp==0) return 1;
    return base * power(base, exp-1);
}

// Q7: Count digits using recursion
int countDigits(int n){
    if(n==0) return 0;
    return 1 + countDigits(n/10);
}

// Q8: Sum of digits
int sumDigits(int n){
    if(n==0) return 0;
    return n%10 + sumDigits(n/10);
}

// Q9: Product of n numbers (same as factorial logic but for sum)
int productN(int n){
    if(n==1) return 1;
    return n * productN(n-1);
}

// Q10: Fibonacci series print
void fibSeries(int n){
    for(int i=0; i<n; i++){
        cout << fib(i) << " ";
    }
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_01_PRACTICE - Basic Recursion (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: factorial(6)\n";
    cout << "Solution: " << factorial(6) << "\n\n";

    cout << "Q2: fib(7) -> 0,1,1,2,3,5,8,13 => 7th is 13\n";
    cout << "Solution: " << fib(7) << "\n\n";

    cout << "Q3: sumN(10) = 55\n";
    cout << "Solution: " << sumN(10) << "\n\n";

    cout << "Q4: printNto1(5)\n";
    cout << "Solution: ";
    printNto1(5);
    cout << "\n\n";

    cout << "Q5: print1toN(5)\n";
    cout << "Solution: ";
    print1toN(5);
    cout << "\n\n";

    cout << "Q6: power(3,4) = 81\n";
    cout << "Solution: " << power(3,4) << "\n\n";

    cout << "Q7: countDigits(12345) = 5\n";
    cout << "Solution: " << countDigits(12345) << "\n\n";

    cout << "Q8: sumDigits(123) = 6\n";
    cout << "Solution: " << sumDigits(123) << "\n\n";

    cout << "Q9: productN(4) = 24\n";
    cout << "Solution: " << productN(4) << "\n\n";

    cout << "Q10: fibSeries(8)\n";
    cout << "Solution: ";
    fibSeries(8);
    cout << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Basic Recursion Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}