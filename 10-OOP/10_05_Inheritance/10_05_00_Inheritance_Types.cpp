#include <iostream>
using namespace std;
/*

FILE: 10_05_00_Inheritance_Types.cpp
TOPIC: Inheritance Types


PART A: BEGINNER - What is Inheritance?

Inheritance: Child class inherits properties and methods from parent class. Reusability.

Parent / Base / Super class -> Child / Derived / Sub class

Syntax: class Child : accessMode Parent { };

Access Modes:
public: public of parent stays public in child
protected: public becomes protected
private: public becomes private

PART B: INTERMEDIATE - Types of Inheritance

1. Single: One parent one child: class B : public A {}
2. Multilevel: Chain: A -> B -> C
3. Multiple: One child many parents: class C : public A, public B {}
4. Hierarchical: One parent many children: B:A, C:A
5. Hybrid: Mix of above, needs virtual to avoid diamond problem

PART C: ADVANCE - Constructor Order & Diamond

Constructor: Base first then Derived
Destructor: Derived first then Base

Diamond Problem: D inherits B,C both inherit A. D gets two copies of A.
Solution: virtual inheritance: class B : virtual public A {}

PART D: SCHOLAR - Interview

Q: Why inheritance?
Ans: Code reusability, extendibility, polymorphism, real world hierarchy.

Q: Can private be inherited?
Ans: Private members inherited but not accessible directly in child, need getter.

Q: What is super()?
Ans: In C++ child constructor calls parent constructor via initialization list: Child(int x): Parent(x){}
*/

// Single Inheritance Example
class Animal { // Base / Parent class
public:
    string name; // Property common to all animals
    void eat(){ // Method common
        cout << name << " is eating\n"; // Print
    }
    void sleep(){
        cout << name << " is sleeping\n";
    }
};

class Dog : public Animal { // Derived / Child inherits from Animal, public mode
public:
    void bark(){ // Extra method only for Dog
        cout << name << " is barking Woof!\n"; // Dog specific
    }
};

// Multilevel: Animal -> Dog -> Puppy
class Puppy : public Dog { // Puppy inherits Dog which inherits Animal
public:
    void weep(){
        cout << name << " is weeping (puppy)\n";
    }
};

// Multiple Inheritance
class Father {
public:
    void propertyF(){ cout << "Father property\n"; }
};
class Mother {
public:
    void propertyM(){ cout << "Mother property\n"; }
};
class Child : public Father, public Mother { // Child inherits both Father and Mother
public:
    void own(){ cout << "Child own property + both parents\n"; }
};

// Hierarchical: One parent many children
class Vehicle {
public:
    void start(){ cout << "Vehicle start\n"; }
};
class Car : public Vehicle { public: void carFeature(){ cout << "Car has 4 wheels\n"; } };
class Bike : public Vehicle { public: void bikeFeature(){ cout << "Bike has 2 wheels\n"; } };

int main(){
    cout << "================================================================\n";
    cout << "10_05_00 - INHERITANCE TYPES\n";
    cout << "================================================================\n\n";

    cout << "--- Single Inheritance: Dog inherits Animal ---\n";
    Dog d; // Dog object
    d.name = "Tommy"; // Inherited property from Animal, accessible because public inheritance
    d.eat(); // Inherited method from Animal
    d.sleep(); // Inherited
    d.bark(); // Own method of Dog
    cout << "\n";

    cout << "--- Multilevel: Puppy -> Dog -> Animal ---\n";
    Puppy p; // Puppy object
    p.name = "Small Tommy"; // From Animal via Dog
    p.eat(); // From Animal via Dog
    p.bark(); // From Dog
    p.weep(); // Own
    cout << "\n";

    cout << "--- Multiple: Child inherits Father and Mother ---\n";
    Child c; // Child object
    c.propertyF(); // From Father
    c.propertyM(); // From Mother
    c.own(); // Own
    cout << "\n";

    cout << "--- Hierarchical: Car and Bike both inherit Vehicle ---\n";
    Car car; // Car object
    car.start(); // From Vehicle
    car.carFeature(); // Own
    Bike bike; // Bike object
    bike.start(); // From Vehicle same parent
    bike.bikeFeature(); // Own
    cout << "\n";

    cout << "Constructor order: Base first then Derived\n";
    cout << "Destructor order: Derived first then Base (reverse)\n";

    cout << "\n================================================================\n";
    return 0;
}