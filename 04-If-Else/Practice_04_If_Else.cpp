#include <iostream>
using namespace std;

int main() {
    cout << "===== C++ Mastery - Chapter 04: If-Else Practice =====\n\n";

    // Q1: Even / Odd
    cout << "--- Q1: Even / Odd ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is Even\n\n";
    } else {
        cout << num << " is Odd\n\n";
    }

    // Q2: Positive / Negative / Zero
    cout << "--- Q2: Positive / Negative / Zero ---\n";
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0) {
        cout << "Positive\n\n";
    } else if (n < 0) {
        cout << "Negative\n\n";
    } else {
        cout << "Zero\n\n";
    }

    // Q3: Voting Eligibility
    cout << "--- Q3: Voting Eligibility ---\n";
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Eligible to Vote\n\n";
    } else {
        cout << "Not Eligible\n\n";
    }

    // Q4: Grade System
    cout << "--- Q4: Grade System ---\n";
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A+\n\n";
    } else if (marks >= 80) {
        cout << "Grade: A\n\n";
    } else if (marks >= 70) {
        cout << "Grade: B\n\n";
    } else if (marks >= 60) {
        cout << "Grade: C\n\n";
    } else if (marks >= 50) {
        cout << "Grade: D\n\n";
    } else {
        cout << "Grade: F - Fail\n\n";
    }

    // Q5: Leap Year
    cout << "--- Q5: Leap Year ---\n";
    int year;
    cout << "Enter year: ";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year\n\n";
    } else {
        cout << year << " is Not a Leap Year\n\n";
    }

    // Q6: ATM Withdrawal - FIXED (Your error fixed here)
    cout << "--- Q6: ATM Withdrawal (500 multiple) ---\n";
    int withdraw; // FIXED: int use kiya, float nahi
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;
    if (withdraw % 500 == 0) {
        cout << "Withdrawal Allowed: " << withdraw << "\n\n";
    } else {
        cout << "Amount must be multiple of 500\n\n";
    }

    // Q7: Largest of 3 numbers
    cout << "--- Q7: Largest of 3 Numbers ---\n";
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << "Largest is: " << a << "\n\n";
    } else if (b >= a && b >= c) {
        cout << "Largest is: " << b << "\n\n";
    } else {
        cout << "Largest is: " << c << "\n\n";
    }

    // Q8: Login System
    cout << "--- Q8: Simple Login ---\n";
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "maryam" && password == "1234") {
        cout << "Login Successful!\n\n";
    } else {
        cout << "Login Failed!\n\n";
    }

    cout << "===== All Practice Done! =====\n";
    return 0;
}