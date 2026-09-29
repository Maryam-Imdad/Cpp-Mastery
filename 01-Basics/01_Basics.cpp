// ===================================================================
// CHAPTER 01 - C++ BASICS - Complete Detailed Guide
// Folder: 01-Basics | File: 01_Basics.cpp
// Author: Maryam - Cpp-Mastery
// ===================================================================

// ========== POINT 1: Preprocessor Directive ==========
// #include tells the compiler to include a library
// <iostream> stands for Input Output Stream
// It contains functions like cout (output) and cin (input)
// Without this, we cannot print anything on screen
#include <iostream>
#include <string> // Needed for string data type

// ========== POINT 2: Namespace ==========
// std = Standard namespace where cout, cin, string are defined
// using namespace std; means we don't need to write std::cout every time
// It makes our code shorter and cleaner
using namespace std;

// ========== POINT 3: Main Function - Entry Point of Program ==========
// Every C++ program starts execution from main() function
// int means this function will return an integer value
// () means it takes no arguments for now
// { } -> Curly braces contain the body of the program
// return 0 -> Tells OS that program ended successfully
int main() {

    // ========== POINT 4: Output - cout Object ==========
    // cout = Character Output, used to print on screen
    // << = Insertion Operator, inserts data into cout
    // "" = Whatever inside double quotes will be printed as it is
    cout << "Hello! Welcome to C++ Mastery!" << endl;

    // ========== POINT 5: endl vs \n - New Line ==========
    // endl = End Line, moves cursor to next line AND flushes the buffer
    // \n = New line character, only moves to next line (faster)
    // Both are used to create a new line
    cout << "This is Line 1" << endl;
    cout << "This is Line 2\n"; // Using \n
    cout << "This is Line 3" << endl;

    // ========== POINT 6: Escape Sequences - Special Characters ==========
    // These are special combinations starting with backslash \
    // Used to print characters that are hard to print normally
    cout << "\n--- Escape Sequences ---" << endl;
    cout << "1. New Line (\\n): " << endl << "Line1\nLine2" << endl;
    cout << "2. Tab Space (\\t): C++\tBasics" << endl;
    cout << "3. Double Quote (\\\"): She said \"Hello\"" << endl;
    cout << "4. Backslash (\\\\): C:\\Cpp-Mastery\\01-Basics" << endl;

    // ========== POINT 7: Comments - For Human Understanding ==========
    // Single-Line Comment: Starts with // , compiler ignores it
    // Used to explain what a single line does

    /*
       Multi-Line Comment:
       Starts with /* and ends with */
    /* You can write many lines here
       Compiler completely ignores this block
       Used for long explanations
    */

    // ========== POINT 8: Small Introduction to Variables ==========
    // Variable = A container to store data
    // Full details will be in Chapter 02-Variables
    string name = "Maryam";
    int age = 20;
    cout << "\n--- Quick Variable Example ---" << endl;
    cout << "My Name is: " << name << endl;
    cout << "My Age is: " << age << endl;

    // ========== POINT 9: Basic Program Structure Summary ==========
    cout << "\n===== C++ Program Structure =====" << endl;
    cout << "1. #include <iostream> -> Add Input/Output library" << endl;
    cout << "2. using namespace std; -> Use standard namespace" << endl;
    cout << "3. int main() { } -> Starting point of program" << endl;
    cout << "4. cout << -> To print output" << endl;
    cout << "5. return 0; -> Successful program end" << endl;
    cout << "================================" << endl;

    cout << "\nCongratulations! Chapter 01 Complete!" << endl;

    // ========== POINT 10: Return Statement ==========
    // return 0 means program ran without any error
    // If we return 1, it means there was an error
    // OS checks this return value
    return 0;
}

// ========== EXTRA KNOWLEDGE FOR YOU ==========
// 1. How Compilation Works:
//    Source Code (.cpp) -> Compiler (g++) -> Executable File (.exe)
//    Command to compile: g++ filename.cpp -o output.exe
//    Command to run: ./output.exe

// 2. Common Mistakes by Beginners:
//    - Forgetting semicolon ; at end -> Compilation Error
//    - Not closing double quotes "" -> Error
//    - Writing MAIN() in capital letters -> Error, must be main()

// 3. Golden Rule:
//    Every C++ program must have these 3 things:
//    #include <iostream>, int main(), and return 0;