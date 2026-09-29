#include <iostream>
using namespace std;

// Q1
void greetUser(string name){
    cout << "Hello, " << name << "!";
}

// Q2
void printCube(int n){
    int cube = n * n * n;
    cout << "Cube of " << n << " = " << cube;
}

// Q3
void printFactorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout << "Factorial of " << n << " = " << fact;
}

// Q4
void printPrimeCheck(int n){
    if(n <= 1){
        cout << n << " is Not Prime";
        return;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << n << " is Not Prime";
            return;
        }
    }
    cout << n << " is Prime";
}

// Q5
void printReverse(int n){
    int original = n;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse of " << original << " = " << rev;
}

// Q6
void printMaxOfTwo(int a, int b){
    if(a > b){
        cout << "Max is " << a;
    }
    else{
        cout << "Max is " << b;
    }
}

// Q7
void printTable(int num){
    for(int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Q8
void printGrade(int marks){
    if(marks >= 90){
        cout << "Grade A";
    }
    else if(marks >= 80){
        cout << "Grade B";
    }
    else if(marks >= 70){
        cout << "Grade C";
    }
    else{
        cout << "Fail";
    }
}

// Q9
void printDigitsCount(int n){
    if(n == 0){
        cout << "Digits = 1";
        return;
    }
    int count = 0;
    int temp = n;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    cout << "Digits in " << n << " = " << count;
}

// Q10
void printPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    cout << "================================================================\n";
    cout << "06_02_03_PRACTICE - With Arg, No Return (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: greetUser(\"Ali\")\n";
    cout << "Solution: ";
    greetUser("Ali");
    cout << "\n\n";

    cout << "Q2: printCube(4)\n";
    cout << "Solution: ";
    printCube(4);
    cout << "\n\n";

    cout << "Q3: printFactorial(5)\n";
    cout << "Solution: ";
    printFactorial(5);
    cout << "\n\n";

    cout << "Q4: printPrimeCheck(29) and (30)\n";
    cout << "Solution: ";
    printPrimeCheck(29);
    cout << "\nSolution: ";
    printPrimeCheck(30);
    cout << "\n\n";

    cout << "Q5: printReverse(1234)\n";
    cout << "Solution: ";
    printReverse(1234);
    cout << "\n\n";

    cout << "Q6: printMaxOfTwo(25, 42)\n";
    cout << "Solution: ";
    printMaxOfTwo(25, 42);
    cout << "\n\n";

    cout << "Q7: printTable(6)\n";
    cout << "Solution:\n";
    printTable(6);
    cout << "\n";

    cout << "Q8: printGrade(85)\n";
    cout << "Solution: ";
    printGrade(85);
    cout << "\n\n";

    cout << "Q9: printDigitsCount(12345)\n";
    cout << "Solution: ";
    printDigitsCount(12345);
    cout << "\n\n";

    cout << "Q10: printPattern(4)\n";
    cout << "Solution:\n";
    printPattern(4);
    cout << "\n";

    cout << "================================================================\n";
    cout << "All 10 Type-3 Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}