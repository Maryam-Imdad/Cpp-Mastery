# OOP - 4 Pillars - Interview Master Notes

## 1. Class vs Object vs Structure
- Class: Blueprint (e.g. design of Car)
- Object: Real instance (e.g. your Car)
- Structure: Same as class but default public, no functions normally

## 2. 4 Pillars

### A) Encapsulation
- Wrapping data + functions into one unit (class)
- Using private to hide data
- Example: Bank Account balance is private, access via deposit()

### B) Abstraction
- Hiding complex logic, showing only needed info
- Example: You press car accelerator, you don't know engine logic
- In C++: Abstract class with pure virtual function

### C) Inheritance - 5 Types
1. Single: A -> B
2. Multilevel: A -> B -> C (Person -> Student -> Result)
3. Multiple: A + B -> C
4. Hierarchical: A -> B, A -> C
5. Hybrid: Mix

Code:
class Animal { public: void eat(); };
class Dog : public Animal { };

### D) Polymorphism - 2 Types
1. Compile Time: Function Overloading, Operator Overloading
2. Runtime: Virtual Function, Overriding

Virtual Function + vtable explanation:
class Base { virtual void show() {} }; // vtable created
class Derived : public Base { void show() override {} };

## 3. Constructor vs Destructor
- Constructor: Same name as class, no return, auto called
- Destructor: ~ClassName, called when object dies, use virtual if inheritance

## 4. Virtual Destructor - Why?
If Base *p = new Derived(); delete p;
Without virtual ~Base(), Derived destructor won't call -> Memory leak

## 5. Pure Virtual Function
virtual void show() = 0; // No body, must override in child
Class with pure virtual = Abstract class (cannot create object)

