#include <bits/stdc++.h>
using namespace std;

/*
    11_01_01_03_Practice_Questions / 00_10_Questions.cpp
    10 Questions on Vectors - Best for Interview
*/

int main() {

    // Q1: Create a vector of size n and take input
    int n = 5;
    vector<int> v(n);
    // for(int i=0; i<n; i++) cin >> v[i];

    // Q2: Find the largest and smallest element
    vector<int> v2 = {10, 5, 20, 8, 15};
    int maxi = *max_element(v2.begin(), v2.end());
    int mini = *min_element(v2.begin(), v2.end());
    cout << "Max: " << maxi << " Min: " << mini << endl;

    // Q3: Reverse the vector
    reverse(v2.begin(), v2.end());
    // Now v2 = {15, 8, 20, 5, 10}

    // Q4: Check if vector is sorted
    cout << "Is Sorted? " << is_sorted(v2.begin(), v2.end()) << endl;

    // Q5: Count occurrence of x = 5
    vector<int> v3 = {1, 5, 2, 5, 5, 3};
    int cnt = count(v3.begin(), v3.end(), 5);
    cout << "Count of 5: " << cnt << endl; // 3

    // Q6: Remove duplicates - IMP for interviews
    // Note: Works only if sorted first
    vector<int> v4 = {1, 1, 2, 2, 2, 3, 3};
    sort(v4.begin(), v4.end());
    v4.erase(unique(v4.begin(), v4.end()), v4.end());
    // v4 = {1, 2, 3}

    // Q7: Rotate vector by k = 2
    vector<int> v5 = {1, 2, 3, 4, 5};
    int k = 2;
    rotate(v5.begin(), v5.begin() + k, v5.end());
    // v5 = {3, 4, 5, 1, 2}

    // Q8: Find second largest element
    vector<int> v6 = {10, 20, 4, 45, 99};
    sort(v6.begin(), v6.end());
    cout << "Second Largest: " << v6[v6.size() - 2] << endl;

    // Q9: Sum and Average
    vector<int> v7 = {1, 2, 3, 4, 5};
    int sum = accumulate(v7.begin(), v7.end(), 0);
    cout << "Sum: " << sum << " Avg: " << sum / v7.size() << endl;

    // Q10: Merge 2 sorted vectors into one
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    vector<int> merged(6);
    merge(a.begin(), a.end(), b.begin(), b.end(), merged.begin());
    for(int x: merged) cout << x << " "; // 1 2 3 4 5 6

    return 0;
}