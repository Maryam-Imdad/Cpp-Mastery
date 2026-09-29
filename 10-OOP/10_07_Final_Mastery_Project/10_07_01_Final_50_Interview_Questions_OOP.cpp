#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "10_07_01 - FINAL 50 INTERVIEW QUESTIONS - OOP\n";
    cout << "================================================================\n\n";

    cout << "------ BASICS Q1-Q10 ------\n";
    cout << "Q1: What is OOP? Paradigm based on objects, data+methods bound in class, 4 pillars\n";
    cout << "Q2: Class vs Object? Class blueprint logical no memory, Object instance physical memory allocated\n";
    cout << "Q3: POP vs OOP? POP functions focus top-down less secure, OOP objects focus bottom-up secure via private\n";
    cout << "Q4: What is object? Instance of class, real world entity with properties and behavior\n";
    cout << "Q5: Access specifiers? public everywhere, private only inside class, protected inside + child\n";
    cout << "Q6: Size of class? Sum of data members only, methods shared in code segment, empty class 1 byte\n";
    cout << "Q7: What is this pointer? Hidden pointer to current object passed to non-static methods, this->member\n";
    cout << "Q8: Structure vs Class in C++? Both same except class default private, struct default public\n";
    cout << "Q9: Can we have array of objects? Yes Student s[10]; each with own data\n";
    cout << "Q10: Dot vs Arrow? obj.member for object, ptr->member for pointer to object == (*ptr).member\n\n";

    cout << "------ CONSTRUCTOR DESTRUCTOR Q11-Q20 ------\n";
    cout << "Q11: What is constructor? Special method same name as class no return type auto called on object creation to initialize\n";
    cout << "Q12: Types of constructor? Default no params, Parameterized with params, Copy copies other object\n";
    cout << "Q13: What is destructor? ~ClassName() called when object destroyed to free resources, one only no params\n";
    cout << "Q14: Constructor overloading? Multiple constructors same name different params, which called based on args\n";
    cout << "Q15: Can constructor be private? Yes for Singleton pattern prevents object creation outside\n";
    cout << "Q16: Copy constructor syntax? Student(Student &other){ roll=other.roll; name=other.name; }\n";
    cout << "Q17: Shallow vs Deep copy? Shallow copies address both point same memory, Deep allocates new memory copies value safe\n";
    cout << "Q18: Constructor initialization list? Student(int r): roll(r) {} faster direct init\n";
    cout << "Q19: Order of constructor? Base first then Derived, Destructor reverse Derived first then Base\n";
    cout << "Q20: Can constructor be virtual? No vtable not created yet, Can destructor be virtual? Yes should be virtual in base\n\n";

    cout << "------ ENCAPSULATION ABSTRACTION Q21-Q30 ------\n";
    cout << "Q21: What is encapsulation? Binding data+methods together in class and hiding sensitive data via private\n";
    cout << "Q22: What is abstraction? Showing only essential interface hiding background complexity\n";
    cout << "Q23: Difference Encap vs Abstraction? Encap wrapping+hiding data (implementation), Abstraction showing only interface (design), Encap leads to Abstraction\n";
    cout << "Q24: How encapsulation achieved? Using class + private data + public getter setter with validation\n";
    cout << "Q25: Benefit of encapsulation? Data hiding security validation loose coupling controlled access\n";
    cout << "Q26: What is getter setter? getRoll() returns private, setRoll(int r) sets with validation if(r>0)\n";
    cout << "Q27: How abstraction achieved? Access specifiers + header files + abstract class with pure virtual virtual void show()=0\n";
    cout << "Q28: 100% abstraction how? Pure abstract class/interface all methods pure virtual\n";
    cout << "Q29: Real example encapsulation? BankAccount private balance password, public deposit() withdraw() with password check\n";
    cout << "Q30: Private method use? Internal helper hidden complexity like verifyPassword() not exposed\n\n";

    cout << "------ INHERITANCE Q31-Q40 ------\n";
    cout << "Q31: What is inheritance? Child inherits properties methods from parent for reusability extendibility\n";
    cout << "Q32: Syntax? class Child : accessMode Parent {}; accessMode public/protected/private\n";
    cout << "Q33: Types of inheritance? Single one parent one child, Multilevel chain A->B->C, Multiple one child many parents, Hierarchical one parent many children, Hybrid mix\n";
    cout << "Q34: What is diamond problem? D inherits B,C both inherit A gets two copies of A ambiguity, solution virtual inheritance class B: virtual public A\n";
    cout << "Q35: Can private be inherited? Yes inherited but not directly accessible in child need getter\n";
    cout << "Q36: Access modes in inheritance? public: public->public protected->protected, protected: public->protected, private: public->private\n";
    cout << "Q37: Method overriding? Child redefines parent method same signature same name same params\n";
    cout << "Q38: Constructor call in inheritance? Child constructor calls parent via initialization list Child(int x): Parent(x){}\n";
    cout << "Q39: What is super? In C++ parent constructor called explicitly, no super keyword like Java but Parent::method() can call\n";
    cout << "Q40: Why inheritance needed? Code reusability, extendibility, polymorphism, real world hierarchy Animal->Dog\n\n";

    cout << "------ POLYMORPHISM Q41-Q50 ------\n";
    cout << "Q41: What is polymorphism? Poly many morph forms one name many forms same call different behavior\n";
    cout << "Q42: Types? Compile-time static overloading resolved at compile, Runtime dynamic overriding resolved at runtime via virtual\n";
    cout << "Q43: Function overloading? Same name different params in same class void add(int a,int b) void add(int a,int b,int c)\n";
    cout << "Q44: Operator overloading? Redefine operator for class Complex c3 = c1 + c2 via operator+()\n";
    cout << "Q45: Overloading vs Overriding? Overloading same class same name diff params compile-time no inheritance, Overriding parent-child same signature runtime needs virtual inheritance\n";
    cout << "Q46: What is virtual function? virtual void show() in base allows overriding, base pointer pointing to child calls child version at runtime via vtable\n";
    cout << "Q47: What is vtable vptr? Vtable table of function pointers, vptr hidden pointer in object pointing to vtable for runtime decision\n";
    cout << "Q48: Pure virtual? virtual void area()=0; no body makes class abstract cannot instantiate must override in child\n";
    cout << "Q49: Abstract class? Class with at least one pure virtual function, used for interface 100% abstraction\n";
    cout << "Q50: Virtual destructor why? Base *p = new Child(); delete p; if base destructor not virtual only base destructor called leak, if virtual child then base called proper cleanup\n";

    cout << "\n================================================================\n";
    cout << "ALL 50 OOP INTERVIEW QS DONE - MODULE 10 COMPLETE\n";
    cout << "================================================================\n";
    return 0;
}