#include <bits/stdc++.h>
using namespace std;

/*
    11_06_Algorithms / 02_Practice.cpp
    10 PRACTICE QUESTIONS ON ALGORITHMS
*/

int main() {
    // Q1: Sort and find second largest
    vector<int> v = {10,5,20,8};
    sort(v.begin(), v.end());
    cout << "Second largest: " << v[v.size()-2] << endl;

    // Q2: Check if array is sorted
    cout << "Is sorted? " << is_sorted(v.begin(), v.end()) << endl;

    // Q3: Count occurrences of x using count()
    vector<int> v2 = {1,2,2,3,2,4};
    cout << "Count 2: " << count(v2.begin(), v2.end(), 2) << endl;

    // Q4: Find first occurrence
    auto it = find(v2.begin(), v2.end(), 3);
    if(it!=v2.end()) cout << "Found at: " << it - v2.begin() << endl;

    // Q5: Reverse array
    reverse(v2.begin(), v2.end());

    // Q6: Rotate by k=2
    rotate(v2.begin(), v2.begin()+2, v2.end());

    // Q7: Sum using accumulate
    cout << "Sum: " << accumulate(v2.begin(), v2.end(), 0) << endl;

    // Q8: Binary search on sorted
    vector<int> s = {1,2,3,4,5};
    cout << "Has 4? " << binary_search(s.begin(), s.end(), 4) << endl;

    // Q9: Remove duplicates
    vector<int> d = {1,1,2,2,3};
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    // Q10: Merge 2 sorted arrays
    vector<int> a={1,3,5}, b={2,4,6}, c(6);
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    cout << "Merged: ";
    for(int x: c) cout << x << " ";

    return 0;
}