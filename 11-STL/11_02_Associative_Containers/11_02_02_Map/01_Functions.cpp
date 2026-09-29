#include <bits/stdc++.h>
using namespace std;

/*
    11_02_02_Map / 01_Functions.cpp
    ALL MAP FUNCTIONS - Deep Dive
*/

int main() {
    map<int, string> mp = {{1, "A"}, {2, "B"}, {3, "C"}};

    // 1. insert() - O(log n)
    mp.insert({4, "D"});
    mp[5] = "E";

    // 2. emplace() - Faster, in-place construction
    mp.emplace(6, "F");

    // 3. find() - O(log n) - Returns iterator to key, else mp.end()
    auto it = mp.find(2);
    if(it!= mp.end()) cout << "Found: " << it->second << endl;
    else cout << "Not Found" << endl;

    // 4. count() - O(log n) - Returns 1 if key exists, 0 if not
    cout << "Count of key 3: " << mp.count(3) << endl; // 1
    cout << "Count of key 10: " << mp.count(10) << endl; // 0

    // 5. erase() - O(log n)
    // By key
    mp.erase(2); // Erase key 2
    // By iterator
    mp.erase(mp.find(3));
    // By range
    // mp.erase(mp.begin(), mp.find(5));

    // 6. size(), empty(), clear()
    cout << "Size: " << mp.size() << endl;
    cout << "Empty? " << mp.empty() << endl;
    // mp.clear();

    // 7. lower_bound() and upper_bound() - IMP for interviews
    map<int, int> mp2 = {{10,1},{20,2},{30,3},{40,4}};
    auto lb = mp2.lower_bound(25); // First key >= 25 -> 30
    auto ub = mp2.upper_bound(30); // First key > 30 -> 40
    cout << "Lower bound of 25: " << lb->first << endl;
    cout << "Upper bound of 30: " << ub->first << endl;

    // 8. Special: mp[key] creates entry if not exists!
    map<int, int> mp3;
    cout << mp3[100]; // Prints 0 but CREATES key 100 with value 0
    cout << "\nSize after mp3[100]: " << mp3.size() << endl; // 1
    // Use mp.at(100) to avoid this, it will throw error if not found

    return 0;
}