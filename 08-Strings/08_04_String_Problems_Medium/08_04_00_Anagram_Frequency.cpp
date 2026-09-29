#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*

TOPIC: Anagram & Frequency

Anagram: Same chars but different order. ex: listen <-> silent
Two ways:
1. Sort both strings, if equal -> anagram O(n log n)
2. Frequency count array of 26 letters O(n)

Frequency: Count how many times each char appears.
Use int freq[26] = {0}; for each char freq[c-'a']++
*/

int main(){
    cout << "================================================================\n";
    cout << "08_04_00 - ANAGRAM FREQUENCY\n";
    cout << "================================================================\n\n";

    string s1="listen", s2="silent";
    // Method 1: Sort
    string t1=s1, t2=s2;
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    cout << "Anagram check by sort: " << (t1==t2?"Yes":"No") << "\n";

    // Method 2: Frequency O(n)
    int freq1[26]={0}, freq2[26]={0};
    for(char c: s1) freq1[c-'a']++; // Increase count
    for(char c: s2) freq2[c-'a']++;
    bool ana=true;
    for(int i=0;i<26;i++) if(freq1[i]!=freq2[i]) ana=false;
    cout << "Anagram by freq: " << (ana?"Yes":"No") << "\n";

    // Frequency of string "hello"
    string f="hello";
    int freq[26]={0};
    for(char c: f) freq[c-'a']++;
    cout << "\nFrequency of hello:\n";
    for(int i=0;i<26;i++) if(freq[i]>0) cout << (char)('a'+i) << "=" << freq[i] << "\n";

    cout << "\n================================================================\n";
    return 0;
}