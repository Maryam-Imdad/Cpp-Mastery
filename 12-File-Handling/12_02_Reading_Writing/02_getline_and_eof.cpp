#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_02_Reading_Writing / 02_getline_and_eof.cpp
    MOST IMPORTANT FOR INTERVIEWS

    getline() -> Solves space problem. Reads full line.
    eof() -> End Of File

    NEVER use: while(!file.eof()) { file >> x; } -> BAD, reads last line twice
    ALWAYS use: while(getline(file, line)) or while(file >> word)
*/

int main() {
    ofstream w("info.txt");
    w << "Maryam from Faisalabad\n";
    w << "Loves C++ Programming\n";
    w << "Learning File Handling Chapter 12";
    w.close();

    ifstream in("info.txt");
    string line;

    // METHOD 1: BEST METHOD - getline() - Reads entire line with spaces
    cout << "--- Using getline() - Best Method ---" << endl;
    while(getline(in, line)){ // getline(fileObject, stringVariable)
        cout << line << endl;
    }
    in.close();

    // METHOD 2: eof() demo (Understand but avoid this pattern)
    in.open("info.txt");
    cout << "\n--- Using eof() ---" << endl;
    while(!in.eof()){ // eof() returns true when pointer reaches end
        getline(in, line);
        cout << line << endl;
    }
    in.close();

    // METHOD 3: Mix - Count lines
    in.open("info.txt");
    int lineCount = 0;
    while(getline(in, line)){
        lineCount++;
    }
    cout << "\nTotal Lines: " << lineCount << endl;
    in.close();

    // REAL INTERVIEW TASK: Read file line by line
    cout << "\nFile reading complete!" << endl;

    return 0;
}