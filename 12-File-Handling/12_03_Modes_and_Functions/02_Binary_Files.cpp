#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_03_Modes_and_Functions / 02_Binary_Files.cpp

    Text Mode vs Binary Mode:
    Text: Human readable, \n translated -> Slower
    Binary: Raw bytes, no translation -> Faster, for objects/images

    To save object: write((char*)&obj, sizeof(obj))
    To read object: read((char*)&obj, sizeof(obj))
*/

struct Student {
    int id;
    char name[20]; // Use char[] not string for binary (string is complex)
    float gpa;
};

int main() {
    Student s1;
    s1.id = 101;
    strcpy(s1.name, "Maryam"); // strcpy for char array
    s1.gpa = 3.9f;

    // ===== WRITE OBJECT IN BINARY =====
    ofstream outFile("student.dat", ios::binary | ios::out);
    if(!outFile){
        cout << "Error creating binary file!" << endl;
        return 1;
    }
    outFile.write((char*)&s1, sizeof(s1)); // Write raw bytes
    outFile.close();
    cout << "Object written to student.dat (binary)" << endl;

    // ===== READ OBJECT FROM BINARY =====
    Student s2;
    ifstream inFile("student.dat", ios::binary | ios::in);
    inFile.read((char*)&s2, sizeof(s2)); // Read raw bytes
    inFile.close();

    cout << "\n--- Read from binary ---" << endl;
    cout << "ID: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;
    cout << "GPA: " << s2.gpa << endl;

    // Writing multiple objects
    ofstream out2("allStudents.dat", ios::binary | ios::out);
    Student students[2] = {{102, "Aman", 3.8f}, {103, "Ali", 3.5f}};
    out2.write((char*)&students, sizeof(students));
    out2.close();

    cout << "\nMultiple objects saved in binary - Used for real database" << endl;

    return 0;
}