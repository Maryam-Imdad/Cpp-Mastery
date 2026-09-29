#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_04_Practice / 01_Copy_File.cpp
    Project: Copy one file to another - 2 methods
*/

int main() {
    // Create source file
    ofstream src("source.txt");
    src << "This is source file.\n";
    src << "It contains important data.\n";
    src << "It will be copied to destination.txt";
    src.close();

    // METHOD 1: Line by line (For Text Files) - Best
    ifstream inFile("source.txt");
    ofstream outFile("destination.txt");

    string line;
    while(getline(inFile, line)){
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
    cout << "Method 1: File copied line by line (Text Mode)" << endl;

    // METHOD 2: Char by char (For ALL Files - Binary + Text) - Universal
    ifstream inFile2("source.txt", ios::binary);
    ofstream outFile2("destination2.txt", ios::binary);

    char ch;
    while(inFile2.get(ch)){
        outFile2.put(ch);
    }
    inFile2.close();
    outFile2.close();
    cout << "Method 2: File copied char by char (Binary Mode) - Works for images too!" << endl;

    cout << "\nBoth destination.txt and destination2.txt created!" << endl;

    return 0;
}