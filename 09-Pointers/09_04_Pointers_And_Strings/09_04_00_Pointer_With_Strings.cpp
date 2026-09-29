#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*

FILE: 09_04_00_Pointer_With_Strings.cpp
TOPIC: Pointers with Strings (Char Array and STL String)


PART A: BEGINNER - Char Array and Pointer

char str[] = "Hello"; // Array, mutable
char *p = str; // p points to first char 'H'
p points to contiguous chars ending with '\0'

You can traverse: while(*p!='\0'){ cout<<*p; p++; }

String literal: char *s = "Hello"; // Points to read-only memory (dangerous)
Better: const char *s = "Hello"; // Read-only

PART B: INTERMEDIATE - STL String with Pointer

string s = "Hello";
string *sp = &s; // Pointer to string object
cout << *sp; // Prints whole string

char *ptr to access internal buffer:
char *chPtr = &s[0]; // Pointer to first char of string
But modern: s.c_str() gives const char* to buffer

PART C: ADVANCE - Array of Strings using Pointers

char *names[] = {"Ali", "Ahmed", "Sara"}; // Array of char pointers
Each points to different string literal.

string pointer array: string *arr = new string[3];

PART D: SCHOLAR - Interview

Q: Difference between char arr[]="Hello" and char *p="Hello"?
Ans: arr[] creates copy in stack, mutable, sizeof 6. *p points to read-only literal in code segment, sizeof 8 (pointer), modifying *p is crash.

Q: Why string literal should be const char*?
Ans: Because stored in read-only memory, modification causes undefined behavior.
*/

int main(){
    cout << "================================================================\n";
    cout << "09_04_00 - POINTER WITH STRINGS\n";
    cout << "================================================================\n\n";

    // Char array with pointer
    char str[] = "Hello"; // Mutable char array
    char *p = str; // Pointer to first char

    cout << "Traverse char array using pointer:\n";
    while(*p!= '\0'){ // Loop till null terminator
        cout << *p << " "; // Print char at p
        p++; // Move to next char
    }
    cout << "\n\n";

    // Reset p to start
    p = str; // Point again to start
    cout << "String via pointer: " << p << "\n"; // Printing pointer prints whole C-string till \0
    cout << "First char *p = " << *p << "\n\n"; // First char

    // STL String with pointer
    string s = "HelloWorld"; // STL string
    string *sp = &s; // Pointer to string object
    cout << "STL String via pointer: " << *sp << "\n"; // Dereference pointer to get whole string
    cout << "Access char using sp->at(0): " << sp->at(0) << "\n"; // Access char
    cout << "Or (*sp)[0]: " << (*sp)[0] << "\n\n";

    // Pointer to internal buffer
    char *bufPtr = &s[0]; // Pointer to first char of string's internal buffer
    cout << "Internal buffer via &s[0]: ";
    for(int i=0; i<s.size(); i++){
        cout << *(bufPtr+i) << " "; // Access each char via pointer arithmetic
    }
    cout << "\n";
    cout << "c_str() gives const char*: " << s.c_str() << "\n";

    cout << "\n================================================================\n";
    return 0;
}