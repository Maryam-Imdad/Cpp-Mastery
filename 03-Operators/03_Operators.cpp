// ===================================================================
// CHAPTER 03 - OPERATORS - 100% DETAILED MASTERY
// Operator = Symbol that does operation on variables
// ===================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "========== CHAPTER 03 - OPERATORS ==========" << endl;

    // =================================================================
    // 1. ARITHMETIC OPERATORS (+, -, *, /, %)
    // =================================================================
    cout << "\n--- 1. ARITHMETIC ---" << endl;
    int a = 10, b = 3;
    cout << "a=10, b=3" << endl;
    cout << "a+b = " << a+b << endl; // 13
    cout << "a-b = " << a-b << endl; // 7
    cout << "a*b = " << a*b << endl; // 30
    cout << "a/b = " << a/b << endl; // 3 (not 3.33 because both int)
    cout << "a/b as float = " << (float)a/b << endl; // 3.33 - Casting needed
    cout << "a%b = " << a%b << " (Remainder)" << endl; // 1 -> 10%3=1
    // IMPORTANT: % only works on int, not on float
    // Use: To check even/odd -> if(n%2==0) even

    // =================================================================
    // 2. RELATIONAL OPERATORS (==, !=, >, <, >=, <=)
    // Result is always bool (1 or 0)
    // =================================================================
    cout << "\n--- 2. RELATIONAL ---" << endl;
    cout << "10 == 3 ? " << (a==b) << endl; // 0 false
    cout << "10 != 3 ? " << (a!=b) << endl; // 1 true
    cout << "10 > 3 ? " << (a>b) << endl;   // 1
    cout << "10 < 3 ? " << (a<b) << endl;   // 0
    // MOST COMMON MISTAKE: = vs ==
    // a=10 assigns, a==10 checks

    // =================================================================
    // 3. LOGICAL OPERATORS (&&, ||, !) - AND, OR, NOT
    // =================================================================
    cout << "\n--- 3. LOGICAL ---" << endl;
    bool x = true, y = false;
    cout << "true && false = " << (x&&y) << " (AND: both must be true)" << endl; // 0
    cout << "true || false = " << (x||y) << " (OR: one true is enough)" << endl; // 1
    cout << "!true = " << (!x) << " (NOT: opposite)" << endl; // 0
    // Example: if(age>18 && hasID==true) can vote

    // =================================================================
    // 4. ASSIGNMENT OPERATORS (=, +=, -=, *=, /=, %=)
    // =================================================================
    cout << "\n--- 4. ASSIGNMENT ---" << endl;
    int n = 10;
    cout << "n=10" << endl;
    n += 5; // n = n+5 = 15
    cout << "n+=5 -> " << n << endl;
    n -= 3; // 12
    cout << "n-=3 -> " << n << endl;
    n *= 2; // 24
    cout << "n*=2 -> " << n << endl;
    n /= 4; // 6
    cout << "n/=4 -> " << n << endl;
    n %= 4; // 2
    cout << "n%=4 -> " << n << endl;

    // =================================================================
    // 5. INCREMENT / DECREMENT (++, --) - VERY IMPORTANT
    // =================================================================
    cout << "\n--- 5. INCREMENT/DECREMENT ---" << endl;
    int i = 5;
    cout << "i=" << i << endl;
    cout << "i++ (post): " << i++ << " -> first print, then increase" << endl;
    cout << "Now i=" << i << endl; // 6
    cout << "++i (pre): " << ++i << " -> first increase, then print" << endl; // 7
    cout << "i-- (post): " << i-- << endl; // 7
    cout << "--i (pre): " << --i << endl; // 5
    // Interview Trap: int j=5; int k= j++ + ++j; What is k?

    // =================================================================
    // 6. TERNARY OPERATOR ( ? : ) - Short if-else
    // Syntax: condition ? value_if_true : value_if_false
    // =================================================================
    cout << "\n--- 6. TERNARY ---" << endl;
    int marks = 85;
    string result = (marks >= 50) ? "Pass" : "Fail";
    cout << "Marks " << marks << " -> " << result << endl;
    // Same as: if(marks>=50) result="Pass"; else result="Fail";

    // =================================================================
    // 7. MISC: sizeof, comma, precedence
    // =================================================================
    cout << "\n--- 7. MISC ---" << endl;
    cout << "Sizeof(a): " << sizeof(a) << " bytes" << endl;
    // Precedence: () > * / % > + - > relational > logical > assignment
    cout << "10 + 2 * 3 = " << 10 + 2 * 3 << " (not 36, * first)" << endl;
    cout << "(10+2)*3 = " << (10+2)*3 << " (brackets first)" << endl;

    cout << "\n========== CHAPTER 03 COMPLETE ==========" << endl;
    return 0;
}