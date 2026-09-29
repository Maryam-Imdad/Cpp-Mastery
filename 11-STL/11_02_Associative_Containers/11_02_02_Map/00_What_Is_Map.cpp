#include <bits/stdc++.h>
using namespace std;

/*
    11_02_02_Map / 00_What_Is_Map.cpp

    WHAT IS MAP?
    - Associative Container
    - Stores Key-Value pairs
    - Key must be unique, Value can be duplicate
    - Implemented using Red-Black Tree (Balanced BST)
    - Sorted by Key in ascending order automatically
    - Search, Insert, Delete -> O(log n)

    Example: Dictionary
    Key = Word, Value = Meaning

    Syntax: map<key_type, value_type> name;
*/

int main() {
    // Declaration
    map<int, string> mp;

    // 1. Insertion - 3 ways
    mp[1] = "Apple"; // Way 1: Using []
    mp.insert({2, "Banana"}); // Way 2: Using insert with pair
    mp.insert(make_pair(3, "Cherry")); // Way 3: make_pair

    // Keys are auto-sorted: 1, 2, 3
    // If you insert mp[1] again, it will UPDATE, not duplicate

    // 2. Access
    cout << "Value at key 2: " << mp[2] << endl;
    cout << "Value at key 1: " << mp.at(1) << endl;

    // 3. Traversal - Key is mp.first, Value is mp.second
    cout << "\nMap elements:\n";
    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }

    // 4. Another traversal using iterator
    cout << "\nUsing iterator:\n";
    for(auto it = mp.begin(); it!= mp.end(); it++){
        cout << it->first << " => " << it->second << endl;
    }

    return 0;
}