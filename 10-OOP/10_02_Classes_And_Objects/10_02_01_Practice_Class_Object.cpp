#include <iostream>
using namespace std;

// Practice class 1
class Rectangle {
public: // Public members
    int length; // Length data
    int breadth; // Breadth data
    void setDim(int l, int b){ // Method to set dimensions, uses this
        this->length = l; // this->length is object member, l is parameter
        this->breadth = b; // Assign breadth
    }
    int area(){ // Method to calculate area
        return length * breadth; // Return l*b
    }
    int perimeter(){ // Method for perimeter
        return 2*(length+breadth); // Formula 2*(l+b)
    }
};

class Student {
private:
    int roll; // Private roll
public:
    string name; // Public name
    void setRoll(int r){ roll = r; } // Setter
    int getRoll(){ return roll; } // Getter
    void display(){ cout << name << " " << roll << "\n"; } // Display
};

int main(){
    cout << "================================================================\n";
    cout << "10_02_01 - PRACTICE CLASS OBJECT (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Create Rectangle object and set data directly
    cout << "Q1: Direct data access\n";
    Rectangle r1; // Object r1 created
    r1.length = 10; // Direct assign length 10
    r1.breadth = 5; // Direct assign breadth 5
    cout << "r1 length=" << r1.length << " breadth=" << r1.breadth << "\n"; // Print
    cout << "Area=" << r1.area() << "\n\n"; // Call area method

    // Q2: Use setDim with this pointer
    cout << "Q2: setDim using this pointer\n";
    Rectangle r2; // Second object
    r2.setDim(20, 10); // Set via method that uses this->
    cout << "r2 area=" << r2.area() << " perimeter=" << r2.perimeter() << "\n\n"; // Print

    // Q3: Private data access via getter setter
    cout << "Q3: Private via getter setter\n";
    Student s1; // Student object
    s1.name = "Ali"; // Public name direct
    s1.setRoll(101); // Private roll via setter
    // s1.roll = 101; // ERROR private
    cout << "Name=" << s1.name << " Roll=" << s1.getRoll() << "\n\n"; // Getter

    // Q4: Array of objects
    cout << "Q4: Array of objects\n";
    Student class10[3]; // Array of 3 Student objects, each with own name roll
    class10[0].name = "A"; class10[0].setRoll(1); // First student
    class10[1].name = "B"; class10[1].setRoll(2); // Second
    class10[2].name = "C"; class10[2].setRoll(3); // Third
    for(int i=0;i<3;i++){ // Loop 3 times
        cout << "Student " << i << ": "; // Print index
        class10[i].display(); // Call display for each object
    }
    cout << "\n";

    // Q5: Pointer to object
    cout << "Q5: Pointer to object and arrow operator\n";
    Student *ptr = &s1; // ptr points to s1 object
    cout << "ptr->name = " << ptr->name << "\n"; // Arrow accesses member of object pointed by ptr
    cout << "(*ptr).name = " << (*ptr).name << " same as arrow\n"; // Dereference then dot same
    ptr->display(); // Call method via arrow
    cout << "\n";

    // Q6: Dynamic object using new
    cout << "Q6: Dynamic object using new\n";
    Student *dyn = new Student(); // Allocate Student object in heap, returns pointer
    dyn->name = "Dynamic Ali"; // Access via arrow because dyn is pointer
    dyn->setRoll(999); // Set roll
    dyn->display(); // Display
    delete dyn; // Free heap memory for object, important
    cout << "Deleted dynamic object\n\n";

    // Q7: this pointer explicit demo
    cout << "Q7: this pointer\n";
    cout << "this is hidden pointer pointing to current object\n";
    cout << "Inside setDim, this->length = l means current object's length = parameter l\n";
    cout << "It resolves name conflict when parameter and member same name\n\n";

    // Q8: Size of class and object
    cout << "Q8: Size of object\n";
    cout << "sizeof(r1) = " << sizeof(r1) << " bytes (int+int=8)\n"; // Two ints
    cout << "Methods area(), perimeter() take no space per object, stored once in code\n\n";

    // Q9: Empty class size
    cout << "Q9: Empty class size\n";
    class Empty {}; // Empty class with no data
    Empty e; // Object of empty class
    cout << "sizeof(Empty) = " << sizeof(e) << " byte (1 byte for identification)\n\n"; // 1 byte

    // Q10: Multiple objects independent
    cout << "Q10: Objects independent\n";
    Rectangle ra, rb; // Two rectangles
    ra.setDim(2,3); // ra 2x3
    rb.setDim(10,20); // rb 10x20 different
    cout << "ra area=" << ra.area() << " (6)\n"; // ra area 6
    cout << "rb area=" << rb.area() << " (200)\n"; // rb area 200, independent
    cout << "Hence each object has separate data\n";

    cout << "\n================================================================\n";
    return 0;
}