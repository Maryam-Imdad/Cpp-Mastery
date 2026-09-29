#include <iostream>
using namespace std;

// Q1
int get100(){
    return 100;
}

// Q2
int getSum10(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum = sum + i;
    }
    return sum;
}

// Q3
float getPiValue(){
    return 3.14159f;
}

// Q4
char getFirstLetter(){
    return 'C';
}

// Q5
int getSquareOf12(){
    int n = 12;
    int square = n * n;
    return square;
}

// Q6
int getFactorialOf5(){
    int fact = 1;
    for(int i = 1; i <= 5; i++){
        fact = fact * i;
    }
    return fact;
}

// Q7
bool getIsEvenTrue(){
    // Always returns true as example
    int num = 10;
    if(num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

// Q8
int getCubeOf3(){
    int n = 3;
    return n * n * n;
}

// Q9
int getReverseOf123(){
    int n = 123;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

// Q10
int getPrimeExample(){
    // Returns a prime number
    return 29;
}

int main(){
    cout << "================================================================\n";
    cout << "06_02_02_PRACTICE - No Arg, With Return (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: get100() - Return 100\n";
    cout << "Solution: " << get100() << "\n\n";

    cout << "Q2: getSum10() - Sum of 1 to 10\n";
    cout << "Solution: " << getSum10() << "\n\n";

    cout << "Q3: getPiValue() - Return Pi\n";
    cout << "Solution: " << getPiValue() << "\n\n";

    cout << "Q4: getFirstLetter() - Return 'C'\n";
    cout << "Solution: " << getFirstLetter() << "\n\n";

    cout << "Q5: getSquareOf12() - Square of 12\n";
    cout << "Solution: " << getSquareOf12() << "\n\n";

    cout << "Q6: getFactorialOf5() - Factorial of 5\n";
    cout << "Solution: " << getFactorialOf5() << "\n\n";

    cout << "Q7: getIsEvenTrue() - Check 10 is even?\n";
    cout << "Solution: " << (getIsEvenTrue() ? "True - Even" : "False - Odd") << "\n\n";

    cout << "Q8: getCubeOf3() - Cube of 3\n";
    cout << "Solution: " << getCubeOf3() << "\n\n";

    cout << "Q9: getReverseOf123() - Reverse of 123\n";
    cout << "Solution: " << getReverseOf123() << "\n\n";

    cout << "Q10: getPrimeExample() - Return a prime number\n";
    cout << "Solution: " << getPrimeExample() << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Type-2 Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}