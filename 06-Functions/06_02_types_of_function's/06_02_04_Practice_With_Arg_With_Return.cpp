#include <iostream>
using namespace std;

// Q1
int addTwo(int a, int b){
    return a + b;
}

// Q2
int findCube(int n){
    return n * n * n;
}

// Q3
bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

// Q4
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

// Q5
int countDigits(int n){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while(n != 0){
        n = n / 10;
        count++;
    }
    return count;
}

// Q6
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

// Q7
int reverseNum(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

// Q8
int powerCalc(int base, int exp){
    int p = 1;
    for(int i = 0; i < exp; i++){
        p = p * base;
    }
    return p;
}

// Q9
int findMax3(int a, int b, int c){
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    return max;
}

// Q10
int sumOfDigits(int n){
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

int main(){
    cout << "================================================================\n";
    cout << "06_02_04_PRACTICE - With Arg, With Return (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: addTwo(12,18)\n";
    cout << "Solution: " << addTwo(12, 18) << "\n\n";

    cout << "Q2: findCube(5)\n";
    cout << "Solution: " << findCube(5) << "\n\n";

    cout << "Q3: isEven(10) and isEven(7)\n";
    cout << "Solution: 10 is " << (isEven(10) ? "Even" : "Odd") << "\n";
    cout << "Solution: 7 is " << (isEven(7) ? "Even" : "Odd") << "\n\n";

    cout << "Q4: factorial(6)\n";
    cout << "Solution: " << factorial(6) << "\n\n";

    cout << "Q5: countDigits(98765)\n";
    cout << "Solution: " << countDigits(98765) << "\n\n";

    cout << "Q6: isPrime(29) and isPrime(30)\n";
    cout << "Solution: 29 is " << (isPrime(29) ? "Prime" : "Not Prime") << "\n";
    cout << "Solution: 30 is " << (isPrime(30) ? "Prime" : "Not Prime") << "\n\n";

    cout << "Q7: reverseNum(12345)\n";
    cout << "Solution: " << reverseNum(12345) << "\n\n";

    cout << "Q8: powerCalc(2,8)\n";
    cout << "Solution: " << powerCalc(2, 8) << "\n\n";

    cout << "Q9: findMax3(12,45,32)\n";
    cout << "Solution: Max = " << findMax3(12, 45, 32) << "\n\n";

    cout << "Q10: sumOfDigits(1234) -> 1+2+3+4=10\n";
    cout << "Solution: " << sumOfDigits(1234) << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Type-4 Questions Done! - FOLDER 06_02 COMPLETE!\n";
    cout << "================================================================\n";
    return 0;
}