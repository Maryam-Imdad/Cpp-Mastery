#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_02_Reading_Writing / 00_Writing_To_File.cpp
    Writing data: << operator and put()
*/

int main() {
    ofstream out("writing.txt");

    if(!out.is_open()){
        cout << "Error!" << endl;
        return 1;
    }

    // 1. Simple << operator (like cout)
    out << "Name: Maryam\n";
    out << "Age: 22\n";
    out << "City: Faisalabad\n";
    
    // 2. Writing variables
    int marks = 95;
    float gpa = 3.8;
    out << "Marks: " << marks << endl;
    out << "GPA: " << gpa << endl;

    // 3. Taking user input and saving to file
    string userName;
    cout << "Enter your name to save in file: ";
    cin >> userName;
    out << "User Entered: " << userName << endl;

    // 4. Writing with loop
    out << "\nNumbers 1 to 5:\n";
    for(int i=1; i<=5; i++){
        out << i << " ";
    }

    out.close();
    cout << "writing.txt created successfully!" << endl;

    return 0;
}