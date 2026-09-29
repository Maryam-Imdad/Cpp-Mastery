#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*

FILE: 08_03_00_Palindrome_Reverse_Count.cpp
TOPIC: Easy String Problems - Palindrome, Reverse


PART A: BEGINNER
Palindrome = same from start and end. ex: madam, level
Reverse = ulta karna. ex: Hello -> olleH

PART B: INTERMEDIATE LOGIC
Palindrome logic:
  Two pointers l=0, r=n-1
  while(l<r) if(s[l]!=s[r]) not palindrome else l++, r--

Reverse logic:
  Method1: Two pointers swap s[l] and s[r]
  Method2: Create new string and add chars from end

Count vowels/consonants:
  if char == a,e,i,o,u -> vowel else consonant

PART C: ADVANCE COMPLEXITY
All O(n) time, O(1) extra space if in-place

PART D: SCHOLAR
Q: Palindrome case-sensitive?
Ans: Usually convert to lower first using tolower()

Q: In-place reverse vs extra space?
Ans: In-place O(1) space, extra string O(n) space but easier
*/

int main(){
    cout << "================================================================\n";
    cout << "08_03_00 - PALINDROME REVERSE COUNT\n";
    cout << "================================================================\n\n";

    string s="madam";
    // Palindrome Check
    bool isPal=true;
    int l=0, r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){ isPal=false; break; } // Mismatch
        l++; r--;
    }
    cout << s << " Palindrome? " << (isPal?"Yes":"No") << "\n";

    // Reverse String
    string revStr="Hello";
    string reversed=revStr;
    l=0; r=reversed.size()-1;
    while(l<r){
        char temp=reversed[l];
        reversed[l]=reversed[r];
        reversed[r]=temp;
        l++; r--;
    }
    cout << "Reverse of " << revStr << " = " << reversed << "\n";
    // Using built-in: reverse(revStr.begin(), revStr.end());

    cout << "\n================================================================\n";
    return 0;
}