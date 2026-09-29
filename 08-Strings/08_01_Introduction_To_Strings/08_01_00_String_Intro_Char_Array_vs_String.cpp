#include <iostream>
#include <string>
using namespace std;
/*

FILE: 08_01_00_String_Intro_Char_Array_vs_String.cpp
TOPIC: Introduction to Strings


PART A: BEGINNER - What is String?

String is collection of characters.
2 types in C++:
1. C-style: char arr[] = "Hello"; ends with '\0' null char.
2. C++ string: string s = "Hello"; from <string> library - dynamic, easy.

Example: "Ali" in char array stored as {'A','l','i','\0'}
'\0' tells end of string.

PART B: INTERMEDIATE - Char Array vs string class

Char Array:
  char s[10] = "Hello";
  Size fixed, need to handle '\0', cin stops at space.
  Input: cin.getline(s, 10); // reads space too

String Class:
  string s = "Hello World"; // can have spaces
  s.length(), s.size() both give length
  Input: getline(cin, s); // reads whole line with spaces

Memory: Both contiguous. string internally manages char array dynamically.

PART C: ADVANCE - How String Stored

string s = "Hello"
Index: 0:H 1:e 2:l 3:l 4:o
Length = 5, but char array has 6 with '\0'

Access: s[0] or s.at(0)
Update: s[0] = 'M'

String is mutable in C++ (can change).
Time for access O(1), for append O(n) worst.

PART D: SCHOLAR - Interview

Q: Difference between char array and string?
Ans: Char array is C-style fixed, manual '\0', fast but unsafe. string is C++ STL dynamic, safe, rich functions.

Q: Why '\0' needed in char array?
Ans: To mark end, so loops know where to stop.

Q: Can we compare strings with ==?
Ans: In string class yes (overloaded). In char array use strcmp().
*/

int main(){
    cout << "================================================================\n";
    cout << "08_01_00 - STRING INTRO\n";
    cout << "================================================================\n\n";

    // C-style char array
    char cstr[] = "Hello"; // Actually {'H','e','l','l','o','\0'}
    cout << "C-style: " << cstr << " length manual: ";
    int len=0;
    while(cstr[len]!='\0'){ len++; } // Count till \0
    cout << len << "\n";

    // C++ string
    string str = "Hello World"; // Dynamic
    cout << "C++ string: " << str << "\n";
    cout << "Length using size(): " << str.size() << "\n";
    cout << "Length using length(): " << str.length() << "\n";
    cout << "First char str[0]: " << str[0] << "\n";

    // Input example
    // char cArr[20]; cin.getline(cArr, 20); // For char array
    // string s; getline(cin, s); // For string class

    str[0]='M'; // Mutable
    cout << "After str[0]='M': " << str << "\n";

    cout << "\n================================================================\n";
    return 0;
}