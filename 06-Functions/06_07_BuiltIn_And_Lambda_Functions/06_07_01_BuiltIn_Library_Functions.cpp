#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
/*

FILE: 06_07_01_BuiltIn_Library_Functions.cpp
TOPIC: BUILTIN / LIBRARY FUNCTIONS


PART A: BEGINNER - What is Built-in?

Functions already written, we just include header and use.

We used: cout, cin -> iostream
Now:
<cmath>: sqrt, pow, abs, sin, cos
<algorithm>: sort, max, min, reverse
<string>: length, substr etc
<cctype>: toupper, tolower

No need to write own logic. Ready-made.

PART B: INTERMEDIATE - Categories

1. <cmath>: Math
   sqrt(25)=5, pow(2,3)=8, abs(-5)=5, ceil(2.3)=3, floor(2.8)=2

2. <algorithm>: Array/Vector helpers
   max(a,b), min(a,b), sort(arr, arr+n), reverse()

3. <cstdlib>: rand(), srand()

4. <string>: string library functions

PART C: ADVANCE - Why use?

Tested, optimized, fast. Don't reinvent wheel.

PART D: SCHOLAR - Interview

Q: Builtin vs User Defined?
Builtin: provided by language library
User: we make.

Q: Example of <cmath>?
sqrt, pow.

Q: Header for sort? <algorithm>
*/

int main(){
    cout << "================================================================\n";
    cout << "06_07_01 - BUILTIN LIBRARY FUNCTIONS\n";
    cout << "================================================================\n\n";

    cout << "1. <cmath> functions:\n";
    cout << "sqrt(25) = " << sqrt(25) << endl;
    cout << "pow(2,5) = " << pow(2,5) << endl;
    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "ceil(2.3) = " << ceil(2.3) << " floor(2.8) = " << floor(2.8) << endl;
    cout << "sin(0) = " << sin(0) << " cos(0) = " << cos(0) << "\n\n";

    cout << "2. <algorithm> functions:\n";
    cout << "max(10,20) = " << max(10,20) << " min(10,20) = " << min(10,20) << endl;
    int arr[] = {3,1,2};
    sort(arr, arr+3);
    cout << "sort([3,1,2]) = [" << arr[0] << "," << arr[1] << "," << arr[2] << "]\n\n";

    cout << "3. <string> functions:\n";
    string s = "HelloCpp";
    cout << "s = " << s << " length = " << s.length() << endl;
    cout << "substr(0,5) = " << s.substr(0,5) << endl;
    cout << "toupper demo: " << (char)toupper('a') << endl;

    cout << "\n================================================================\n";
    cout << "Key: Builtin = Ready-made, just include header and use.\n";
    cout << "================================================================\n";
    return 0;
}