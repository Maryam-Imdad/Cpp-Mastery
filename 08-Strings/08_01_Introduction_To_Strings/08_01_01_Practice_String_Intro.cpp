#include <iostream>
#include <string>
#include <cstring> // For strlen
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "08_01_01_PRACTICE - String Intro (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Create and print string
    cout << "Q1: Create string and print\n";
    string s1 = "Hello"; // Declare and init
    cout << "String: " << s1 << "\n\n"; // Print whole

    // Q2: Create char array and print
    cout << "Q2: Create char array\n";
    char c1[] = "World"; // C-style
    cout << "Char array: " << c1 << "\n\n";

    // Q3: Find length of string without length()
    cout << "Q3: Length without built-in (using loop)\n";
    string s = "Faisalabad";
    int len=0;
    while(s[len]!='\0'){ // Till null in string class also works due to C compat, but better use s[i]!='\0' or i<s.size()
        len++; // Count
    }
    // Correct way for string class:
    int len2 = 0;
    for(int i=0; i<s.size(); i++) len2++; // s.size() is length
    cout << "Length of " << s << " = " << s.size() << "\n\n";

    // Q4: Length of char array using strlen
    cout << "Q4: Length of char array using strlen\n";
    char name[] = "Ali";
    cout << "strlen = " << strlen(name) << "\n"; // From <cstring>
    cout << "Manual: ";
    int clen=0;
    while(name[clen]!='\0') clen++; // Loop till \0
    cout << clen << "\n\n";

    // Q5: Access each char
    cout << "Q5: Print each char of 'Hello'\n";
    string h = "Hello";
    for(int i=0;i<h.size();i++){
        cout << "Index " << i << " = " << h[i] << "\n"; // Access by index
    }
    cout << "\n";

    // Q6: Take string with spaces as input (logic)
    cout << "Q6: Input with spaces logic\n";
    cout << "Use getline(cin, s); not cin>>s; cin stops at space\n";
    // Demo: string fullName; getline(cin, fullName);
    string demo = "Muhammad Ali";
    cout << "Example string with space: " << demo << "\n\n";

    // Q7: Change char in string
    cout << "Q7: Change character at position\n";
    string change = "Hello";
    cout << "Before: " << change << "\n";
    change[0] = 'M'; // Change first char
    change[1] = 'a';
    cout << "After change[0]='M' change[1]='a': " << change << "\n\n";

    // Q8: Concatenate two strings manually
    cout << "Q8: Concatenate 'Hello' + 'World' manually\n";
    string a="Hello";
    string b="World";
    string c="";
    for(int i=0;i<a.size();i++) c = c + a[i]; // Add chars of a
    c = c + " "; // Add space
    for(int i=0;i<b.size();i++) c = c + b[i]; // Add chars of b
    cout << "Result: " << c << "\n";
    cout << "Using + operator: " << a + " " + b << "\n\n"; // Easy way

    // Q9: Copy one string to another
    cout << "Q9: Copy string\n";
    string src="CopyThis";
    string dest="";
    for(int i=0;i<src.size();i++){
        dest = dest + src[i]; // Manual copy char by char
    }
    cout << "Source: " << src << " Dest: " << dest << "\n";
    string dest2 = src; // Direct copy using = (overloaded)
    cout << "Direct copy: " << dest2 << "\n\n";

    // Q10: Check if string empty
    cout << "Q10: Check if empty\n";
    string emptyStr="";
    if(emptyStr.size()==0){ // Check size 0
        cout << "String is empty\n";
    }
    if(emptyStr.empty()){ // Built-in empty()
        cout << "Confirmed empty using empty()\n";
    }

    cout << "\n================================================================\n";
    return 0;
}