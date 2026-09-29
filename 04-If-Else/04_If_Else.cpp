// ===================================================================
// CHAPTER 04 - IF-ELSE - 100% DETAILED MASTERY
// If = Decision making. Real life jaisa: Agar barish hui to...
// ===================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "========== CHAPTER 04 - IF ELSE ==========" << endl;

    // =================================================================
    // 1. SIMPLE IF - One condition
    // =================================================================
    cout << "\n--- 1. Simple IF ---" << endl;
    int age = 20;
    if (age >= 18) {
        cout << "You can vote! Age is " << age << endl;
    }
    // Logic: if(condition) -> if condition is true (1), run inside {}
    // If condition false (0), skip {}

    // =================================================================
    // 2. IF-ELSE - Two paths
    // =================================================================
    cout << "\n--- 2. IF-ELSE ---" << endl;
    int marks = 40;
    if (marks >= 50) {
        cout << marks << " -> PASS" << endl;
    } else {
        cout << marks << " -> FAIL" << endl;
    }
    // Either IF runs or ELSE runs, never both

    // =================================================================
    // 3. ELSE-IF LADDER - Multiple conditions
    // IMPORTANT: Order matters!
    // =================================================================
    cout << "\n--- 3. ELSE-IF LADDER (Grading) ---" << endl;
    int score = 85;
    if (score >= 90) {
        cout << score << " -> Grade A+" << endl;
    } else if (score >= 80) {
        cout << score << " -> Grade A" << endl;
    } else if (score >= 70) {
        cout << score << " -> Grade B" << endl;
    } else if (score >= 60) {
        cout << score << " -> Grade C" << endl;
    } else if (score >= 50) {
        cout << score << " -> Grade D" << endl;
    } else {
        cout << score << " -> Grade F - Fail" << endl;
    }
    // NOTE: If you write if-if-if instead of else-if, ALL conditions check
    // else-if stops at first true condition - More efficient

    // =================================================================
    // 4. NESTED IF - If inside If
    // =================================================================
    cout << "\n--- 4. NESTED IF ---" << endl;
    int age2 = 20;
    bool hasID = true;
    if (age2 >= 18) {
        cout << "Age OK" << endl;
        if (hasID == true) {
            cout << "Can vote - Age and ID both OK" << endl;
        } else {
            cout << "Cannot vote - No ID card" << endl;
        }
    } else {
        cout << "Cannot vote - Underage" << endl;
    }

    // =================================================================
    // 5. LOGICAL OPERATORS IN IF - && (AND), || (OR), ! (NOT)
    // =================================================================
    cout << "\n--- 5. IF with LOGICAL OPERATORS ---" << endl;
    // AND && : Both must be true
    int age3 = 20;
    bool isPakistani = true;
    if (age3 >= 18 && isPakistani == true) {
        cout << "Eligible for CNIC" << endl;
    }

    // OR || : At least one true
    string day = "Sunday";
    if (day == "Saturday" || day == "Sunday") {
        cout << day << " is Weekend!" << endl;
    }

    // NOT ! : Opposite
    bool isRaining = false;
    if (!isRaining) {
        cout << "You can go outside, not raining" << endl;
    }

    // =================================================================
    // 6. COMMON MISTAKES - Very Important for Exam!
    // =================================================================
    cout << "\n--- 6. COMMON MISTAKES ---" << endl;
    
    // MISTAKE 1: = vs ==
    int x = 10;
    // if (x = 20) -> WRONG! This assigns 20 to x, always true
    if (x == 20) { // CORRECT: checks equality
        cout << "x is 20" << endl;
    } else {
        cout << "Mistake 1 avoided: Using == not =" << endl;
    }

    // MISTAKE 2: ; after if()
    // if (age>=18); { cout<<"Vote"; } -> WRONG! ; ends the if
    // The block will ALWAYS run because ; makes empty if

    // MISTAKE 3: Missing braces {}
    // if you have only 1 line, {} optional but RECOMMENDED always use {}

    // =================================================================
    // 7. TERNARY vs IF-ELSE - Short form
    // =================================================================
    cout << "\n--- 7. TERNARY vs IF ---" << endl;
    int n = 15;
    // Using if-else
    string result1;
    if (n % 2 == 0) {
        result1 = "Even";
    } else {
        result1 = "Odd";
    }
    cout << "If-else: " << n << " is " << result1 << endl;

    // Using ternary - Same in 1 line
    string result2 = (n % 2 == 0) ? "Even" : "Odd";
    cout << "Ternary: " << n << " is " << result2 << endl;

    // =================================================================
    // 8. REAL LIFE EXAMPLE - Login System
    // =================================================================
    cout << "\n--- 8. REAL LIFE - Login System ---" << endl;
    string username = "maryam";
    string password = "1234";
    string inputUser = "maryam";
    string inputPass = "1234";

    if (inputUser == username && inputPass == password) {
        cout << "Login Successful! Welcome " << username << endl;
    } else if (inputUser != username) {
        cout << "Login Failed! Username wrong" << endl;
    } else {
        cout << "Login Failed! Password wrong" << endl;
    }

    cout << "\n========== CHAPTER 04 COMPLETE ==========" << endl;
    return 0;
}