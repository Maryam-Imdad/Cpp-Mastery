#include <iostream>
using namespace std;

// Q1 Function - No Arg, No Return
void sayHello(){
    cout << "Hello C++ User!";
}

// Q2 Function - With Arg, With Return
int sum(int a, int b){
    int result = a + b;
    return result;
}

// Q3 Function - Find Max
int findMax(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

// Q4 Function - Check Even
bool checkEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

// Q5 Function - Factorial
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

// Q6 Function - Cube
int cube(int n){
    int result = n * n * n;
    return result;
}

// Q7 Function - Power
int power(int base, int exp){
    int p = 1;
    for(int i = 0; i < exp; i++){
        p = p * base;
    }
    return p;
}

// Q8 Function - Count Digits
int countDigits(int n){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while(n!= 0){
        n = n / 10;
        count++;
    }
    return count;
}

// Q9 Function - Prime Check
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Q10 Function - Reverse Number
int reverseNumber(int n){
    int rev = 0;
    while(n!= 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int main(){
    cout << "================================================================\n";
    cout << "06_01_01 PRACTICE - FUNCTION INTRO (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1 [Beginner]: Create function sayHello()\n";
    cout << "Solution: ";
    sayHello();
    cout << "\n\n";

    cout << "Q2 [Beginner]: Sum of Two Numbers sum(12,8)\n";
    cout << "Solution: " << sum(12, 8) << "\n\n";

    cout << "Q3 [Easy]: Find Maximum findMax(25,42)\n";
    cout << "Solution: Max = " << findMax(25, 42) << "\n\n";

    cout << "Q4 [Easy]: Check Even/Odd\n";
    cout << "Solution: 10 is " << (checkEven(10)? "Even" : "Odd") << "\n";
    cout << "Solution: 7 is " << (checkEven(7)? "Even" : "Odd") << "\n\n";

    cout << "Q5 [Medium]: Factorial factorial(5)\n";
    cout << "Solution: " << factorial(5) << "\n\n";

    cout << "Q6 [Medium]: Cube cube(4)\n";
    cout << "Solution: " << cube(4) << "\n\n";

    cout << "Q7 [Medium]: Power power(2,5)\n";
    cout << "Solution: " << power(2, 5) << "\n\n";

    cout << "Q8 [Advance]: Count Digits countDigits(12345)\n";
    cout << "Solution: " << countDigits(12345) << "\n\n";

    cout << "Q9 [Advance]: Prime Check\n";
    cout << "Solution: 29 is " << (isPrime(29)? "Prime" : "Not Prime") << "\n";
    cout << "Solution: 30 is " << (isPrime(30)? "Prime" : "Not Prime") << "\n\n";

    cout << "Q10 [Advance]: Reverse Number reverseNumber(1234)\n";
    cout << "Solution: " << reverseNumber(1234) << "\n";

    cout << "\n================================================================\n";
    cout << "All 10 Questions Completed Successfully!\n";
    cout << "================================================================\n";
    return 0;
}