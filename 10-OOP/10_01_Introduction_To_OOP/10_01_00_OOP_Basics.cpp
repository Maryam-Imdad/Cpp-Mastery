#include <iostream>
using namespace std;
/*

FILE: 11_01_00_OOP_Basics.cpp
TOPIC: Introduction to OOP - Why OOP?


PART A: BEGINNER - What is OOP?

OOP = Object Oriented Programming. Programming paradigm based on objects.

Procedure vs OOP:
Procedural (C): Focus on functions, data and functions separate
OOP (C++): Focus on objects, data and functions bound together in class

Object = Real world entity with properties and behavior
Example: Car has properties (color, speed) and behavior (start, brake)

Class = Blueprint / Design for object. Class is template, object is instance.
int a; // int is like class, a is object

PART B: INTERMEDIATE - 4 Pillars of OOP

1. Encapsulation: Binding data and methods together, hiding data using private
2. Abstraction: Showing only essential info, hiding complexity (abstract class)
3. Inheritance: Child class inherits properties from parent, code reusability
4. Polymorphism: One name many forms - function overloading, overriding

PART C: ADVANCE - Why OOP needed?

1. Code reusability via inheritance
2. Data security via encapsulation
3. Easy to maintain and modify
4. Real world modeling
5. Scalability for large projects

Structure: class -> object -> memory allocated for object

PART D: SCHOLAR - Interview

Q: Class vs Object?
Ans: Class is blueprint (logical), Object is instance (physical), memory allocated to object not class.

Q: What is POP vs OOP?
Ans: POP top-down, functions main focus, less secure. OOP bottom-up, objects focus, more secure via access modifiers.

Q: What is access specifier?
Ans: public (accessible everywhere), private (only inside class), protected (inside class + child).
*/

class Car {
public: // Access specifier public, accessible outside
    string color; // Property / Data member
    int speed; // Property

    void start(){ // Behavior / Member function
        cout << "Car started" << endl; // Print message
    }

    void brake(){ // Another behavior
        cout << "Car brake applied" << endl; // Print
    }
};

int main(){
    cout << "================================================================\n";
    cout << "11_01_00 - OOP BASICS\n";
    cout << "================================================================\n\n";

    cout << "Class is blueprint, Object is real instance\n\n";

    // Create object of Car class
    Car myCar; // myCar is object of class Car, memory allocated now

    // Access properties using dot operator
    myCar.color = "Red"; // Assign color to myCar
    myCar.speed = 120; // Assign speed

    cout << "My Car Color: " << myCar.color << "\n"; // Print property
    cout << "My Car Speed: " << myCar.speed << "\n"; // Print property

    // Call behaviors
    myCar.start(); // Call start method of myCar object
    myCar.brake(); // Call brake method

    cout << "\nAnother object of same class:\n";
    Car car2; // Second object, separate memory
    car2.color = "Blue"; // Different data
    car2.speed = 150;
    cout << "Car2 Color: " << car2.color << " Speed: " << car2.speed << "\n";

    cout << "\n4 Pillars: Encapsulation, Abstraction, Inheritance, Polymorphism\n";

    cout << "\n================================================================\n";
    return 0;
}