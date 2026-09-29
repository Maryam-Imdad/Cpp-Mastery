#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_03_Modes_and_Functions / 01_Seek_Tell.cpp

    File Pointer Concept: Like cursor in MS Word

    2 Pointers:
    1. get pointer -> For reading (controlled by seekg, tellg)
    2. put pointer -> For writing (controlled by seekp, tellp)

    4 Functions:
    tellg() -> Tell where get pointer is (position)
    tellp() -> Tell where put pointer is
    seekg() -> Move get pointer
    seekp() -> Move put pointer

    3 Directions:
    ios::beg -> From beginning (0)
    ios::cur -> From current position
    ios::end -> From end (-ve offset)

    Visualization: File "ABCDEFGHIJ"
    Positions: 0 1 2 3 4 5 6 7 8 9
*/

int main() {
    // Create file: ABCDEFGHIJ
    ofstream w("seek.txt");
    w << "ABCDEFGHIJ"; // 10 chars
    w.close();

    fstream file("seek.txt", ios::in | ios::out); // Read + Write mode

    cout << "Initial get position: " << file.tellg() << endl; // 0

    char ch;
    file.get(ch); // Read A, pointer moves to 1
    cout << "Read: " << ch << " | Now position: " << file.tellg() << endl;

    // seekg(offset, direction)
    file.seekg(5, ios::beg); // Go to 5th position from beginning
    file.get(ch);
    cout << "At position 5 (from beg): " << ch << endl; // F

    file.seekg(-2, ios::cur); // 2 steps back from current (current is 6, so 4)
    file.get(ch);
    cout << "2 back from current: " << ch << endl; // E

    file.seekg(-1, ios::end); // Last character
    file.get(ch);
    cout << "Last char ( -1 from end): " << ch << endl; // J

    // seekp - For writing
    file.seekp(0, ios::beg); // Go to beginning for writing
    file.put('Z'); // Overwrite A with Z
    cout << "\nFirst char overwritten with Z" << endl;

    file.close();

    // Verify
    ifstream verify("seek.txt");
    string content;
    getline(verify, content);
    cout << "File now: " << content << endl; // ZBCDEFGHIJ

    return 0;
}