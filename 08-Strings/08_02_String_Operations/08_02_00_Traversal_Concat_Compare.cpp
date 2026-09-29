#include <iostream>
#include <string>
using namespace std;
/*

FILE: 08_02_00_Traversal_Concat_Compare.cpp
TOPIC: Core String Operations


PART A: BEGINNER - 5 Main Operations

1. Traversal: Visit each char
   for(i=0;i<s.size();i++) cout<<s[i];

2. Concatenation: Join two strings
   s3 = s1 + s2;
   or s1.append(s2);

3. Comparison: Check equal / greater
   s1 == s2 -> true/false
   s1.compare(s2) -> 0 if equal, <0 if s1 smaller, >0 if larger

4. Insertion: Add char at position
   s.insert(pos, "text");

5. Deletion: Remove part
   s.erase(pos, len);

PART B: INTERMEDIATE - Logic

Traversal:
    - Forward: 0 to size-1
    - Reverse: size-1 to 0

Concat:
  Manual: new string = s1; for(char c: s2) new+=c;
  Built-in: + operator O(n+m)

Compare:
  == checks value (overloaded in string class)
  In char array: strcmp(a,b)==0 means equal

Insertion: s = "Hello", s.insert(2, "XX") -> HeXXllo
  Internally shifts characters right.

Deletion: s.erase(1,2) -> delete 2 chars from index 1

PART C: ADVANCE - Complexity

Traversal O(n)
Concat + operator creates new string O(n+m)
append() amortized O(1) if capacity enough
Comparison O(n) worst
Insert/Delete O(n) because shifting needed

PART D: SCHOLAR - Interview

Q: How to compare strings without ==?
Ans: Loop compare char by char till mismatch or end.

Q: Why string + is costly in loop?
Ans: Each + creates new string. Use += or append() for efficiency. For many joins use ostringstream.

Q: Char array vs string for these ops?
Ans: Char array uses strcat() for concat, strcmp() for compare - unsafe, can overflow. String class safe.
*/

int main(){
    cout << "================================================================\n";
    cout << "08_02_00 - STRING OPERATIONS\n";
    cout << "================================================================\n\n";

    string s1="Hello";
    string s2="World";

    // Traversal
    cout << "Traversal of Hello: ";
    for(int i=0;i<s1.size();i++){
        cout << s1[i] << " "; // Visit each char
    }
    cout << "\n";

    // Concatenation
    string s3 = s1 + " " + s2; // Using +
    cout << "Concat with + : " << s3 << "\n";
    string s4 = s1;
    s4.append(" ").append(s2); // Using append()
    cout << "Concat with append: " << s4 << "\n";

    // Comparison
    cout << "\nComparison:\n";
    cout << "s1==s2? " << (s1==s2? "Equal" : "Not Equal") << "\n";
    string s1Copy="Hello";
    cout << "s1==Hello? " << (s1==s1Copy? "Equal" : "Not Equal") << "\n";
    cout << "compare(): " << s1.compare(s2) << " (0=equal, non-zero=different)\n";

    // Insertion
    string ins = "Hello";
    ins.insert(2, "XX"); // Insert at index 2
    cout << "\nInsert XX at pos 2 in Hello: " << ins << "\n";

    // Deletion
    string del = "HelloWorld";
    del.erase(5, 5); // From index 5 delete 5 chars
    cout << "Erase 5 chars from pos 5 in HelloWorld: " << del << "\n";

    cout << "\n================================================================\n";
    return 0;
}