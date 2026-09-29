#include <iostream>
using namespace std;

// Q1-Q10 Practice classes

class Person { // Base class for Q1
public:
    string name; // Name property
    int age; // Age property
    void displayPerson(){
        cout << "Name: " << name << " Age: " << age << "\n"; // Display base data
    }
};

class Student : public Person { // Single inheritance Q1
public:
    int roll; // Extra property for Student
    void displayStudent(){
        cout << "Student Name: " << name << " Age: " << age << " Roll: " << roll << "\n"; // All data including inherited
    }
};

class A { // For multilevel
public:
    void showA(){ cout << "Class A method\n"; } // Method A
};
class B : public A { // B inherits A
public:
    void showB(){ cout << "Class B method\n"; } // Method B
};
class C : public B { // C inherits B which inherits A - multilevel chain
public:
    void showC(){ cout << "Class C method\n"; } // Method C
};

class Base { // For constructor order
public:
    Base(){ cout << "Base Constructor called\n"; } // Base constructor
    ~Base(){ cout << "Base Destructor called\n"; } // Base destructor
};
class Derived : public Base {
public:
    Derived(){ cout << "Derived Constructor called\n"; } // Derived constructor after base
    ~Derived(){ cout << "Derived Destructor called\n"; } // Derived destructor before base
};

int main(){
    cout << "================================================================\n";
    cout << "10_05_01 - PRACTICE INHERITANCE (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Single inheritance Person -> Student
    cout << "Q1: Single inheritance Person->Student\n";
    Student s1; // Student object, has name,age from Person + roll own
    s1.name = "Ali"; // Inherited name from Person accessible because public inheritance
    s1.age = 20; // Inherited age
    s1.roll = 101; // Own roll
    s1.displayPerson(); // Inherited method from Person
    s1.displayStudent(); // Own method
    cout << "\n";

    // Q2: Multilevel A->B->C
    cout << "Q2: Multilevel A->B->C\n";
    C objC; // Object of C, should have methods of A,B,C all
    objC.showA(); // From A via B chain
    objC.showB(); // From B
    objC.showC(); // Own C
    cout << "C has all A+B+C methods due to multilevel\n\n";

    // Q3: Multiple inheritance (example with simple classes)
    cout << "Q3: Multiple inheritance\n";
    cout << "Syntax: class Child : public Father, public Mother {}\n";
    cout << "Child gets methods from both parents\n";
    // Implementation in theory file, concept explained
    cout << "Example: Child inherits propertyF() from Father and propertyM() from Mother\n\n";

    // Q4: Hierarchical one parent many children
    cout << "Q4: Hierarchical\n";
    cout << "Vehicle is parent, Car and Bike both inherit Vehicle\n";
    cout << "Car and Bike both have start() but different own features\n\n";

    // Q5: Constructor order Base first then Derived
    cout << "Q5: Constructor order\n";
    cout << "Creating Derived object:\n";
    Derived d; // Create Derived object, constructor order will show
    cout << "Derived object created, now destructor order will be reverse at end of scope\n\n";

    // Q6: Private members inherited but not directly accessible
    cout << "Q6: Private inheritance access\n";
    cout << "class Base{ private: int x; public: int y; }; class Child: public Base{}\n";
    cout << "Child object has x also but cannot access directly, only via Base getter/setter\n";
    cout << "Public members y accessible directly as child.y\n\n";

    // Q7: Access modes public protected private
    cout << "Q7: Access modes\n";
    cout << "public inheritance: public->public, protected->protected, private not accessible\n";
    cout << "protected inheritance: public->protected, protected->protected\n";
    cout << "private inheritance: public->private, protected->private\n";
    cout << "Most common is public inheritance\n\n";

    // Q8: Method overriding concept (child has same method name as parent)
    cout << "Q8: Method overriding (basic)\n";
    cout << "If parent and child both have same method void show(){}, child object calls its own show()\n";
    cout << "Parent method can be called via obj.Parent::show()\n\n";

    // Q9: Real world example Animal->Dog
    cout << "Q9: Real world Animal->Dog\n";
    cout << "Animal has eat(), sleep(), name\n";
    cout << "Dog inherits those and adds bark()\n";
    cout << "Hence code reusability, no need to rewrite eat() for Dog\n\n";

    // Q10: Diamond problem introduction
    cout << "Q10: Diamond Problem\n";
    cout << "A is base, B:A, C:A, D:B,C -> D gets two copies of A\n";
    cout << "Problem: ambiguity which A copy?\n";
    cout << "Solution: virtual inheritance class B: virtual public A {} and class C: virtual public A {}\n";
    cout << "Virtual ensures only one copy of A in D\n";

    cout << "\n================================================================\n";
    return 0;
}