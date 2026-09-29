#include <iostream>
using namespace std;

// Q1: Try to change value - will fail to change original
void changeTo100(int x){
    x = 100;
    cout << "Inside: x = " << x;
}

// Q2: Increment - original safe
void increment(int n){
    n++;
    cout << "Inside: n = " << n;
}

// Q3: Swap - fails
void swapValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside: a=" << a << " b=" << b;
}

// Q4: Square
int getSquare(int n){
    int sq = n * n;
    return sq;
}

// Q5: Double
int getDouble(int n){
    return n * 2;
}

// Q6: Add 10
int addTen(int n){
    return n + 10;
}

// Q7: Check even but don't change
void checkEven(int n){
    if(n % 2 == 0){
        cout << n << " is Even";
    }
    else{
        cout << n << " is Odd";
    }
}

// Q8: Cube
int getCube(int n){
    return n * n * n;
}

// Q9: Find max of two - no change needed
int getMax(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

// Q10: Sum of digits - works on copy
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
    cout << "06_03_01_PRACTICE - Call By Value (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: changeTo100(20)\n";
    int a = 20;
    cout << "Before: a=" << a << " | ";
    changeTo100(a);
    cout << " | After: a=" << a << " (Safe)\n\n";

    cout << "Q2: increment(5)\n";
    int b = 5;
    cout << "Before: b=" << b << " | ";
    increment(b);
    cout << " | After: b=" << b << "\n\n";

    cout << "Q3: swapValue(10,20) - Should FAIL\n";
    int p = 10, q = 20;
    cout << "Before: p=" << p << " q=" << q << " | ";
    swapValue(p, q);
    cout << " | After: p=" << p << " q=" << q << " (Not swapped - Proof)\n\n";

    cout << "Q4: getSquare(7)\n";
    cout << "Solution: " << getSquare(7) << "\n\n";

    cout << "Q5: getDouble(15)\n";
    cout << "Solution: " << getDouble(15) << "\n\n";

    cout << "Q6: addTen(25)\n";
    cout << "Solution: " << addTen(25) << "\n\n";

    cout << "Q7: checkEven(9)\n";
    cout << "Solution: ";
    checkEven(9);
    cout << "\n\n";

    cout << "Q8: getCube(4)\n";
    cout << "Solution: " << getCube(4) << "\n\n";

    cout << "Q9: getMax(30,45)\n";
    cout << "Solution: Max = " << getMax(30, 45) << "\n\n";

    cout << "Q10: sumOfDigits(123)\n";
    int n = 123;
    cout << "Before: n=" << n << " | Sum = " << sumOfDigits(n);
    cout << " | After: n=" << n << " (Safe, original not destroyed)\n\n";

    cout << "================================================================\n";
    cout << "All 10 Call By Value Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}