#include <iostream>
using namespace std;
/*

FILE: 06_08_00_Calculator_Using_Functions.cpp
TOPIC: FINAL PROJECT - Calculator Using Functions


PART A: BEGINNER - What to build?

A menu driven calculator using separate functions for each operation.
Each operation is a function: add(), sub(), mul(), div(), mod(), power(), etc

Why? Real world use of functions - modular, clean code.

PART B: INTERMEDIATE - Design

Functions:
int add(int a,int b) {return a+b;}
int sub(int a,int b) {return a-b;}
etc

Main loop: while(true) show menu, take choice, call function, show result

PART C: ADVANCE - Features

- Add, Subtract, Multiply, Divide
- Modulo, Power, Factorial
- Use function overloading for double version
- Error handling (divide by zero)

PART D: SCHOLAR - Interview

Q: Why functions for calculator?
Separation of concerns, reusable, easy to test.
This is exactly how real projects split work.
*/

int add(int a, int b){ return a + b; }
double add(double a, double b){ return a + b; } // overloading

int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }
double divFunc(int a, int b){
    if(b==0){ cout << "Error: Divide by zero!\n"; return 0; }
    return (double)a / b;
}
int modFunc(int a, int b){
    if(b==0){ cout << "Error: Mod by zero!\n"; return 0; }
    return a % b;
}
long long powerFunc(int base, int exp){
    long long res = 1;
    for(int i=0;i<exp;i++) res *= base;
    return res;
}
long long factorialFunc(int n){
    if(n<=1) return 1;
    long long res = 1;
    for(int i=2;i<=n;i++) res*=i;
    return res;
}

void showMenu(){
    cout << "\n========== CALCULATOR MENU ==========\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "5. Modulo\n6. Power\n7. Factorial\n8. Exit\n";
    cout << "Enter choice: ";
}

int main(){
    cout << "================================================================\n";
    cout << "06_08_00 - CALCULATOR USING FUNCTIONS - Final Project\n";
    cout << "================================================================\n\n";

    int choice;
    int a,b,n;
    do{
        showMenu();
        cin >> choice;
        switch(choice){
            case 1: cout << "Enter two numbers: "; cin >> a >> b;
                    cout << "Result = " << add(a,b) << endl; break;
            case 2: cout << "Enter two numbers: "; cin >> a >> b;
                    cout << "Result = " << sub(a,b) << endl; break;
            case 3: cout << "Enter two numbers: "; cin >> a >> b;
                    cout << "Result = " << mul(a,b) << endl; break;
            case 4: cout << "Enter two numbers: "; cin >> a >> b;
                    cout << "Result = " << divFunc(a,b) << endl; break;
            case 5: cout << "Enter two numbers: "; cin >> a >> b;
                    cout << "Result = " << modFunc(a,b) << endl; break;
            case 6: cout << "Enter base and exp: "; cin >> a >> b;
                    cout << "Result = " << powerFunc(a,b) << endl; break;
            case 7: cout << "Enter number: "; cin >> n;
                    cout << "Result = " << factorialFunc(n) << endl; break;
            case 8: cout << "Exiting Calculator. Bye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    }while(choice!= 8);

    cout << "\n================================================================\n";
    cout << "Key: Every operation is separate function - modular design.\n";
    cout << "================================================================\n";
    return 0;
}