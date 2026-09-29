#include <iostream>
using namespace std;

class Rectangle {
public:
    int length; // Length member
    int breadth; // Breadth member

    // Q1: Default constructor
    Rectangle(){
        cout << "Default Constructor: init 0,0\n"; // Print
        length = 0; // Init to 0
        breadth = 0; // Init to 0
    }

    // Q2: Parameterized constructor
    Rectangle(int l, int b){
        cout << "Parameterized Constructor: l=" << l << " b=" << b << "\n"; // Print
        length = l; // Assign parameter l to member length
        breadth = b; // Assign b to breadth
    }

    // Q3: Copy constructor
    Rectangle(Rectangle &other){
        cout << "Copy Constructor: copying " << other.length << "x" << other.breadth << "\n"; // Print
        length = other.length; // Copy length from other object
        breadth = other.breadth; // Copy breadth
    }

    // Q5: Constructor with initialization list (more efficient)
    // Rectangle(int l, int b): length(l), breadth(b) { cout<<"Init list\n"; }

    // Destructor
    ~Rectangle(){
        cout << "Destructor called for " << length << "x" << breadth << "\n"; // Print when destroyed
    }

    int area(){
        return length*breadth; // Return area
    }
    void display(){
        cout << "Rect " << length << "x" << breadth << " Area=" << area() << "\n"; // Display
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_03_01 - PRACTICE CONSTRUCTOR (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Default constructor
    cout << "Q1: Default constructor\n";
    Rectangle r1; // Object with no args, default constructor called automatically
    r1.display(); // Display 0x0
    cout << "\n";

    // Q2: Parameterized constructor
    cout << "Q2: Parameterized constructor\n";
    Rectangle r2(10, 5); // Object with args 10,5, parameterized called
    r2.display(); // Display 10x5
    cout << "\n";

    // Q3: Copy constructor
    cout << "Q3: Copy constructor\n";
    Rectangle r3 = r2; // Create r3 as copy of r2, copy constructor called
    r3.display(); // Should be same as r2 10x5
    cout << "\n";

    // Q4: Constructor overloading - multiple constructors
    cout << "Q4: Constructor overloading\n";
    cout << "Class has 3 constructors: default, parameterized, copy\n";
    cout << "Which one called depends on arguments: Rectangle() -> default, Rectangle(10,5)->param, Rectangle(r2)->copy\n\n";

    // Q5: Initialization list
    cout << "Q5: Initialization list syntax\n";
    cout << "Rectangle(int l,int b): length(l), breadth(b) {}\n";
    cout << "Faster than assignment inside body, directly initializes members\n\n";

    // Q6: Destructor auto called
    cout << "Q6: Destructor auto called\n";
    {
        cout << "Entering inner block\n";
        Rectangle temp(2,2); // Object created inside block
        temp.display(); // Display
        cout << "Exiting inner block, destructor will be called now for temp\n";
    } // temp goes out of scope here, destructor called automatically
    cout << "Outside block, temp destroyed\n\n";

    // Q7: Dynamic object constructor destructor with new/delete
    cout << "Q7: Dynamic object new/delete\n";
    Rectangle *ptr = new Rectangle(3,4); // Allocate in heap, constructor called
    ptr->display(); // Display via pointer
    delete ptr; // Delete object, destructor called explicitly via delete
    cout << "After delete, destructor called for dynamic object\n\n";

    // Q8: Array of objects constructors called multiple times
    cout << "Q8: Array of objects\n";
    Rectangle arr[2] = {Rectangle(1,1), Rectangle(2,2)}; // Array with 2 objects, each constructed
    cout << "arr[0]: "; arr[0].display(); // First
    cout << "arr[1]: "; arr[1].display(); // Second
    cout << "Destructors for arr will be called at end\n\n";

    // Q9: Shallow vs Deep copy concept
    cout << "Q9: Shallow vs Deep copy\n";
    cout << "Shallow copy: copies pointer address, both point to same memory (default copy does this)\n";
    cout << "Deep copy: allocates new memory and copies value, safe\n";
    cout << "If class has pointer members, you must write custom copy constructor for deep copy\n\n";

    // Q10: Constructor cannot have return type, destructor ~ same
    cout << "Q10: Rules\n";
    cout << "Constructor: Same name as class, no return type, not void, auto called\n";
    cout << "Destructor: ~ClassName, no parameters, no return, one only, auto called at end\n";
    cout << "If no constructor written, compiler gives default free\n";

    cout << "\nAll destructors for r1,r2,r3,arr will be called now at end of main in reverse order\n";
    cout << "\n================================================================\n";
    return 0;
}