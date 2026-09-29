#include <iostream>
using namespace std;
/*

FILE: 10_03_00_Constructor_Types.cpp
TOPIC: Constructors and Destructors


PART A: BEGINNER - What is Constructor?

Constructor is special method with same name as class, no return type, called automatically when object created.
Purpose: Initialize object.

Types:
1. Default: No parameters, Student(){}
2. Parameterized: With parameters, Student(int r, string n)
3. Copy: Student(Student &other) copies other object

If you don't write any, compiler gives default constructor automatically.

Destructor: ~ClassName(), called when object destroyed, free resources, no parameters, one only.

PART B: INTERMEDIATE - How it works

Student s1; // Default constructor called
Student s2(101,"Ali"); // Parameterized called
Student s3 = s2; // Copy constructor called

Constructor can be overloaded (multiple constructors same name different params).

Destructor called when object goes out of scope or delete.

PART C: ADVANCE - Initialization List & Order

Constructor initialization list: Student(int r): roll(r) {} faster.

Order: Base constructor first then derived. Destructor reverse.

If you create object with new, destructor only called when delete.

PART D: SCHOLAR - Interview

Q: Constructor vs Method?
Ans: Same name as class, no return type, auto called on creation, cannot be called explicitly like method.

Q: Can constructor be private?
Ans: Yes, for Singleton pattern, prevents object creation outside.

Q: Types of copy?
Ans: Shallow copy copies pointer address (default), Deep copy allocates new memory and copies value.
*/

class Student {
public:
    int roll; // Data member
    string name; // Data member

    // 1. Default Constructor - no parameters
    Student(){
        cout << "Default Constructor called\n"; // Message when called
        roll = 0; // Initialize roll to 0
        name = "Unknown"; // Initialize name
    }

    // 2. Parameterized Constructor - with parameters
    Student(int r, string n){
        cout << "Parameterized Constructor called for " << n << "\n"; // Message
        roll = r; // Assign parameter r to member roll
        name = n; // Assign parameter n to member name
    }

    // 3. Copy Constructor - copies another object
    Student(Student &other){
        cout << "Copy Constructor called, copying " << other.name << "\n"; // Message
        roll = other.roll; // Copy roll from other object
        name = other.name; // Copy name from other
    }

    // Destructor - called when object destroyed
    ~Student(){
        cout << "Destructor called for " << name << "\n"; // Message
    }

    void display(){
        cout << "Roll: " << roll << " Name: " << name << "\n"; // Print data
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_03_00 - CONSTRUCTOR TYPES\n";
    cout << "================================================================\n\n";

    cout << "Creating s1 with default:\n";
    Student s1; // Default constructor auto called, no parameters
    s1.display(); // Show initialized values
    cout << "\n";

    cout << "Creating s2 with parameterized:\n";
    Student s2(101, "Ali"); // Parameterized constructor called with args
    s2.display();
    cout << "\n";

    cout << "Creating s3 as copy of s2:\n";
    Student s3 = s2; // Copy constructor called, s3 copied from s2
    s3.display();
    cout << "\n";

    cout << "End of main, destructors will be called in reverse order:\n";
    // Destructor called automatically for s3, s2, s1 in reverse order of creation

    cout << "\n================================================================\n";
    return 0;
}