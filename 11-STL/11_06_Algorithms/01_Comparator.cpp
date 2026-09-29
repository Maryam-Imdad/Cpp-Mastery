#include <bits/stdc++.h>
using namespace std;

/*
    11_06_Algorithms / 01_Comparator.cpp
    CUSTOM COMPARATOR - MOST IMPORTANT FOR SORTING

    Interview asks this 100% times
*/

// Comparator for descending
bool compDesc(int a, int b){
    return a > b; // if a > b, a comes first
}

// Comparator for pair - Sort by second value
bool compPair(pair<int,int> &a, pair<int,int> &b){
    if(a.second == b.second) return a.first < b.first; // If freq same, smaller element first
    return a.second > b.second; // Higher frequency first
}

int main() {
    // 1. Simple custom sort
    vector<int> v = {5,1,9,2};
    sort(v.begin(), v.end(), compDesc); // {9,5,2,1}
    cout << "Descending: ";
    for(int x: v) cout << x << " ";

    // 2. Lambda comparator - Modern way
    vector<int> v2 = {5,1,9,2};
    sort(v2.begin(), v2.end(), [](int a, int b){ return a > b; });

    // 3. Sort pairs by second element - Frequency problem
    vector<pair<int,int>> vp = {{1,2}, {2,1}, {3,5}, {4,2}};
    // Sort by frequency (second)
    sort(vp.begin(), vp.end(), compPair);
    cout << "\n\nSorted by freq:\n";
    for(auto p: vp) cout << p.first << " freq " << p.second << endl;

    // 4. Sort by absolute value / custom logic
    vector<int> v3 = {-5, -1, 3, -2, 4};
    sort(v3.begin(), v3.end(), [](int a, int b){ return abs(a) < abs(b); });
    cout << "\nSorted by abs: ";
    for(int x: v3) cout << x << " "; // -1, -2, 3, 4, -5

    // 5. For map/set - Custom order
    // map<int, int, greater<int>> mp; // Descending keys
    map<int, int, greater<int>> mp_desc;
    mp_desc[1]=10; mp_desc[3]=30; mp_desc[2]=20;
    cout << "\n\nMap descending keys: ";
    for(auto it: mp_desc) cout << it.first << " ";

    return 0;
}