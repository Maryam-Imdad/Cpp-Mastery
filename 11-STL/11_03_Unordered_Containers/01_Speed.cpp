#include <bits/stdc++.h>
using namespace std;

/*
    11_03_Unordered_Containers / 00_Unordered.cpp

    WHAT IS UNORDERED?
    - No sorting, uses Hash Table internally
    - Average O(1) for insert/find/delete vs O(log n) for Map/Set
    - Worst case O(n) if hash collision
    - Order is RANDOM, not sorted

    Types:
    1. unordered_set -> unique values, no sorting
    2. unordered_map -> unique keys, no sorting

    When to use?
    - When you need speed O(1) and don't care about sorted order
    - 90% of coding interviews use unordered_map for frequency
*/

int main() {
    // 1. unordered_set
    unordered_set<int> us;
    us.insert(10);
    us.insert(5);
    us.insert(20);
    us.insert(5); // Duplicate ignored

    cout << "Unordered Set (random order): ";
    for(int x : us) cout << x << " ";
    cout << endl;

    // 2. unordered_map - Most used in interviews
    unordered_map<int, string> ump;
    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[10] = "Mango";

    cout << "\nUnordered Map (random order):\n";
    for(auto it : ump){
        cout << it.first << " -> " << it.second << endl;
    }

    // 3. All functions same as map/set
    ump.find(2); // O(1) avg
    ump.count(1); // O(1) avg
    ump.erase(2);

    // 4. Frequency with unordered_map - FASTEST WAY
    vector<int> v = {1,2,2,3,3,3};
    unordered_map<int, int> freq;
    for(int x: v) freq[x]++;

    cout << "\nFrequency using unordered_map:\n";
    for(auto it: freq) cout << it.first << " : " << it.second << endl;

    return 0;
}