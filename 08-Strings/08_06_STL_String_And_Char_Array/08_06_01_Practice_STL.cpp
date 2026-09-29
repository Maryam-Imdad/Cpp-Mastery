#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "08_06_01 - PRACTICE STL vs CHAR ARRAY (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Create char array and print each char with '\0' check
    cout << "Q1: Print char array chars till \\0\n";
    char arr[] = "Hello"; // Init char array
    int i = 0; // Start index 0
    while(arr[i]!= '\0'){ // Loop till null char found
        cout << "arr[" << i << "] = " << arr[i] << "\n"; // Print char at i
        i++; // Move to next
    }
    cout << "\n";

    // Q2: Create STL string and print each char
    cout << "Q2: Print STL string each char\n";
    string s = "Hello"; // STL string
    for(int j=0; j<s.size(); j++){ // Loop from 0 to size-1
        cout << "s[" << j << "] = " << s[j] << "\n"; // Print each
    }
    cout << "\n";

    // Q3: strcpy in char array
    cout << "Q3: strcpy in char array\n";
    char src[] = "Source"; // Source array
    char dest[20]; // Destination large enough
    strcpy(dest, src); // Copy src to dest using strcpy from <cstring>
    cout << "dest after strcpy: " << dest << "\n\n"; // Print

    // Q4: strcmp in char array
    cout << "Q4: strcmp compare\n";
    char a1[] = "abc"; // First array
    char a2[] = "abc"; // Second array
    int cmp = strcmp(a1, a2); // Compare, returns 0 if equal
    if(cmp==0){ // If 0 means equal
        cout << "Equal\n\n";
    }
    else{
        cout << "Not Equal\n\n";
    }

    // Q5: strcat in char array
    cout << "Q5: strcat concat\n";
    char cat1[20] = "Hello"; // Must have enough space
    char cat2[] = "World"; // To append
    strcat(cat1, cat2); // Append cat2 at end of cat1
    cout << "After strcat: " << cat1 << "\n\n";

    // Q6: STL string assignment =
    cout << "Q6: STL string copy using =\n";
    string s1 = "Original"; // Original string
    string s2; // Empty string
    s2 = s1; // Copy using = operator overloaded
    cout << "s2 = " << s2 << "\n\n";

    // Q7: STL string + operator
    cout << "Q7: STL string concat using +\n";
    string x = "Good"; // First part
    string y = "Morning"; // Second part
    string z = x + " " + y; // Join using +
    cout << z << "\n\n";

    // Q8: Convert char array to string and back
    cout << "Q8: Conversion char[] <-> string\n";
    char chArr[] = "ConvertMe"; // Char array
    string strObj = chArr; // Implicit conversion to string
    cout << "char[] to string: " << strObj << "\n";
    const char* back = strObj.c_str(); // Convert back to const char*
    cout << "string to char*: " << back << "\n\n";

    // Q9: getline for STL string with spaces
    cout << "Q9: getline logic for spaces\n";
    cout << "Use getline(cin, myString); to read full line with spaces\n";
    string withSpace = "Hello World Example"; // Example string with space
    cout << "Example: " << withSpace << "\n\n";

    // Q10: Size vs Capacity vs Length
    cout << "Q10: Size vs Capacity\n";
    string capStr = "Hello"; // Small string
    cout << "String: " << capStr << "\n";
    cout << "size() = " << capStr.size() << " (actual chars)\n"; // Actual chars
    cout << "length() = " << capStr.length() << " (same as size)\n"; // Same as size
    cout << "capacity() = " << capStr.capacity() << " (allocated memory)\n"; // Allocated
    capStr += "WorldWorldWorld"; // Add more to grow
    cout << "After adding more, capacity = " << capStr.capacity() << "\n";

    cout << "\n================================================================\n";
    return 0;
}