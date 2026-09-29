#include <iostream>
using namespace std;

// Class for Q1-Q10 practice

class Student {
public: // Public so accessible outside
    string name; // Data member for name
    int roll; // Data member for roll number
    void display(){ // Member function to display
        cout << "Name: " << name << " Roll: " << roll << "\n"; // Print
    }
};

class Car {
public:
    string brand; // Brand property
    void honk(){ // Method
        cout << "Car honks: Pee Pee\n"; // Print
    }
};

int main(){
    cout << "================================================================\n";
    cout << "11_01_01 - PRACTICE OOP CONCEPTS (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Create class Student and object
    cout << "Q1: Create Student object\n";
    Student s1; // Object s1 of class Student created, memory allocated
    s1.name = "Ali"; // Assign name using dot operator
    s1.roll = 101; // Assign roll
    cout << "s1.name = " << s1.name << " s1.roll = " << s1.roll << "\n\n"; // Print

    // Q2: Create multiple objects of same class
    cout << "Q2: Multiple objects\n";
    Student s2, s3; // Two more objects of same class
    s2.name = "Ahmed"; // Data for s2
    s2.roll = 102;
    s3.name = "Sara"; // Data for s3
    s3.roll = 103;
    cout << "s2: " << s2.name << " " << s2.roll << "\n"; // Print s2
    cout << "s3: " << s3.name << " " << s3.roll << "\n\n"; // Print s3

    // Q3: Call member function using object
    cout << "Q3: Call member function display()\n";
    s1.display(); // Call display method for s1, will print s1 data
    s2.display(); // Call for s2
    cout << "\n";

    // Q4: Class with method honk()
    cout << "Q4: Car class with method\n";
    Car c1; // Car object
    c1.brand = "Toyota"; // Assign brand
    cout << "Brand: " << c1.brand << "\n"; // Print brand
    c1.honk(); // Call honk method
    cout << "\n";

    // Q5: Object memory - each object separate
    cout << "Q5: Each object separate memory\n";
    cout << "Address of s1.roll: " << &s1.roll << "\n"; // Address of s1's roll
    cout << "Address of s2.roll: " << &s2.roll << "\n"; // Different address
    cout << "Hence objects have separate memory\n\n";

    // Q6: POP vs OOP concept
    cout << "Q6: POP vs OOP\n";
    cout << "POP: Data moves freely, functions separate, less secure\n";
    cout << "OOP: Data and function bound in class, secure via private\n\n";

    // Q7: Access specifiers demo - public
    cout << "Q7: Public access specifier\n";
    cout << "public members accessible outside class using obj.member\n";
    cout << "s1.name accessible because name is public\n\n";

    // Q8: Why class? Blueprint concept
    cout << "Q8: Class is blueprint\n";
    cout << "Class Student is blueprint, s1,s2,s3 are real houses built from it\n";
    cout << "Class itself takes no memory, object takes memory\n\n";

    // Q9: 4 Pillars listing
    cout << "Q9: 4 Pillars of OOP\n";
    cout << "1. Encapsulation - wrapping data+methods, data hiding\n";
    cout << "2. Abstraction - showing only essential, hiding background\n";
    cout << "3. Inheritance - child inherits from parent\n";
    cout << "4. Polymorphism - one name many forms\n\n";

    // Q10: Real world example mapping
    cout << "Q10: Real world mapping\n";
    cout << "Real Object: Human\n";
    cout << "Properties: name, age, height -> become data members\n";
    cout << "Behaviors: walk(), talk(), eat() -> become member functions\n";
    cout << "Class Human bundles them\n";

    cout << "\n================================================================\n";
    return 0;
}