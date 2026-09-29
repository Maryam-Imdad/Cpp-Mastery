#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
/*

FILE: 08_06_00_STL_String.cpp
TOPIC: STL String vs Char Array Deep Dive


PART A: BEGINNER - What is STL String?

STL String is a class in <string> header.
It wraps char array dynamically.
It grows automatically, no need for fixed size.
Char array is C-style: char arr[100];

PART B: INTERMEDIATE - Difference

Char Array:
  Fixed size, manual handling of '\0'
  Functions: strlen(), strcpy(), strcmp(), strcat() from <cstring>
  Input: cin.getline(arr, size)

String Class:
  Dynamic size, auto manages memory
  Functions: size(), length(), substr(), find(), compare()
  Input: getline(cin, str)
  Supports +, ==, < operators (overloaded)

PART C: ADVANCE - Memory & Performance

Char array stored in stack if local, contiguous.
STL string object has pointer to heap buffer + size + capacity.
Capacity grows double when needed (like vector).
Access O(1), insertion O(n) due to shifting.

PART D: SCHOLAR - Interview

Q: When to use char array?
Ans: Embedded systems, low-level C code, performance critical where you avoid heap.

Q: What is string::npos?
Ans: Constant returned by find() when not found, value -1 but as size_t max.

Q: Is string null-terminated?
Ans: In C++11 onwards, c_str() guarantees null-terminated buffer, internal also null-terminated for compatibility.
*/

int main(){
    cout << "================================================================\n";
    cout << "08_06_00 - STL STRING vs CHAR ARRAY\n";
    cout << "================================================================\n\n";

    // Example of Char Array
    char charr[20] = "Hello"; // Declare char array of size 20
    cout << "Char Array: " << charr << "\n"; // Print char array
    cout << "Length using strlen: " << strlen(charr) << "\n"; // strlen from <cstring>
    cout << "Sizeof charr: " << sizeof(charr) << " bytes\n\n"; // Total capacity not length

    // Example of STL String
    string s = "Hello"; // Declare STL string
    cout << "STL String: " << s << "\n"; // Print string
    cout << "Length using size(): " << s.size() << "\n"; // Get length
    cout << "Capacity: " << s.capacity() << "\n"; // Internal capacity may be > size
    cout << "c_str(): " << s.c_str() << "\n\n"; // Returns C-style pointer

    // Conversion
    string st = "World"; // STL string
    const char* cptr = st.c_str(); // Convert to C-style
    cout << "Converted to char*: " << cptr << "\n";

    char carr2[] = "Test"; // Char array
    string st2 = string(carr2); // Convert char array to STL string
    cout << "Converted char[] to string: " << st2 << "\n";

    cout << "\n================================================================\n";
    return 0;
}