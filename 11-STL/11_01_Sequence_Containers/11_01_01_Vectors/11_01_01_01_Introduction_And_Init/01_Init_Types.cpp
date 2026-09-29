#include <bits/stdc++.h>
using namespace std;

/*
    Different ways to initialize a Vector
*/

int main() {
    // 1. Empty vector
    vector<int> v1;

    // 2. With size 5, all values 0
    vector<int> v2(5, 0); // [0,0,0,0,0]

    // 3. With values
    vector<int> v3 = {1, 2, 3, 4, 5};

    // 4. From another vector
    vector<int> v4(v3); // copy of v3

    // 5. With size only (garbage / 0)
    vector<int> v5(5); // [0,0,0,0,0]

    // 6. 2D Vector - Important
    vector<vector<int>> matrix(3, vector<int>(3, 0)); // 3x3 with 0

    // 7. Vector of strings
    vector<string> names = {"Ali", "Ahmad", "Umar"};

    // Print
    for(int x : v3) cout << x << " ";

    cout << "\n2D Vector: " << matrix.size() << "x" << matrix[0].size() << endl;

    return 0;
}