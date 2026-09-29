#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "08_07_01 - FINAL 50 INTERVIEW QUESTIONS - STRING\n";
    cout << "================================================================\n\n";

    // SECTION 1: BASICS Q1-Q10
    cout << "------ SECTION 1: BASICS Q1-Q10 ------\n";
    cout << "Q1: What is string? collection of characters\n";
    cout << "Q2: char array vs string? char[] fixed, string dynamic\n";
    cout << "Q3: Null char \\0 use? marks end of C-string\n";
    cout << "Q4: length() vs size()? both same for string\n";
    cout << "Q5: How to read line with spaces? getline(cin,s)\n";
    cout << "Q6: Is string mutable? Yes in C++\n";
    cout << "Q7: Access char? s[i] or s.at(i)\n";
    cout << "Q8: Empty check? s.empty() or s.size()==0\n";
    cout << "Q9: Compare strings? s1==s2 or s1.compare(s2)\n";
    cout << "Q10: Concat? s1+s2 or s1.append(s2)\n\n";

    // SECTION 2: EASY CODE Q11-Q20
    cout << "------ SECTION 2: EASY CODE Q11-Q20 ------\n";
    // Q11: Reverse
    string s="hello"; string rev=s; reverse(rev.begin(), rev.end());
    cout << "Q11: Reverse hello -> " << rev << "\n";
    // Q12: Palindrome
    string p="madam"; bool isP=true; for(int i=0;i<p.size()/2;i++) if(p[i]!=p[p.size()-1-i]) isP=false;
    cout << "Q12: Palindrome madam? " << (isP?"Yes":"No") << "\n";
    // Q13: Vowel count
    string vc="Hello"; int c=0; for(char ch:vc){ char lo=tolower(ch); if(lo=='a'||lo=='e'||lo=='i'||lo=='o'||lo=='u') c++; }
    cout << "Q13: Vowels in Hello=" << c << "\n";
    // Q14: Toggle case
    string tg="AbC"; for(int i=0;i<tg.size();i++) tg[i]= islower(tg[i])? toupper(tg[i]): tolower(tg[i]);
    cout << "Q14: Toggle AbC -> " << tg << "\n";
    // Q15: Uppercase
    string up="abc"; for(char &ch: up) ch=toupper(ch); cout << "Q15: Upper abc -> " << up << "\n";
    cout << "Q16: Lower ABC -> abc using tolower()\n";
    cout << "Q17: Count spaces in 'a b c' = 2 using loop if(c==' ') count++\n";
    cout << "Q18: Copy string without = -> loop char by char\n";
    cout << "Q19: Length without size() -> loop till \\0 or count chars\n";
    cout << "Q20: Remove spaces 'a b' -> 'ab' using new string if(c!=' ') add\n\n";

    // SECTION 3: MEDIUM Q21-Q35
    cout << "------ SECTION 3: MEDIUM Q21-Q35 ------\n";
    cout << "Q21: Anagram? sort or freq[26] method\n";
    cout << "Q22: Frequency? int freq[26]={0}; freq[c-'a']++\n";
    cout << "Q23: First non-repeating in 'swiss' -> s using freq\n";
    cout << "Q24: Remove duplicates 'hello' -> 'helo' using seen array\n";
    cout << "Q25: Count words? count spaces +1 or flag method\n";
    cout << "Q26: Reverse each word 'Hello World' -> 'olleH dlroW'\n";
    cout << "Q27: Largest word in sentence -> split and track max len\n";
    cout << "Q28: Check only digits '123' -> loop isdigit(c)\n";
    cout << "Q29: Check only alphabets -> isalpha(c)\n";
    cout << "Q30: Convert '123' to int -> stoi('123')\n";
    cout << "Q31: Convert int to string -> to_string(123)\n";
    cout << "Q32: Find substring 'World' in 'HelloWorld' -> s.find('World')\n";
    cout << "Q33: Substring extraction -> s.substr(pos,len)\n";
    cout << "Q34: Replace part -> s.replace(pos,len,newStr)\n";
    cout << "Q35: Insert ' ' in 'HelloWorld' -> s.insert(5,\" \")\n\n";

    // SECTION 4: BUILTIN & STL Q36-Q45
    cout << "------ SECTION 4: BUILTIN Q36-Q45 ------\n";
    cout << "Q36: erase() use? s.erase(pos,len) deletes\n";
    cout << "Q37: compare() returns? 0 equal, <0 smaller, >0 greater\n";
    cout << "Q38: npos means? not found, value -1\n";
    cout << "Q39: c_str()? returns const char* for C compatibility\n";
    cout << "Q40: capacity() vs size()? capacity=allocated, size=actual\n";
    cout << "Q41: strcat vs +? strcat for char[], + for string class\n";
    cout << "Q42: strcmp vs ==? strcmp for char[], == for string\n";
    cout << "Q43: getline difference? cin.getline for char[], getline(cin,s) for string\n";
    cout << "Q44: Sort string 'dcba' -> 'abcd' using sort(s.begin(), s.end())\n";
    string sortS="dcba"; sort(sortS.begin(), sortS.end()); cout << " Example: dcba sorted -> " << sortS << "\n";
    cout << "Q45: Reverse using two pointers swap\n\n";

    // SECTION 5: HARD Q46-Q50
    cout << "------ SECTION 5: HARD Q46-Q50 ------\n";
    cout << "Q46: Longest palindrome substring? expand around center O(n^2)\n";
    cout << "Q47: Count palindromic substrings? expand around center count\n";
    cout << "Q48: Check rotation 'ABCD' is rotation of 'CDAB'? check (s1+s1).find(s2)!=npos\n";
    string rot1="ABCD"; string rot2="CDAB"; string temp=rot1+rot1;
    cout << " Is CDAB rotation of ABCD? " << (temp.find(rot2)!=string::npos?"Yes":"No") << "\n";
    cout << "Q49: Compress string 'aaabbc' -> 'a3b2c1' using count\n";
    string comp="aaabbc"; string res=""; int cnt=1;
    for(int i=1;i<=comp.size();i++){
        if(i<comp.size() && comp[i]==comp[i-1]) cnt++; // Same char increase count
        else { res+=comp[i-1]; res+=to_string(cnt); cnt=1; } // Append char+count
    }
    cout << " aaabbc compressed -> " << res << "\n";
    cout << "Q50: Valid anagram with case ignore? convert to lower then freq method\n";

    cout << "\n================================================================\n";
    cout << "ALL 50 DONE - STRING MODULE COMPLETE\n";
    cout << "================================================================\n";
    return 0;
}