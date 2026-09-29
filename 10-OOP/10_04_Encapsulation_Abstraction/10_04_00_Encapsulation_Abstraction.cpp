#include <iostream>
using namespace std;
/*

FILE: 10_04_00_Encapsulation_Abstraction.cpp
TOPIC: Encapsulation and Abstraction


PART A: BEGINNER - Definitions

Encapsulation: Binding data and methods together in single unit (class), and hiding sensitive data using private.
Like capsule, data hidden inside, only exposed via methods.

Abstraction: Showing only essential features, hiding background complexity.
Example: You call car.start() but don't know engine internal complexity. That's abstraction.

How achieved?
Encapsulation: Using class + private + public
Abstraction: Using abstract class (virtual functions) + access specifiers

PART B: INTERMEDIATE - Implementation

Encapsulation:
class Student{
 private: int roll; // Hidden
 public: void setRoll(int r){ if(r>0) roll=r; } // Controlled access
         int getRoll(){ return roll; }
};

Benefit: Validation, control, data security.

Abstraction:
class Car{
 public: void start(){ engineOn(); fuelPump(); } // User sees start() only
 private: void engineOn(){} void fuelPump(){} // Hidden complexity
};

PART C: ADVANCE - Access Specifiers

private: Only inside class accessible
protected: Inside class + child class
public: Everywhere

Abstraction levels:
1. Access specifiers hide data
2. Header files hide implementation
3. Abstract class with pure virtual function: virtual void display()=0;

PART D: SCHOLAR - Interview

Q: Encapsulation vs Abstraction difference?
Ans: Encapsulation is wrapping and hiding data via private (implementation detail).
     Abstraction is showing only interface, hiding complexity (design level).
     Encapsulation leads to abstraction.

Q: How to achieve 100% abstraction?
Ans: Using pure abstract class / interface (all methods pure virtual).

Q: Advantage of encapsulation?
Ans: Data hiding, security, validation, loose coupling.
*/

class BankAccount {
private: // Private data hidden, cannot access outside directly
    int balance; // Sensitive balance hidden
    string password; // Password hidden

    // Private helper methods - internal complexity hidden (abstraction)
    bool verifyPassword(string pwd){
        return pwd == password; // Check password, hidden logic
    }

public:
    // Constructor to initialize
    BankAccount(string pwd, int initial){
        password = pwd; // Set password
        balance = initial; // Set initial balance
    }

    // Public interface to interact - encapsulation + abstraction

    void deposit(int amount){ // Public method to deposit
        if(amount>0){ // Validation
            balance = balance + amount; // Add to balance
            cout << "Deposited " << amount << " New Balance " << balance << "\n"; // Print
        }
    }

    bool withdraw(int amount, string pwd){ // Withdraw needs password
        if(verifyPassword(pwd)==false){ // Check password using private method
            cout << "Wrong password!\n"; // Fail message
            return false; // Return false
        }
        if(amount>0 && amount<=balance){ // Check sufficient balance
            balance = balance - amount; // Deduct
            cout << "Withdrawn " << amount << " Remaining " << balance << "\n"; // Print
            return true; // Success
        }
        cout << "Insufficient balance\n"; // Fail
        return false;
    }

    int getBalance(string pwd){ // Getter with security check
        if(verifyPassword(pwd)){ // Verify first
            return balance; // Return balance if correct pwd
        }
        cout << "Access denied\n"; // Denied
        return -1; // Error value
    }

    void showInfo(){ // Abstraction - shows only essential info
        cout << "Bank Account - Balance protected via encapsulation\n"; // Info
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_04_00 - ENCAPSULATION & ABSTRACTION\n";
    cout << "================================================================\n\n";

    BankAccount acc("1234", 1000); // Create account with password 1234 and 1000 balance

    cout << "--- Encapsulation: Data hidden ---\n";
    // acc.balance = 100000; // ERROR private cannot access directly
    // acc.password = "hack"; // ERROR private

    acc.showInfo(); // Public interface
    acc.deposit(500); // Deposit via public method, balance internally updated

    cout << "\n--- Abstraction: Complexity hidden ---\n";
    cout << "User calls withdraw() but doesn't know verifyPassword() internal logic\n";
    acc.withdraw(200, "1234"); // Correct password, success
    acc.withdraw(100, "wrong"); // Wrong password, fail

    cout << "\nGet balance with correct pwd: " << acc.getBalance("1234") << "\n"; // Via getter with pwd check

    cout << "\nEncapsulation gives security + validation, Abstraction gives simplicity\n";

    cout << "\n================================================================\n";
    return 0;
}