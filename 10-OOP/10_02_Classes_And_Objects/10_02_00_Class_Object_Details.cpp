#include <iostream>
using namespace std;
/*

FILE: 10_02_00_Class_Object_Details.cpp
TOPIC: Classes and Objects Deep Dive


PART A: BEGINNER - Structure

class ClassName {
  private: data hidden
  public: methods exposed
};

Object creation: ClassName obj; // Stack
ClassName *obj = new ClassName(); // Heap

Access via dot: obj.member
Access via pointer: ptr->member == (*ptr).member

PART B: INTERMEDIATE - Inside Class

Data Members: Variables inside class
Member Functions: Functions inside class, can access all data members

this pointer: Hidden pointer pointing to current object. When you write obj.display(), this = &obj
Used to resolve conflict: this->name = name;

PART C: ADVANCE - Memory & Types

Size of class: Sum of data members (with padding), methods don't take space per object, stored in code segment.
Empty class size = 1 byte (to identify distinct objects)

Types: You can have array of objects: Student s[10];
       Pointer to object: Student *p = &s1;

PART D: SCHOLAR - Interview

Q: Where are methods stored?
Ans: Code segment, single copy shared by all objects. Object stores only data.

Q: What is this pointer?
Ans: Implicit pointer to current object passed to every non-static member function.

Q: Class vs Structure in C++?
Ans: In C++ both same, difference: class default private, struct default public.
*/

class Student {
private: // Private, cannot access outside, data hiding
    int roll; // Roll number hidden

public: // Public accessible
    string name; // Name public for demo

    // Member function to set roll (setter)
    void setRoll(int r){ // Setter for private roll
        if(r>0){ // Validation logic
            roll = r; // Assign to private data
        }
        else{
            cout << "Invalid roll\n"; // Error message
        }
    }

    // Member function to get roll (getter)
    int getRoll(){ // Getter for private roll
        return roll; // Return private data
    }

    // Display method uses this pointer implicitly
    void display(){
        cout << "Name: " << this->name << " Roll: " << this->roll << "\n"; // this-> points to current object
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_02_00 - CLASS & OBJECT DETAILS\n";
    cout << "================================================================\n\n";

    Student s1; // Object s1 created in stack, memory for name+roll allocated
    s1.name = "Ali"; // Direct access because name is public
    s1.setRoll(101); // Access private roll via public setter method

    // s1.roll = 101; // ERROR because roll is private, cannot access directly
    cout << "s1 Roll via getter: " << s1.getRoll() << "\n"; // Use getter to read private
    s1.display(); // Call display, this points to s1 inside

    cout << "\nObject via pointer:\n";
    Student *ptr = &s1; // Pointer ptr stores address of s1 object
    cout << "ptr->name = " << ptr->name << "\n"; // Access via arrow operator
    ptr->display(); // Call via pointer using arrow

    cout << "\nSize of object:\n";
    cout << "sizeof(s1) = " << sizeof(s1) << " bytes\n"; // Size = data members only

    cout << "\n================================================================\n";
    return 0;
}