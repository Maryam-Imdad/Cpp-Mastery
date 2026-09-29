#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "08_02_01_PRACTICE - String Operations (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Traverse and print each char with index
    cout << "Q1: Traverse 'Code'\n";
    string s1="Code";
    for(int i=0;i<s1.size();i++){
        cout << "s1["<<i<<"]="<<s1[i]<<"\n"; // Access each char
    }
    cout << "\n";

    // Q2: Concatenate using + operator
    cout << "Q2: Concat 'Good' + 'Morning'\n";
    string a="Good";
    string b="Morning";
    string c = a + " " + b; // + joins
    cout << c << "\n\n";

    // Q3: Concatenate using append()
    cout << "Q3: Concat using append()\n";
    string ap="Hello";
    ap.append(" "); // Append space
    ap.append("World"); // Append Word
    cout << ap << "\n\n";

    // Q4: Compare two strings for equality
    cout << "Q4: Compare 'abc' and 'abc'\n";
    string x="abc";
    string y="abc";
    if(x==y){ // Direct == works for string class
        cout << "Equal\n";
    }
    else{
        cout << "Not Equal\n";
    }
    // Manual compare logic:
    bool equal=true;
    if(x.size()!=y.size()) equal=false;
    else{
        for(int i=0;i<x.size();i++){
            if(x[i]!=y[i]){ equal=false; break; } // Mismatch found
        }
    }
    cout << "Manual check: " << (equal?"Equal":"Not Equal") << "\n\n";

    // Q5: Compare lexicographically (which is greater)
    cout << "Q5: Compare 'apple' vs 'banana' lexicographically\n";
    string sA="apple";
    string sB="banana";
    if(sA < sB){ // < operator compares ASCII dictionary order
        cout << sA << " is smaller than " << sB << "\n";
    }
    else{
        cout << sB << " is smaller\n";
    }
    // compare() method:
    int comp = sA.compare(sB); // Negative means sA < sB
    cout << "compare() result: " << comp << "\n\n";

    // Q6: Insert substring at position
    cout << "Q6: Insert 'XX' at position 1 in 'Hello'\n";
    string ins="Hello";
    cout << "Before: " << ins << "\n";
    ins.insert(1, "XX"); // At index 1 insert XX
    cout << "After: " << ins << "\n\n";

    // Q7: Delete substring from string
    cout << "Q7: Delete 2 chars from pos 1 in 'HXXello'\n";
    string del="HXXello";
    cout << "Before: " << del << "\n";
    del.erase(1,2); // From index 1 delete 2 chars
    cout << "After: " << del << "\n\n";

    // Q8: Append char by char in loop (building string)
    cout << "Q8: Build string from chars\n";
    string build="";
    for(char ch='a'; ch<='e'; ch++){
        build += ch; // += appends one char
    }
    cout << "Built: " << build << "\n\n";

    // Q9: Find length of concatenated string
    cout << "Q9: Length after concat\n";
    string sL1="Hello";
    string sL2="World";
    string joined = sL1 + sL2;
    cout << sL1 << " + " << sL2 << " = " << joined << " length=" << joined.size() << "\n\n";

    // Q10: Update / Replace part of string
    cout << "Q10: Replace 'World' with 'C++' in 'HelloWorld'\n";
    string rep="HelloWorld";
    cout << "Before: " << rep << "\n";
    rep.replace(5,5,"C++"); // From pos 5, replace 5 chars with C++
    cout << "After replace(5,5,\"C++\"): " << rep << "\n";
    // Manual: erase + insert
    string rep2="HelloWorld";
    rep2.erase(5,5); // Delete World
    rep2.insert(5,"C++"); // Insert C++
    cout << "Manual erase+insert: " << rep2 << "\n";

    cout << "\n================================================================\n";
    return 0;
}