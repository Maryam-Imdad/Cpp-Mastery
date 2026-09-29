#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_04_Practice / 00_Count_Words_Lines.cpp
    Interview Favorite - Word/Line/Char Counter
    Like: wc command in Linux
*/

int main() {
    // Create sample file
    ofstream w("count.txt");
    w << "Hello World\n";
    w << "C++ File Handling is powerful\n";
    w << "Practice makes perfect";
    w.close();

    ifstream in("count.txt");
    if(!in.is_open()){
        cout << "File not found!" << endl;
        return 1;
    }

    int lineCount = 0, wordCount = 0, charCount = 0;
    string line;

    while(getline(in, line)){
        lineCount++;
        charCount += line.length(); // Chars in this line (excluding newline)

        // Count words using stringstream
        stringstream ss(line);
        string word;
        while(ss >> word){
            wordCount++;
        }
    }

    cout << "--- File Statistics: count.txt ---" << endl;
    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters (without newlines): " << charCount << endl;
    cout << "Characters (with newlines): " << charCount + lineCount << endl;

    in.close();
    return 0;
}