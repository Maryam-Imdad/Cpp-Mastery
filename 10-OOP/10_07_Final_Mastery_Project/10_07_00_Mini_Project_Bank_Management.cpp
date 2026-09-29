#include <iostream>
#include <vector>
using namespace std;
/*

PROJECT: Bank Management System using OOP
Features: Encapsulation + Inheritance + Polymorphism + Constructor

*/

class BankAccount { // Base class abstraction
private: // Encapsulation - sensitive data private
    int accountNumber; // Private account number
    double balance; // Private balance
    string password; // Private password

    bool verifyPassword(string pwd){ // Private verification hidden
        return pwd == password; // Return true if match
    }

public:
    string holderName; // Public name

    // Constructor
    BankAccount(int accNo, string name, string pwd, double initial){
        accountNumber = accNo; // Init account number
        holderName = name; // Init holder name
        password = pwd; // Init password
        balance = initial; // Init balance
        cout << "Account created for " << holderName << " AccNo " << accountNumber << "\n"; // Message
    }

    virtual ~BankAccount(){ // Virtual destructor for polymorphism
        cout << "Account closed for " << holderName << "\n"; // Message
    }

    // Deposit method
    void deposit(double amount){
        if(amount>0){ // Validation
            balance += amount; // Add to balance
            cout << "Deposited " << amount << " New Balance " << balance << "\n"; // Print
        }
        else{
            cout << "Invalid deposit amount\n"; // Error
        }
    }

    // Withdraw with password check
    bool withdraw(double amount, string pwd){
        if(!verifyPassword(pwd)){ // Check password first
            cout << "Wrong password!\n"; // Wrong
            return false; // Fail
        }
        if(amount>0 && amount<=balance){ // Check sufficient
            balance -= amount; // Deduct
            cout << "Withdrawn " << amount << " Remaining " << balance << "\n"; // Print
            return true; // Success
        }
        cout << "Insufficient balance\n"; // Fail
        return false;
    }

    double getBalance(string pwd){ // Getter with security
        if(verifyPassword(pwd)){ // Verify
            return balance; // Return balance
        }
        cout << "Access denied wrong password\n"; // Denied
        return -1; // Error
    }

    int getAccountNumber(){ // Getter for acc number
        return accountNumber; // Return
    }

    virtual void display(){ // Virtual for overriding
        cout << "Account No: " << accountNumber << " Holder: " << holderName << " Balance: " << balance << "\n"; // Display
    }
};

// Inheritance: SavingsAccount inherits BankAccount
class SavingsAccount : public BankAccount { // Savings is-a BankAccount
private:
    double interestRate; // Extra property for savings

public:
    // Constructor calls base constructor via initialization list concept using base constructor call
    SavingsAccount(int accNo, string name, string pwd, double initial, double rate)
        : BankAccount(accNo, name, pwd, initial){ // Call base constructor
        interestRate = rate; // Init interest rate
        cout << "Savings Account with interest " << interestRate << "%\n"; // Message
    }

    void addInterest(){ // Savings specific method
        double interest = getBalance("temp") ; // We need password but for demo we calculate differently
        // For simplicity we will use internal logic via display override concept
        cout << "Adding interest " << interestRate << "% to account\n"; // Message
        // In real we would need access to balance via protected, for demo deposit interest
        // We'll deposit interest manually via public method using known password in real project we store pwd
    }

    // Override display for polymorphism
    void display() override {
        cout << "[Savings] "; // Tag
        BankAccount::display(); // Call base display
        cout << " Interest Rate: " << interestRate << "%\n"; // Extra info
    }
};

// Inheritance: CurrentAccount
class CurrentAccount : public BankAccount {
private:
    double overdraftLimit; // Extra property

public:
    CurrentAccount(int accNo, string name, string pwd, double initial, double limit)
        : BankAccount(accNo, name, pwd, initial){ // Base constructor
        overdraftLimit = limit; // Init limit
        cout << "Current Account with overdraft " << overdraftLimit << "\n"; // Message
    }

    void display() override { // Override
        cout << "[Current] "; // Tag
        BankAccount::display(); // Base display
        cout << " Overdraft Limit: " << overdraftLimit << "\n"; // Extra
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_07_00 - MINI PROJECT: BANK MANAGEMENT SYSTEM OOP\n";
    cout << "================================================================\n\n";

    cout << "Creating accounts (Constructor called):\n";
    BankAccount *acc1 = new SavingsAccount(1001, "Ali", "1234", 1000, 5.0); // Savings account via base pointer
    BankAccount *acc2 = new CurrentAccount(1002, "Sara", "5678", 2000, 1000); // Current via base pointer

    cout << "\n--- Polymorphism: Base pointer calling overridden display() ---\n";
    acc1->display(); // Calls SavingsAccount::display() because virtual
    acc2->display(); // Calls CurrentAccount::display()

    cout << "\n--- Encapsulation: Deposit and Withdraw with password ---\n";
    acc1->deposit(500); // Deposit 500 to Ali
    acc1->withdraw(200, "1234"); // Correct password withdraw 200
    acc1->withdraw(100, "wrong"); // Wrong password fail

    cout << "\nBalance check for Ali with correct pwd: " << acc1->getBalance("1234") << "\n"; // Get balance
    cout << "Balance check with wrong pwd: " << acc1->getBalance("wrong") << " (denied)\n"; // Denied

    cout << "\n--- Vector of accounts managing many objects ---\n";
    vector<BankAccount*> bank; // Vector of base pointers stores many accounts
    bank.push_back(acc1); // Add acc1
    bank.push_back(acc2); // Add acc2

    cout << "Display all accounts via loop (polymorphism):\n";
    for(int i=0;i<bank.size();i++){ // Loop all accounts
        bank[i]->display(); // Each calls correct overridden version
    }

    cout << "\n--- Cleaning up (Virtual Destructor called) ---\n";
    for(int i=0;i<bank.size();i++){ // Delete all
        delete bank[i]; // Virtual destructor ensures child then base destructor
    }

    cout << "\n================================================================\n";
    cout << "PROJECT DONE - Uses all 4 pillars: Class,Object,Encapsulation,Inheritance,Polymorphism\n";
    cout << "================================================================\n";
    return 0;
}