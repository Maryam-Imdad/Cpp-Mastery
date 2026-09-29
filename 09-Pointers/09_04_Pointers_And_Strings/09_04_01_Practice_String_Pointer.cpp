#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_04_01 - PRACTICE POINTER & STRING (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Traverse char array using pointer
    cout << "Q1: Traverse 'Hello' using pointer\n";
    char str[] = "Hello"; // Char array
    char *p = str; // Pointer to first char 'H'
    while(*p!= '\0'){ // While not null terminator
        cout << *p << " "; // Print current char
        p++; // Move to next char, adds 1 byte
    }
    cout << "\n\n";

    // Q2: Print string using pointer (cout << p prints till \0)
    cout << "Q2: Print whole string via pointer\n";
    char s2[] = "World"; // Char array
    char *ptr2 = s2; // Pointer to it
    cout << "ptr2 = " << ptr2 << " prints whole till \\0\n\n"; // cout with char* prints C-string

    // Q3: Length of string using pointer
    cout << "Q3: Length using pointer\n";
    char lenStr[] = "Test"; // String to measure
    char *lenPtr = lenStr; // Pointer to start
    int len = 0; // Length counter
    while(*lenPtr!= '\0'){ // Till null
        len++; // Increase length
        lenPtr++; // Move next
    }
    cout << "Length of Test = " << len << "\n"; // Should be 4
    cout << "strlen = " << strlen(lenStr) << " (builtin)\n\n"; // Verify with strlen

    // Q4: Copy string using pointer
    cout << "Q4: Copy string using pointer\n";
    char src[] = "CopyMe"; // Source
    char dest[20]; // Destination large enough
    char *srcPtr = src; // Source pointer
    char *destPtr = dest; // Dest pointer
    while(*srcPtr!= '\0'){ // While source not ended
        *destPtr = *srcPtr; // Copy char from src to dest
        srcPtr++; // Move src pointer
        destPtr++; // Move dest pointer
    }
    *destPtr = '\0'; // Add null at end of dest, IMPORTANT
    cout << "Source: " << src << " Dest: " << dest << "\n\n";

    // Q5: Reverse string using two pointers (char array)
    cout << "Q5: Reverse 'abcd' using two pointers\n";
    char rev[] = "abcd"; // String to reverse
    char *left = rev; // Left at start &rev[0]
    char *right = &rev[strlen(rev)-1]; // Right at last char &rev[3]
    cout << "Before: " << rev << "\n";
    while(left < right){ // While left before right
        char temp = *left; // Save left
        *left = *right; // Left = right
        *right = temp; // Right = temp
        left++; // Move left forward
        right--; // Move right backward
    }
    cout << "After reverse: " << rev << "\n\n";

    // Q6: STL string pointer - change string via pointer
    cout << "Q6: STL string via pointer modification\n";
    string st = "Hello"; // STL string
    string *stPtr = &st; // Pointer to string object
    cout << "Before: " << *stPtr << "\n"; // Print via pointer
    *stPtr = "World"; // Change value using pointer dereference
    cout << "After *stPtr = \"World\": " << st << "\n\n"; // Original changed

    // Q7: Access STL string chars using pointer to buffer
    cout << "Q7: Access STL string chars via &s[0]\n";
    string s = "Hello"; // STL string
    char *buf = &s[0]; // Pointer to internal buffer first char
    for(int i=0; i<s.size(); i++){ // Loop size
        cout << "buf[" << i << "] = " << *(buf+i) << "\n"; // Access via pointer arithmetic
    }
    cout << "\n";

    // Q8: Array of strings using char* array
    cout << "Q8: Array of char* (array of strings)\n";
    const char* names[] = {"Ali", "Ahmed", "Sara"}; // Array of pointers to string literals
    for(int i=0; i<3; i++){ // Loop 3 names
        cout << "names[" << i << "] = " << names[i] << "\n"; // Each is char*
    }
    cout << "\n";

    // Q9: const char* vs char[] - read only
    cout << "Q9: const char* is read-only\n";
    const char* ro = "Hello"; // Read-only literal in code segment
    cout << "ro = " << ro << "\n";
    cout << "ro[0] = " << ro[0] << "\n";
    cout << "*ro = " << *ro << " (cannot modify *ro='X' will crash)\n\n";

    // Q10: String literal pointer arithmetic
    cout << "Q10: Pointer arithmetic on string literal\n";
    const char* lit = "HelloWorld"; // Points to 'H'
    cout << "lit = " << lit << "\n"; // Whole string
    cout << "lit+1 = " << (lit+1) << " (from index 1)\n"; // From 'e' onwards, because address+1
    cout << "lit+5 = " << (lit+5) << " (from index 5)\n"; // From 'W'
    cout << "*(lit+0) = " << *(lit+0) << "\n"; // 'H'
    cout << "*(lit+5) = " << *(lit+5) << "\n"; // 'W'

    cout << "\n================================================================\n";
    return 0;
}