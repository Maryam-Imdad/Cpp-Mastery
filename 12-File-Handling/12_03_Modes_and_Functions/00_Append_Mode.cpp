#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_03_Modes_and_Functions / 00_Append_Mode.cpp
    Practical Difference: out vs app

    ios::out = Overwrite - Like new register
    ios::app = Append - Continue writing in same register
*/

int main() {
    // Step 1: Create with out
    ofstream out("log.txt", ios::out);
    out << "Log 1: Program Started\n";
    out.close();

    // Step 2: Again with out - OLD DATA DELETED!
    out.open("log.txt", ios::out);
    out << "Log 2: User Logged In - Log 1 is GONE!\n";
    out.close();

    cout << "After ios::out, check log.txt: Only Log 2 exists" << endl;

    // Step 3: Now with app - OLD DATA SAVED!
    ofstream app("log.txt", ios::app);
    app << "Log 3: User did something - Log 2 still exists!\n";
    app << "Log 4: User Logged Out\n";
    app.close();

    cout << "After ios::app, check log.txt: Log 2 + Log 3 + Log 4 exist" << endl;

    // REAL USE CASE: Log file, Student record, Chat history
    // Always use ios::app for logs
    ofstream logFile("app_logs.txt", ios::app);
    logFile << "New entry at: " << __TIME__ << endl;
    logFile.close();

    // Reading final file
    ifstream in("log.txt");
    string line;
    cout << "\n--- Final log.txt content ---" << endl;
    while(getline(in, line)) cout << line << endl;

    return 0;
}