#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_02_Reading_Writing / 01_Reading_From_File.cpp
    Reading: >> , get(), char by char

    Problem: >> stops at space. "Aman Kumar" -> reads only "Aman"
*/

int main() {
    // First create a file to read
    ofstream w("read.txt");
    w << "Hello World 123\nC++ File Handling\nFaisalabad Pakistan";
    w.close();

    ifstream in("read.txt");

    // METHOD 1: >> operator (word by word, like cin)
    cout << "--- Method 1: Using >> (word by word) ---" << endl;
    string word;
    while(in >> word){ // Stops at space or newline
        cout << word << endl;
    }
    in.close();

    // METHOD 2: get() - Reads single character including spaces/newlines
    in.open("read.txt");
    cout << "\n--- Method 2: Using get() (char by char) ---" << endl;
    char ch;
    int count = 0;
    while(in.get(ch) && count < 20){ // Read first 20 chars
        cout << ch;
        count++;
    }
    in.close();

    // METHOD 3: Read all with loop
    in.open("read.txt");
    cout << "\n\n--- Method 3: Full file char by char ---" << endl;
    while(in.get(ch)){
        cout << ch;
    }
    in.close();

    return 0;
}