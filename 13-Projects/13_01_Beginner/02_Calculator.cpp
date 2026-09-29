#include <bits/stdc++.h>
using namespace std;

/*
    13-Projects / 13_01_Beginner / 02_Calculator.cpp

    Concepts:
    - Functions (modular code)
    - Switch-case
    - Error handling (Division by zero)
    - Loop for continuous calculation
    - cmath library for scientific operations
*/

// Functions - Each operation is a separate function (Clean Code)
double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { 
    if(b == 0) throw runtime_error("Division by Zero!");
    return a / b; 
}
double power(double a, double b) { return pow(a, b); }

int main() {
    char op;
    double num1, num2;
    char choice;

    cout << "====== ADVANCED CALCULATOR ======" << endl;
    cout << "Operators: +  -  *  /  ^ (power)  % (mod)  s (sqrt)  !" << endl;

    do {
        cout << "\nEnter expression (e.g. 5 + 3): ";
        cin >> num1 >> op >> num2;

        try {
            switch(op){
                case '+':
                    cout << "Result: " << add(num1, num2) << endl;
                    break;
                case '-':
                    cout << "Result: " << sub(num1, num2) << endl;
                    break;
                case '*':
                    cout << "Result: " << mul(num1, num2) << endl;
                    break;
                case '/':
                    cout << "Result: " << divide(num1, num2) << endl;
                    break;
                case '^':
                    cout << "Result: " << power(num1, num2) << endl;
                    break;
                case '%':
                    if(num2 == 0) throw runtime_error("Mod by Zero!");
                    cout << "Result: " << (int)num1 % (int)num2 << endl;
                    break;
                case 's': // sqrt - e.g. 9 s 0 -> sqrt(9)
                    if(num1 < 0) throw runtime_error("Sqrt of negative!");
                    cout << "Sqrt(" << num1 << ") = " << sqrt(num1) << endl;
                    break;
                default:
                    cout << "Invalid Operator! Use + - * / ^ % s" << endl;
            }
        } catch(exception &e){
            cout << "Error: " << e.what() << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "\nCalculator Closed. Thank you!" << endl;
    return 0;
}