// ===================================================================
// CHAPTER 02 - VARIABLES & DATA TYPES - PRACTICE FILE (DETAILED)
// Designed by: Cpp-Mastery Journey
// Total Questions: 15 (5 Basic + 5 Intermediate + 5 Advanced)
// ===================================================================
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    cout << "========== CHAPTER 02 - PRACTICE START ==========" << endl;

    // ================== LEVEL 1: BASICS (Q1 - Q5) ==================

    // Q1: MY FIRST VARIABLES
    // Task: Create int age=21, float height=5.4f, string city="Faisalabad"
    cout << "\n--- Q1: My Info ---" << endl;
    int age = 21;
    float height = 5.4f;
    string city = "Faisalabad";
    cout << "I am " << age << " years old, " << height << " ft tall, from " << city << endl;
    // TODO FOR YOU: Change values to your real age/height/city and re-run

    // Q2: FLOAT vs DOUBLE - Accuracy Test
    // Task: Store 3.14159265359 in both and see difference
    cout << "\n--- Q2: Float vs Double ---" << endl;
    float pi_f = 3.14159265359f;
    double pi_d = 3.14159265359;
    cout << "Float (less accurate):  " << pi_f << endl;
    cout << "Double (more accurate): " << pi_d << endl;
    // TODO FOR YOU: Try float f=123.45678912345f vs double d=123.45678912345

    // Q3: CHAR and ASCII Code
    // Task: Create char grade='A' and print ASCII
    cout << "\n--- Q3: Char & ASCII ---" << endl;
    char grade = 'A';
    char myInitial = 'M';
    cout << "Grade: " << grade << " | ASCII: " << (int)grade << endl;
    cout << "Initial: " << myInitial << " | ASCII: " << (int)myInitial << endl;
    // TODO FOR YOU: Print ASCII of 'a', '0', '$'

    // Q4: STRING - Full Name
    // Task: Join firstName + lastName
    cout << "\n--- Q4: String Join ---" << endl;
    string firstName = "Maryam";
    string lastName = "Khan";
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;
    cout << "Length: " << fullName.length() << " characters" << endl;
    // TODO FOR YOU: Create favColor="Blue" and print "My fav color is Blue"

    // Q5: BOOL - True/False
    cout << "\n--- Q5: Bool ---" << endl;
    bool isStudent = true;
    bool isPassed = false;
    cout << "Normal (1/0): " << isStudent << " " << isPassed << endl;
    cout << "With boolalpha: " << boolalpha << isStudent << " " << isPassed << endl;
    cout << noboolalpha; // reset to 1/0
    // TODO FOR YOU: Create bool isTired=false and print with boolalpha

    // ================== LEVEL 2: INTERMEDIATE (Q6 - Q10) ==================

    // Q6: SIZEOF - Memory Check
    cout << "\n--- Q6: Sizeof ---" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "bool: " << sizeof(bool) << " byte" << endl;
    cout << "string: " << sizeof(string) << " bytes (object)" << endl;

    // Q7: SWAPPING with temp variable (Interview Question)
    cout << "\n--- Q7: Swap with temp ---" << endl;
    int x = 10, y = 20;
    cout << "Before: x=" << x << " y=" << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "After:  x=" << x << " y=" << y << endl;
    // TODO FOR YOU: Swap x=100, y=500

    // Q8: SWAPPING without temp (Advanced)
    cout << "\n--- Q8: Swap without temp ---" << endl;
    int a = 5, b = 10;
    cout << "Before: a=" << a << " b=" << b << endl;
    a = a + b; // 15
    b = a - b; // 5
    a = a - b; // 10
    cout << "After:  a=" << a << " b=" << b << endl;

    // Q9: STUDENT ID CARD - All types together
    cout << "\n--- Q9: My ID Card ---" << endl;
    string sName = "Maryam";
    int rollNo = 101;
    float cgpa = 3.92f;
    char section = 'A';
    bool isRegular = true;
    cout << "=============================" << endl;
    cout << " Name: " << sName << endl;
    cout << " Roll No: " << rollNo << endl;
    cout << " CGPA: " << cgpa << endl;
    cout << " Section: " << section << endl;
    cout << " Regular: " << boolalpha << isRegular << noboolalpha << endl;
    cout << "=============================" << endl;
    // TODO FOR YOU: Make YOUR real ID card

    // Q10: CONST - Locked Value
    cout << "\n--- Q10: Const ---" << endl;
    const float PI = 3.14159f;
    const int BIRTH_YEAR = 2005;
    cout << "PI=" << PI << " Birth Year=" << BIRTH_YEAR << endl;
    // PI = 3.14f; // ERROR! Uncomment to see error, then comment again

    // ================== LEVEL 3: ADVANCED (Q11 - Q15) ==================

    // Q11: TYPE CASTING - Data Loss
    cout << "\n--- Q11: Casting ---" << endl;
    double d = 99.99;
    int i = (int)d;
    cout << "Double " << d << " -> Int " << i << " (loss)" << endl;
    char ch = 'A';
    cout << "Char " << ch << " -> ASCII " << (int)ch << endl;

    // Q12: BUG FIXING - Correct the wrong lines
    cout << "\n--- Q12: Bug Fixing ---" << endl;
    // Wrong: char g="A"; Right: char g='A';
    // Wrong: string age='20'; Right: string age="20";
    // Wrong: float m=90.5; Right: float m=90.5f;
    char fixed_g = 'A';
    string fixed_age = "20";
    float fixed_m = 90.5f;
    cout << "Fixed Values: " << fixed_g << " " << fixed_age << " " << fixed_m << endl;

    // Q13: SHOPPING BILL - Calculation
    cout << "\n--- Q13: Shopping Bill ---" << endl;
    string product = "Notebook";
    int qty = 5;
    float price = 150.5f;
    float total = qty * price;
    float discountedTotal = total * 0.9f; // 10% off
    cout << product << " x " << qty << " = " << total << " Rs" << endl;
    cout << "After 10% discount: " << discountedTotal << " Rs" << endl;

    // Q14: OVERFLOW - What happens when limit cross?
    cout << "\n--- Q14: Overflow ---" << endl;
    cout << "INT_MAX = " << INT_MAX << endl;
    cout << "INT_MAX + 1 = " << INT_MAX + 1 << " (Overflow! becomes negative)" << endl;
    cout << "INT_MIN = " << INT_MIN << endl;

    // Q15: FINAL STORY CHALLENGE - Combine Everything
    cout << "\n--- Q15: My Story ---" << endl;
    string myName = "Maryam";
    int myAge = 21;
    string myCity = "Faisalabad";
    float myCGPA = 3.9f;
    string dreamJob = "Software Engineer";
    bool hardworking = true;
    cout << "Hi! I am " << myName << ", " << myAge << " from " << myCity << "." << endl;
    cout << "CGPA: " << myCGPA << ", Dream: " << dreamJob << endl;
    cout << "Hardworking? " << boolalpha << hardworking << endl;
    // TODO FOR YOU: Write YOUR story below with your own variables

    cout << "\n========== ALL 15 PRACTICE DONE! MASHALLAH! ==========" << endl;
    return 0;
}