#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_01_Basics / 01_Open_Close_Modes.cpp

    2 Ways to Open a File + 5 Open Modes

    WAY 1: Using Constructor
    ofstream out("file.txt");

    WAY 2: Using open() function
    ofstream out;
    out.open("file.txt");

    ALWAYS check is_open() and ALWAYS close()

    5 MODES (Most Important for Interview):
    ios::out   -> Write mode (Default for ofstream) - Deletes old data
    ios::in    -> Read mode (Default for ifstream)
    ios::app   -> Append mode - Adds data at end, keeps old data
    ios::trunc -> Truncate - Deletes file content if file exists
    ios::binary-> Binary mode - For images/videos/objects
*/

int main() {
    // ===== WAY 1: Constructor method =====
    ofstream file1("way1.txt");
    if(file1.is_open()){
        file1 << "Opened with Constructor\n";
        file1.close();
        cout << "way1.txt created (Constructor method)" << endl;
    }

    // ===== WAY 2: open() method =====
    ofstream file2;
    file2.open("way2.txt");
    if(file2.is_open()){
        file2 << "Opened with open() function\n";
        file2.close();
        cout << "way2.txt created (open() method)" << endl;
    }

    // ===== DEMO: out vs app vs trunc =====
    
    // 1. ios::out - Will OVERWRITE (delete old content)
    ofstream out("demo.txt", ios::out);
    out << "Line 1 - Written with out\n";
    out.close();

    ofstream out2("demo.txt", ios::out); // Opens same file again
    out2 << "Line 2 - Old data GONE! Only this remains\n";
    out2.close();
    cout << "\nCheck demo.txt after ios::out: Only Line 2 will be there" << endl;

    // 2. ios::app - Will PRESERVE + ADD AT END
    ofstream app("demo.txt", ios::app);
    app << "Line 3 - Appended, Line 2 still there!\n";
    app.close();
    cout << "Check demo.txt after ios::app: Line 2 + Line 3 will be there" << endl;

    // 3. ios::trunc - Explicitly deletes content
    ofstream truncFile("demo.txt", ios::out | ios::trunc);
    truncFile << "Line 4 - Truncated! All old data deleted\n";
    truncFile.close();

    // 4. fstream can do both read + write
    fstream both;
    both.open("both.txt", ios::out); // Write first
    both << "Hello from fstream";
    both.close();

    both.open("both.txt", ios::in); // Then read
    string content;
    both >> content;
    cout << "\nRead from fstream: " << content << endl;
    both.close();

    // 5. Check if file exists using ifstream
    ifstream check("demo.txt");
    if(check.good()){ // or is_open()
        cout << "\nFile exists and is ready to read!" << endl;
    }
    check.close();

    return 0;
}