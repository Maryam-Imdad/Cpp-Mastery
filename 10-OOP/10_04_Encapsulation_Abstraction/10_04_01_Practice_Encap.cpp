#include <iostream>
using namespace std;

// Base class for practice

class Student {
private: // Private data - encapsulated, hidden outside
    int roll; // Private roll number
    int age; // Private age

public: // Public interface to access private data
    string name; // Public name for demo (could be private also)

    // Setter for roll with validation - encapsulation
    void setRoll(int r){
        if(r>0){ // Validation: roll must be positive
            roll = r; // Assign if valid
        }
        else{
            cout << "Invalid roll, must be >0\n"; // Error
        }
    }

    // Getter for roll
    int getRoll(){
        return roll; // Return private roll
    }

    // Setter for age with validation
    void setAge(int a){
        if(a>=5 && a<=100){ // Valid age range
            age = a; // Assign
        }
        else{
            cout << "Invalid age\n"; // Error
        }
    }

    int getAge(){
        return age; // Return age
    }

    // Abstraction - simple interface hiding internal steps
    void display(){
        cout << "Student: " << name << " Roll: " << roll << " Age: " << age << "\n"; // Show essential only
    }

private: // Private helper - internal complexity hidden (abstraction)
    void calculateGrade(){
        cout << "Internal grade calculation hidden\n"; // Hidden complexity
    }
};

int main(){
    cout << "================================================================\n";
    cout << "10_04_01 - PRACTICE ENCAPSULATION ABSTRACTION (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Private data cannot be accessed directly
    cout << "Q1: Private data direct access fails\n";
    Student s1; // Object s1
    s1.name = "Ali"; // Public name can be accessed directly
    // s1.roll = 101; // ERROR roll is private, compiler error
    cout << "s1.name direct = " << s1.name << " works because public\n"; // Works
    cout << "s1.roll direct fails because private - encapsulation\n\n"; // Explanation

    // Q2: Access private via setter
    cout << "Q2: Setter for private\n";
    s1.setRoll(101); // Set roll via public setter method
    cout << "Roll set via setRoll(101)\n"; // Confirmation
    cout << "Get via getter: " << s1.getRoll() << "\n\n"; // Get via getter

    // Q3: Validation in setter - encapsulation benefit
    cout << "Q3: Validation in setter\n";
    s1.setRoll(-5); // Try invalid roll -5
    cout << "Roll after invalid attempt still: " << s1.getRoll() << " (validation protected)\n\n"; // Still 101

    // Q4: Age validation
    cout << "Q4: Age validation\n";
    s1.setAge(20); // Valid age
    cout << "Age set to 20, getAge=" << s1.getAge() << "\n"; // Get age
    s1.setAge(200); // Invalid age
    cout << "After invalid 200, age still " << s1.getAge() << "\n\n"; // Still 20

    // Q5: Getter returns private data safely
    cout << "Q5: Getter safe read\n";
    int r = s1.getRoll(); // Read private roll safely via getter
    cout << "Read roll safely via getter: " << r << "\n\n"; // Print

    // Q6: Abstraction - display shows essential only
    cout << "Q6: Abstraction via display()\n";
    s1.display(); // Shows essential info only, hides calculateGrade() complexity
    cout << "User sees display() simple interface, not internal calculateGrade()\n\n";

    // Q7: Private helper method hidden
    cout << "Q7: Private helper hidden\n";
    // s1.calculateGrade(); // ERROR private method cannot be called outside
    cout << "calculateGrade() is private, cannot be called outside - hidden complexity\n\n";

    // Q8: Encapsulation binding data+methods together
    cout << "Q8: Binding together\n";
    cout << "Class Student binds data (roll,age,name) + methods (setRoll,getRoll,display) together in single unit\n";
    cout << "This is encapsulation - single capsule\n\n";

    // Q9: Difference Encapsulation vs Abstraction
    cout << "Q9: Difference\n";
    cout << "Encapsulation: Wrapping data+methods + hiding data via private (how)\n"; // Implementation
    cout << "Abstraction: Showing only essential interface, hiding complexity (what)\n"; // Design
    cout << "Encapsulation is used to achieve abstraction\n\n";

    // Q10: Real life example Bank
    cout << "Q10: Real life Bank Account\n";
    cout << "Private: balance, password hidden\n";
    cout << "Public: deposit(), withdraw(), getBalance() controlled access\n";
    cout << "Validation: cannot deposit negative, cannot withdraw more than balance\n";
    cout << "This protects data - core benefit of encapsulation\n";

    cout << "\n================================================================\n";
    return 0;
}