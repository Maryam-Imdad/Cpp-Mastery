#include <bits/stdc++.h>
using namespace std;

/*
    11_06_Algorithms / 00_All_Algos.cpp
    ALL IMPORTANT STL ALGORITHMS - Covers 90% Interviews
*/

int main() {
    vector<int> v = {5,1,9,2,8,3,5};

    // 1. SORTING - O(n log n)
    sort(v.begin(), v.end()); // Ascending
    sort(v.begin(), v.end(), greater<int>()); // Descending: {9,8,5,5,3,2,1}

    // 2. REVERSE, ROTATE - O(n)
    reverse(v.begin(), v.end());
    rotate(v.begin(), v.begin()+2, v.end()); // Left rotate by 2

    // 3. MIN/MAX
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;

    // 4. COUNT, FIND - O(n)
    cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;
    auto it = find(v.begin(), v.end(), 9);
    cout << "Found 9 at index: " << it - v.begin() << endl;

    // 5. BINARY SEARCH - O(log n) - ONLY ON SORTED DATA
    vector<int> s = {1,2,3,4,5};
    cout << "binary_search(3): " << binary_search(s.begin(), s.end(), 3) << endl;
    cout << "lower_bound(3) index: " << lower_bound(s.begin(), s.end(), 3) - s.begin() << endl;
    cout << "upper_bound(3) index: " << upper_bound(s.begin(), s.end(), 3) - s.begin() << endl;

    // 6. ACCUMULATE - Sum - O(n) - needs <numeric> but bits includes
    int sum = accumulate(s.begin(), s.end(), 0);
    cout << "Sum: " << sum << endl;

    // 7. UNIQUE, DUPLICATE REMOVE - O(n)
    vector<int> dup = {1,1,2,2,2,3};
    sort(dup.begin(), dup.end());
    dup.erase(unique(dup.begin(), dup.end()), dup.end()); // {1,2,3}

    // 8. NEXT_PERMUTATION
    vector<int> p = {1,2,3};
    next_permutation(p.begin(), p.end()); // {1,3,2}

    // 9. ALL_OF, ANY_OF, NONE_OF - C++11
    cout << "All >0? " << all_of(s.begin(), s.end(), [](int x){return x>0;}) << endl;
    cout << "Any >4? " << any_of(s.begin(), s.end(), [](int x){return x>4;}) << endl;

    // 10. MERGE, INPLACE_MERGE
    vector<int> a={1,3,5}, b={2,4,6}, c(6);
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin()); // {1,2,3,4,5,6}

    return 0;
}