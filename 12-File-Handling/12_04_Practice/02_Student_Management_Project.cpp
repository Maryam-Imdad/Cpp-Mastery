#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    12_04_Practice / 02_Student_Management_Project.cpp
    FINAL PROJECT - Uses STL + File Handling + Loops

    Features:
    1. Add Student (Permanent storage with ios::app)
    2. Display All Students
    3. Search Student by ID
    4. Count Students

    This is how real database systems work!
*/

struct Student {
    int id;
    string name;
    float marks;
};

void addStudent() {
    Student s;
    cout << "\nEnter ID: "; cin >> s.id;
    cout << "Enter Name: "; cin >> s.name;
    cout << "Enter Marks: "; cin >> s.marks;

    // ios::app = Very important, otherwise old records will be deleted!
    ofstream out("students.txt", ios::app);
    out << s.id << " " << s.name << " " << s.marks << endl;
    out.close();
    cout << "Student Added Successfully! Saved permanently.\n";
}

void displayAll() {
    ifstream in("students.txt");
    if(!in.is_open()){
        cout << "No records found! File doesn't exist.\n";
        return;
    }

    Student s;
    cout << "\n--- All Students Record ---" << endl;
    cout << "ID\tName\tMarks\n";
    cout << "------------------------\n";
    bool empty = true;
    while(in >> s.id >> s.name >> s.marks){
        cout << s.id << "\t" << s.name << "\t" << s.marks << endl;
        empty = false;
    }
    if(empty) cout << "No students found!" << endl;
    in.close();
}

void searchStudent() {
    int searchId;
    cout << "\nEnter ID to search: "; cin >> searchId;
    ifstream in("students.txt");
    Student s;
    bool found = false;
    while(in >> s.id >> s.name >> s.marks){
        if(s.id == searchId){
            cout << "\n--- Found ---" << endl;
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "Marks: " << s.marks << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Student with ID " << searchId << " Not Found!\n";
    in.close();
}

void countStudents(){
    ifstream in("students.txt");
    int count = 0;
    string line;
    while(getline(in, line)){
        if(!line.empty()) count++;
    }
    cout << "\nTotal Students: " << count << endl;
    in.close();
}

int main() {
    int choice;
    cout << "=== STUDENT MANAGEMENT SYSTEM ===" << endl;
    cout << "Data stored in students.txt permanently" << endl;

    while(true){
        cout << "\n1. Add Student\n2. Display All\n3. Search by ID\n4. Count Students\n5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice==1) addStudent();
        else if(choice==2) displayAll();
        else if(choice==3) searchStudent();
        else if(choice==4) countStudents();
        else if(choice==5){
            cout << "Exiting... Data saved in students.txt" << endl;
            break;
        }
        else cout << "Invalid Choice!" << endl;
    }
    return 0;
}