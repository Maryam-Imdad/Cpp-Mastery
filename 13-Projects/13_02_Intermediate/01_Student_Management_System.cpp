#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13_02_Intermediate / 01_Student_Management_System.cpp
    RESUME PROJECT #1

    Concepts Combined:
    Chapter 6 (Structures) + Chapter 9 (STL vector, sort, lambda) +
    Chapter 10 (OOP Class) + Chapter 12 (File Handling binary)

    Features:
    - Class based (Encapsulation)
    - vector<Student> for dynamic storage
    - Permanent storage in binary file students_full.dat
    - CRUD + Search + Sort + Topper + File Persistence
*/

class Student {
public:
    int id;
    char name[30]; // char[] for binary file compatibility
    float gpa;
    int age;

    void input(){
        cout << "Enter ID: "; cin >> id;
        cout << "Enter Name: "; cin.ignore(); cin.getline(name, 30);
        cout << "Enter GPA: "; cin >> gpa;
        cout << "Enter Age: "; cin >> age;
    }

    void display() const {
        cout << left << setw(6) << id
             << setw(20) << name
             << setw(6) << gpa
             << setw(4) << age << endl;
    }
};

vector<Student> students;
const string FILE = "13-Projects/13_02_Intermediate/students_full.dat";

// ===== File Handling Functions =====
void saveToFile(){
    ofstream out(FILE, ios::binary | ios::out | ios::trunc);
    for(auto &s : students){
        out.write((char*)&s, sizeof(s));
    }
    out.close();
}

void loadFromFile(){
    students.clear();
    ifstream in(FILE, ios::binary | ios::in);
    if(!in) return;
    Student s;
    while(in.read((char*)&s, sizeof(s))){
        students.push_back(s);
    }
    in.close();
}

// ===== Core Features =====
void addStudent(){
    Student s;
    s.input();
    // Check duplicate ID
    for(auto &st : students){
        if(st.id == s.id){
            cout << "Error: ID " << s.id << " already exists!" << endl;
            return;
        }
    }
    students.push_back(s);
    saveToFile();
    cout << "Student Added! Total: " << students.size() << endl;
}

void displayAll(){
    if(students.empty()){
        cout << "No records found!" << endl;
        return;
    }
    cout << "\n" << left << setw(6) << "ID" << setw(20) << "Name" << setw(6) << "GPA" << setw(4) << "Age" << endl;
    cout << string(40, '-') << endl;
    for(auto &s : students) s.display();
}

void searchById(){
    int searchId; cout << "Enter ID to search: "; cin >> searchId;
    for(auto &s : students){
        if(s.id == searchId){
            cout << "\nStudent Found:\n";
            cout << left << setw(6) << "ID" << setw(20) << "Name" << setw(6) << "GPA" << endl;
            cout << string(40, '-') << endl;
            s.display();
            return;
        }
    }
    cout << "Student with ID " << searchId << " not found!" << endl;
}

void deleteById(){
    int delId; cout << "Enter ID to delete: "; cin >> delId;
    auto it = remove_if(students.begin(), students.end(),
        [delId](Student &s){ return s.id == delId; });

    if(it!= students.end()){
        students.erase(it, students.end());
        saveToFile();
        cout << "Deleted! Remaining: " << students.size() << endl;
    } else {
        cout << "ID not found!" << endl;
    }
}

void sortByGPA(){
    sort(students.begin(), students.end(),
        [](Student &a, Student &b){ return a.gpa > b.gpa; }); // Descending
    cout << "Sorted by GPA (High to Low):" << endl;
    displayAll();
    saveToFile();
}

void showTopper(){
    if(students.empty()){ cout << "No data!" << endl; return; }
    auto maxIt = max_element(students.begin(), students.end(),
        [](Student &a, Student &b){ return a.gpa < b.gpa; });
    cout << "\n🏆 Topper: " << endl;
    maxIt->display();
}

void updateStudent(){
    int upId; cout << "Enter ID to update: "; cin >> upId;
    for(auto &s : students){
        if(s.id == upId){
            cout << "Enter new details:\n";
            s.input();
            saveToFile();
            cout << "Updated!" << endl;
            return;
        }
    }
    cout << "ID not found!" << endl;
}

int main() {
    loadFromFile();
    cout << "====== STUDENT MANAGEMENT SYSTEM ======" << endl;
    cout << "Loaded " << students.size() << " students from file" << endl;

    int choice;
    while(true){
        cout << "\n1.Add 2.Display 3.Search 4.Delete 5.Sort by GPA 6.Topper 7.Update 8.Exit\n";
        cout << "Choice: "; cin >> choice;
        if(choice==1) addStudent();
        else if(choice==2) displayAll();
        else if(choice==3) searchById();
        else if(choice==4) deleteById();
        else if(choice==5) sortByGPA();
        else if(choice==6) showTopper();
        else if(choice==7) updateStudent();
        else if(choice==8){ cout << "Data Saved. Bye!" << endl; break; }
        else cout << "Invalid!" << endl;
    }
    return 0;
}