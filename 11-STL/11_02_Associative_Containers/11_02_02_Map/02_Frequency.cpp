#include <bits/stdc++.h>
using namespace std;

/*
    11_02_02_Map / 02_Frequency.cpp
    MOST IMPORTANT USE OF MAP: Frequency Count
    This pattern is asked in 90% of interviews
*/

int main() {
    // Example 1: Frequency of array elements
    vector<int> v = {1,2,2,3,3,3,4};
    map<int, int> freq;

    for(int x : v){
        freq[x]++; // If key not present, auto creates with 0 then ++
    }

    cout << "Frequency:\n";
    for(auto it : freq){
        cout << it.first << " appears " << it.second << " times\n";
    }

    // Example 2: Frequency of characters in string
    string s = "hello";
    map<char, int> charFreq;
    for(char c : s) charFreq[c]++;

    cout << "\nChar Frequency:\n";
    for(auto it : charFreq){
        cout << it.first << " -> " << it.second << endl;
    }
    // e:1, h:1, l:2, o:1 - Sorted by char

    // Example 3: Check if element exists using frequency map
    int query = 3;
    if(freq.count(query)) cout << "\n" << query << " exists!" << endl;

    // Example 4: Map with string key - Student Marks
    map<string, int> studentMarks;
    studentMarks["Aman"] = 90;
    studentMarks["Riya"] = 95;
    studentMarks["Aman"] = 92; // Update

    cout << "\nStudent Marks:\n";
    for(auto it : studentMarks){
        cout << it.first << " : " << it.second << endl;
    }
    // Sorted by Name automatically: Aman, Riya

    return 0;
}next