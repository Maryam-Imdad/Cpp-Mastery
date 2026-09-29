#include <iostream>
using namespace std;
/*

FILE: 10_06_00_Polymorphism_Virtual.cpp
TOPIC: Polymorphism - Virtual, Overloading, Overriding


PART A: BEGINNER - What is Polymorphism?

Poly = many, Morph = forms. One name many forms.
Example: Same function name works differently for different objects.

Two types:
1. Compile-time (Static): Resolved at compile time - Function Overloading, Operator Overloading
2. Runtime (Dynamic): Resolved at runtime - Virtual functions, Overriding

PART B: INTERMEDIATE - Implementation

1. Function Overloading: Same name different parameters in same class
   void add(int a,int b) {} void add(int a,int b,int c) {} void add(double a,double b){}

2. Operator Overloading: Redefine operator for class: Complex c3 = c1 + c2

3. Overriding: Child class redefines parent's method with same signature
   class Parent{ virtual void show(){ cout<<"Parent"; } };
   class Child: public Parent{ void show() override { cout<<"Child"; } };

Virtual needed for runtime polymorphism, otherwise parent pointer calls parent method.

PART C: ADVANCE - Virtual Table

Virtual function uses vtable: Table of function pointers, each object with virtual has vptr.
When Parent *p = new Child(); p->show(); checks vtable and calls Child::show() at runtime.

Pure Virtual: virtual void show()=0; makes class abstract, cannot create object, must override in child.

PART D: SCHOLAR - Interview

Q: Overloading vs Overriding?
Ans: Overloading same class same name diff params compile-time. Overriding different class (parent child) same signature runtime needs virtual.

Q: What is abstract class?
Ans: Class with at least one pure virtual function, cannot instantiate.

Q: Can constructor be virtual?
Ans: No, constructor creates object, vtable not yet created.

Q: Can destructor be virtual?
Ans: Yes should be virtual in base class to ensure child destructor called when delete base pointer pointing to child.
*/

class Print { // Example of compile-time overloading
public:
    void show(int a){ // Show int version
        cout << "Int: " << a << "\n"; // Print int
    }
    void show(string s){ // Show string version overloaded same name different param
        cout << "String: " << s << "\n"; // Print string
    }
    void show(int a, int b){ // Show two ints overloaded
        cout << "Two ints: " << a << " " << b << "\n"; // Print two
    }
};

// Runtime polymorphism example

class Animal { // Base class
public:
    virtual void sound(){ // Virtual function, can be overridden
        cout << "Animal makes some sound\n"; // Generic
    }
    virtual ~Animal(){ // Virtual destructor important
        cout << "Animal destructor\n"; // Print
    }
};

class Dog : public Animal { // Dog overrides sound
public:
    void sound() override { // Override keyword ensures overriding correctly
        cout << "Dog barks: Woof Woof\n"; // Dog specific sound
    }
    ~Dog(){ cout << "Dog destructor\n"; }
};

class Cat : public Animal { // Cat overrides sound
public:
    void sound() override {
        cout << "Cat meows: Meow Meow\n"; // Cat sound
    }
    ~Cat(){ cout << "Cat destructor\n"; }
};

int main(){
    cout << "================================================================\n";
    cout << "10_06_00 - POLYMORPHISM VIRTUAL\n";
    cout << "================================================================\n\n";

    cout << "--- Compile-time: Function Overloading ---\n";
    Print p; // Print object
    p.show(10); // Calls show(int) version
    p.show("Hello"); // Calls show(string) version
    p.show(10,20); // Calls show(int,int) version
    cout << "Same name show() many forms based on parameters - overloading\n\n";

    cout << "--- Runtime: Virtual Overriding ---\n";
    Animal *a; // Base class pointer can point to child objects

    Dog d; // Dog object
    Cat c; // Cat object

    a = &d; // Base pointer points to Dog object
    cout << "Animal *a = &Dog object, calling a->sound(): ";
    a->sound(); // Calls Dog::sound() because virtual, runtime decision

    a = &c; // Base pointer points to Cat object
    cout << "Animal *a = &Cat object, calling a->sound(): ";
    a->sound(); // Calls Cat::sound()

    cout << "\nWithout virtual, a->sound() would always call Animal::sound() even if pointing to Dog\n";
    cout << "With virtual, correct child method called at runtime - Runtime Polymorphism\n\n";

    cout << "--- Virtual destructor demo ---\n";
    Animal *ptr = new Dog(); // Base pointer to new Dog in heap
    ptr->sound(); // Dog sound
    delete ptr; // Delete base pointer, should call Dog destructor then Animal destructor because virtual
    cout << "If destructor not virtual, only Animal destructor would be called, Dog destructor skipped -> leak\n";

    cout << "\n================================================================\n";
    return 0;
}