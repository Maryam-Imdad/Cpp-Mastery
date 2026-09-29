#include <bits/stdc++.h>
#include <fstream> // Step 1: Must include this for File Handling
using namespace std;

/*
    Chapter 12 - File Handling
    12_01_Basics / 00_What_Is_File_Handling.cpp

    WHY FILE HANDLING?
    - Variables in RAM = Temporary. When program closes, data is gone.
    - File on Hard Disk = Permanent. Data stays forever.

    3 GOLDEN CLASSES (all inside <fstream>):
    1. ofstream -> 'o' for Output -> Used to WRITE to file (Program -> File)
    2. ifstream -> 'i' for Input  -> Used to READ from file (File -> Program)
    3. fstream  -> Both Read + Write

    Think: cin = keyboard to program
           cout = program to screen
           ifstream = file to program (like cin)
           ofstream = program to file (like cout)
*/

int main() {
    // ===== EXAMPLE 1: Write to file =====
    // This will create "myFile.txt" in the SAME folder where your .exe runs
    ofstream outFile("myFile.txt");

    // Always check if file opened successfully
    if (!outFile.is_open()) {
        cout << "Error: Could not create file!" << endl;
        return 1;
    }

    outFile << "Hello, This is my first file!" << endl;
    outFile << "My name is Maryam" << endl;
    outFile << "Learning C++ File Handling in 2026" << endl;

    outFile.close(); // IMPORTANT: Always close, otherwise data may not save
    cout << "File created successfully: myFile.txt" << endl;

    // ===== EXAMPLE 2: Read from file =====
    ifstream inFile("myFile.txt");
    
    if (!inFile.is_open()) {
        cout << "Error: File not found!" << endl;
        return 1;
    }

    string line;
    cout << "\n--- Reading from file ---" << endl;
    while (getline(inFile, line)) { // Read line by line
        cout << line << endl;
    }

    inFile.close();

    return 0;
}