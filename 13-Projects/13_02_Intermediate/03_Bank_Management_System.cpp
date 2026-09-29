#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13_02_Intermediate / 03_Bank_Management_System.cpp
    RESUME PROJECT #3 - Real Bank Logic

    Concepts: OOP Encapsulation, vector, file log with ios::app
    Real feature: Transaction history file (like real banks)
*/

class Account {
private:
    int accNo;
    char name[30];
    double balance;

public:
    void create(){
        cout << "Enter Account No: "; cin >> accNo;
        cout << "Enter Name: "; cin.ignore(); cin.getline(name, 30);
        cout << "Enter Initial Balance: "; cin >> balance;
    }

    void display() const {
        cout << left << setw(10) << accNo << setw(20) << name << setw(10) << balance << endl;
    }

    int getAccNo() const { return accNo; }
    double getBalance() const { return balance; }
    string getName() const { return string(name); }

    void deposit(double amount){ balance += amount; }
    bool withdraw(double amount){
        if(amount > balance) return false;
        balance -= amount;
        return true;
    }
};

vector<Account> accounts;
const string DATA_FILE = "13-Projects/13_02_Intermediate/bank_data.dat";
const string LOG_FILE = "13-Projects/13_02_Intermediate/bank_log.txt";

void saveData(){
    ofstream out(DATA_FILE, ios::binary | ios::out | ios::trunc);
    for(auto &a : accounts) out.write((char*)&a, sizeof(a));
    out.close();
}

void loadData(){
    accounts.clear();
    ifstream in(DATA_FILE, ios::binary | ios::in);
    if(!in) return;
    Account a;
    while(in.read((char*)&a, sizeof(a))) accounts.push_back(a);
    in.close();
}

void logTransaction(int accNo, string type, double amount){
    ofstream log(LOG_FILE, ios::app); // IMPORTANT: app mode for log
    time_t now = time(0);
    log << "Acc: " << accNo << " | " << type << " " << amount
        << " | Time: " << ctime(&now); // ctime adds \n automatically
    log.close();
}

void createAccount(){
    Account a; a.create();
    for(auto &ac : accounts){
        if(ac.getAccNo() == a.getAccNo()){
            cout << "Account No already exists!" << endl; return;
        }
    }
    accounts.push_back(a);
    saveData();
    logTransaction(a.getAccNo(), "Account Created", a.getBalance());
    cout << "Account Created!" << endl;
}

void displayAll(){
    if(accounts.empty()){ cout << "No accounts!" << endl; return; }
    cout << left << setw(10) << "AccNo" << setw(20) << "Name" << setw(10) << "Balance" << endl;
    cout << string(40, '-') << endl;
    for(auto &a : accounts) a.display();
}

void depositMoney(){
    int accNo; double amount;
    cout << "Enter Acc No: "; cin >> accNo;
    cout << "Enter Amount to Deposit: "; cin >> amount;
    for(auto &a : accounts){
        if(a.getAccNo() == accNo){
            a.deposit(amount);
            saveData();
            logTransaction(accNo, "Deposited", amount);
            cout << "Deposited! New Balance: " << a.getBalance() << endl;
            return;
        }
    }
    cout << "Account not found!" << endl;
}

void withdrawMoney(){
    int accNo; double amount;
    cout << "Enter Acc No: "; cin >> accNo;
    cout << "Enter Amount to Withdraw: "; cin >> amount;
    for(auto &a : accounts){
        if(a.getAccNo() == accNo){
            if(a.withdraw(amount)){
                saveData();
                logTransaction(accNo, "Withdrawn", amount);
                cout << "Withdrawn! New Balance: " << a.getBalance() << endl;
            } else {
                cout << "Insufficient Balance! Current: " << a.getBalance() << endl;
            }
            return;
        }
    }
    cout << "Account not found!" << endl;
}

void checkBalance(){
    int accNo; cout << "Enter Acc No: "; cin >> accNo;
    for(auto &a : accounts){
        if(a.getAccNo() == accNo){
            cout << "Account: " << a.getName() << " | Balance: " << a.getBalance() << endl;
            return;
        }
    }
    cout << "Not found!" << endl;
}

void showLog(){
    ifstream in(LOG_FILE);
    string line;
    cout << "\n--- Transaction Log (bank_log.txt) ---" << endl;
    while(getline(in, line)) cout << line << endl;
    in.close();
}

int main(){
    loadData();
    cout << "====== BANK MANAGEMENT SYSTEM ======" << endl;
    cout << "Loaded " << accounts.size() << " accounts" << endl;

    int choice;
    while(true){
        cout << "\n1.Create 2.Display All 3.Deposit 4.Withdraw 5.Check Balance 6.Transaction Log 7.Exit\nChoice: ";
        cin >> choice;
        if(choice==1) createAccount();
        else if(choice==2) displayAll();
        else if(choice==3) depositMoney();
        else if(choice==4) withdrawMoney();
        else if(choice==5) checkBalance();
        else if(choice==6) showLog();
        else if(choice==7) break;
        else cout << "Invalid!" << endl;
    }
    return 0;
}