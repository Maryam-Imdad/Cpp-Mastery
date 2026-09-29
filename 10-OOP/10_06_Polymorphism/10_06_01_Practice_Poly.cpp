#include <iostream>
using namespace std;

// Q1-Q3 Function overloading

class Calculator {
public:
    int add(int a, int b){ // Add two ints version
        cout << "add(int,int) called\n"; // Trace which version
        return a+b; // Return sum
    }
    int add(int a, int b, int c){ // Add three ints overloaded
        cout << "add(int,int,int) called\n"; // Trace
        return a+b+c; // Return sum
    }
    double add(double a, double b){ // Add two doubles overloaded
        cout << "add(double,double) called\n"; // Trace
        return a+b; // Return double sum
    }
};

class Shape { // Base for runtime
public:
    virtual void area(){ // Virtual area
        cout << "Shape area generic\n"; // Generic
    }
    virtual ~Shape(){} // Virtual destructor
};

class Circle : public Shape {
public:
    int radius; // Radius property
    Circle(int r){ radius=r; } // Constructor to set radius
    void area() override { // Override area
        cout << "Circle area: " << 3.14*radius*radius << "\n"; // Circle formula
    }
};

class Rectangle : public Shape {
public:
    int l,b; // Length breadth
    Rectangle(int x,int y){ l=x; b=y; } // Constructor
    void area() override { // Override
        cout << "Rectangle area: " << l*b << "\n"; // Rectangle formula
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_06_01 - PRACTICE POLYMORPHISM (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Function overloading same name different params
    cout << "Q1: Function overloading add()\n";
    Calculator calc; // Calculator object
    cout << "calc.add(2,3) = " << calc.add(2,3) << "\n"; // Calls add(int,int)
    cout << "calc.add(2,3,4) = " << calc.add(2,3,4) << "\n"; // Calls add(int,int,int)
    cout << "calc.add(2.5,3.5) = " << calc.add(2.5,3.5) << "\n\n"; // Calls add(double,double)

    // Q2: Overloading vs different return type only not allowed
    cout << "Q2: Overloading rule\n";
    cout << "Only return type different is NOT overloading: int add() and double add() same params -> ERROR\n";
    cout << "Must differ in number or type of parameters\n\n";

    // Q3: Compile-time resolved
    cout << "Q3: Compile-time polymorphism\n";
    cout << "Which add() version to call decided at compile time based on arguments\n";
    cout << "Hence called static polymorphism\n\n";

    // Q4: Overriding basic without virtual
    cout << "Q4: Overriding without virtual problem\n";
    cout << "If Base *p = new Derived(); p->show(); without virtual, Base::show() called always\n";
    cout << "Child's overridden method not called - no runtime polymorphism\n\n";

    // Q5: Overriding with virtual success
    cout << "Q5: Overriding with virtual success\n";
    Shape *s; // Base pointer
    Circle c(5); // Circle radius 5
    Rectangle r(4,5); // Rectangle 4x5
    s = &c; // Point to Circle
    cout << "Shape *s = &Circle, s->area(): ";
    s->area(); // Calls Circle::area() because virtual
    s = &r; // Point to Rectangle
    cout << "Shape *s = &Rectangle, s->area(): ";
    s->area(); // Calls Rectangle::area()
    cout << "Same call s->area() different forms based on object - runtime polymorphism\n\n";

    // Q6: Why virtual needed
    cout << "Q6: Why virtual needed\n";
    cout << "Virtual creates vtable (table of function pointers) and vptr in object\n";
    cout << "At runtime, vptr checks vtable to find correct overridden function\n";
    cout << "Without virtual, no vtable, compile time binds to base version\n\n";

    // Q7: Pure virtual and abstract class
    cout << "Q7: Pure virtual and abstract class\n";
    cout << "Syntax: virtual void area()=0; // pure virtual, no body\n";
    cout << "Class with at least one pure virtual is abstract class, cannot create object\n";
    cout << "Child must override pure virtual otherwise child also abstract\n";
    cout << "Used to create interface: 100% abstraction\n\n";

    // Q8: Abstract class example concept
    cout << "Q8: Abstract class example\n";
    cout << "class Shape{ virtual void area()=0; }; // abstract\n";
    cout << "Shape s; // ERROR cannot instantiate abstract\n";
    cout << "Circle c(5); // OK because Circle overrides area()\n\n";

    // Q9: Virtual destructor importance
    cout << "Q9: Virtual destructor importance\n";
    cout << "Base *p = new Child(); delete p;\n";
    cout << "If base destructor not virtual, only Base destructor called, Child destructor skipped -> memory leak\n";
    cout << "If virtual, Child destructor called first then Base, proper cleanup\n\n";

    // Q10: Overloading vs Overriding difference table
    cout << "Q10: Difference Overloading vs Overriding\n";
    cout << "Overloading: Same class, same name, diff params, compile-time, no inheritance needed\n";
    cout << "Overriding: Different classes (parent-child), same name same params, runtime, needs inheritance + virtual\n";
    cout << "Overloading is static polymorphism, Overriding is dynamic polymorphism\n";

    cout << "\n================================================================\n";
    return 0;
}