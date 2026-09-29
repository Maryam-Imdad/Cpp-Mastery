// ===================================================================
// CHAPTER 02 - VARIABLES & DATA TYPES - 100% DETAILED MASTERY
// Total Time to Understand: 30 Minutes
// ===================================================================
#include <iostream>
#include <string>
#include <climits> // For INT_MAX, INT_MIN
using namespace std;

int main() {
    // =================================================================
    // SECTION 1: WHAT IS VARIABLE IN DEEP? - MEMORY CONCEPT
    // =================================================================
    // Imagine RAM is like a big almirah with many boxes.
    // Each box has: 1. Address (Box No.) 2. Name (Variable Name) 3. Data
    // When you write: int age = 20;
    // Computer does 3 steps:
    // Step 1: Find empty 4-byte box in RAM
    // Step 2: Give it name "age" for you to remember
    // Step 3: Put 20 inside that box
    // You never need to remember Address, just name.

    // =================================================================
    // SECTION 2: DECLARATION, INITIALIZATION, ASSIGNMENT - THE 3 STAGES
    // =================================================================
    cout << "===== SECTION 2: 3 Stages =====" << endl;
    int marks;          // 1. DECLARATION: Box created, garbage value inside
    marks = 85;         // 2. INITIALIZATION: First value put (85)
    cout << "After Initialization marks = " << marks << endl;
    marks = 90;         // 3. ASSIGNMENT / RE-ASSIGNMENT: Old value removed, new value 90
    cout << "After Re-assignment marks = " << marks << endl;
    int finalMarks = 95; // Declaration + Initialization together - BEST PRACTICE
    cout << "Best Practice finalMarks = " << finalMarks << endl;

    // =================================================================
    // SECTION 3: DATA TYPES IN EXTREME DETAIL
    // =================================================================

    // --- TYPE 1: INT - Integer ---
    // What: Stores whole numbers, no decimal
    // Memory: 4 bytes = 32 bits
    // Range: -2,147,483,648 to +2,147,483,647 (Formula: -2^31 to 2^31-1)
    // Why this range? Because 32 bits can make 2^32 combinations.
    // When to use: Age, Roll No, Counting, Year
    // Limit: If you store 3,000,000,000 it will OVERFLOW and give wrong negative number
    cout << "\n===== TYPE 1: INT =====" << endl;
    int age = 21;
    int year = 2026;
    int population = 240000000; // 24 Crore
    cout << "Age: " << age << endl;
    cout << "INT Max Value: " << INT_MAX << endl;
    cout << "INT Min Value: " << INT_MIN << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    // Common Mistake Detail:
    // int price = 99.99; // Compiler will CUT .99 and only store 99. Data loss!

    // --- TYPE 2: FLOAT ---
    // What: Stores decimal numbers with less precision
    // Memory: 4 bytes
    // Precision: Only 6-7 digits accurate after decimal
    // Why 'f'? In C++, 3.14 is by default DOUBLE. To force it to be FLOAT, we add 'f'
    // Example: float a = 3.14; -> Compiler warning: double to float conversion
    //          float a = 3.14f; -> No warning, correct
    // When to use: CGPA, Price, Percentage where super accuracy not needed
    cout << "\n===== TYPE 2: FLOAT =====" << endl;
    float cgpa = 3.856789f; // Will only store 3.85678, last digits lost
    float price = 99.99f;
    cout << "CGPA (float): " << cgpa << " | Size: " << sizeof(float) << " bytes" << endl;
    cout << "If you need more accuracy, use double" << endl;

    // --- TYPE 3: DOUBLE - More Powerful than Float ---
    // What: Stores big decimal numbers with HIGH precision
    // Memory: 8 bytes (Double of float)
    // Precision: 15-16 digits accurate
    // When to use: PI value, Scientific research, Bank transactions, GPS coordinates
    // Note: Without 'f', every decimal is double by default. So double pi = 3.14; is perfect.
    cout << "\n===== TYPE 3: DOUBLE =====" << endl;
    double pi = 3.141592653589793;
    double bankBalance = 123456789.123456789;
    cout << "PI (double): " << pi << " | Size: " << sizeof(double) << " bytes" << endl;
    cout << "Bank Balance: " << bankBalance << endl;
    cout << "Float vs Double Difference: Float lost digits, Double kept all" << endl;

    // --- TYPE 4: CHAR - Character ---
    // What: Stores SINGLE character only
    // Memory: 1 byte = 8 bits
    // Range: 256 characters (ASCII table: A-Z, a-z, 0-9, symbols)
    // Syntax: MUST use single quotes 'A', not double quotes "A"
    // Internally: 'A' is stored as number 65, 'B' as 66 (ASCII code)
    // When to use: Grade, Gender (M/F), Yes/No
    cout << "\n===== TYPE 4: CHAR =====" << endl;
    char grade = 'A';
    char gender = 'F';
    char symbol = '$';
    cout << "Grade: " << grade << " | Size: " << sizeof(char) << " byte" << endl;
    cout << "ASCII of A is: " << (int)grade << " (Type Casting char to int)" << endl;
    // char wrong1 = 'AB'; // ERROR: char can have only 1 character
    // char wrong2 = "A";  // ERROR: "A" is string, not char

    // --- TYPE 5: STRING - Text ---
    // What: Stores multiple characters, words, sentences
    // Memory: Dynamic - depends on length of text (e.g., "Hi"=2 bytes, "Hello"=5 bytes)
    // Syntax: MUST use double quotes "Text"
    // Requirement: Need #include <string> and using namespace std;
    // Internally: String is actually array of chars: "Hi" = ['H','i','\0']
    // When to use: Name, City, Address, Course
    cout << "\n===== TYPE 5: STRING =====" << endl;
    string name = "Maryam";
    string city = "Faisalabad, Punjab, Pakistan";
    string course = "Cpp-Mastery";
    cout << "Name: " << name << endl;
    cout << "City: " << city << endl;
    cout << "Size of string variable (not text length): " << sizeof(string) << " bytes (fixed)" << endl;
    cout << "Length of text in name: " << name.length() << " characters" << endl;

    // --- TYPE 6: BOOL - Boolean ---
    // What: Stores only TRUE or FALSE
    // Memory: 1 byte
    // Internally: true = 1, false = 0
    // When to use: Conditions, Login status, Pass/Fail
    // Special: cout << boolalpha will print true/false instead of 1/0
    cout << "\n===== TYPE 6: BOOL =====" << endl;
    bool isStudent = true;
    bool isPassed = false;
    bool isCppFun = true;
    cout << "Is Student? " << isStudent << " (1=True, 0=False)" << endl;
    cout << "Is Passed? " << isPassed << endl;
    cout << "With boolalpha: " << boolalpha << isStudent << " / " << isPassed << endl;
    cout << noboolalpha; // Reset back to 1/0

    // =================================================================
    // SECTION 4: NAMING RULES - INTERVIEW QUESTION
    // =================================================================
    cout << "\n===== SECTION 4: Naming Rules =====" << endl;
    int myAge = 21;      // GOOD: camelCase - Most used in C++
    int my_age = 21;     // GOOD: snake_case
    int _myAge = 21;     // GOOD: Can start with underscore
    int MyAge = 21;      // GOOD: But camelCase is better
    // int 2myAge = 21;  // BAD: Cannot start with number
    // int my Age = 21;  // BAD: Space not allowed
    // int int = 21;     // BAD: Cannot use keyword (int, float, return)
    // int my-age = 21;  // BAD: Hyphen - not allowed
    cout << "Valid names: myAge, my_age, _myAge" << endl;
    cout << "Case Sensitive: myAge and MyAge are DIFFERENT boxes" << endl;

    // =================================================================
    // SECTION 5: CONST, AUTO, TYPE CASTING
    // =================================================================
    cout << "\n===== SECTION 5: Advanced =====" << endl;
    const int BIRTH_YEAR = 2005; // const = LOCKED, cannot change later
    // BIRTH_YEAR = 2006; // ERROR! Will not compile
    cout << "CONST BIRTH_YEAR (locked): " << BIRTH_YEAR << endl;

    auto temp1 = 25;        // Compiler auto-detects as int
    auto temp2 = 25.5;      // Compiler auto-detects as double
    auto temp3 = "Hello";   // Compiler auto-detects as const char*
    cout << "AUTO temp1 (int): " << temp1 << ", temp2 (double): " << temp2 << endl;

    // Type Casting: Converting one type to another
    int num = 10;
    double dNum = (double)num; // Casting int to double
    double d = 99.99;
    int iNum = (int)d; // Will lose .99, only 99 stored
    cout << "Casting int 10 to double: " << dNum << endl;
    cout << "Casting double 99.99 to int: " << iNum << " (data loss)" << endl;

    cout << "\n===== CHAPTER 02 COMPLETE - NOW DO PRACTICE FILE =====" << endl;
    return 0;
}