#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

FILE: 06_07_02_Lambda_Functions_C++11.cpp
TOPIC: LAMBDA FUNCTIONS - C++11


PART A: BEGINNER - What is Lambda?

Anonymous function - function with no name.
One time use, small function.

Syntax: [capture](params){ body }

[] = capture list (what outside vars you want)
() = parameters
{} = body

Example: auto add = [](int a,int b){ return a+b; };
add(2,3) -> 5

Real Life: Like sticky note small function, use and throw.

PART B: INTERMEDIATE - Capture

[] - captures nothing
[=] - captures all outside vars by value (copy)
[&] - captures all by reference (can modify)
[x, &y] - x by value, y by reference

Example:
int x=10, y=20;
auto f = [=](){ cout << x+y; }; // captures x,y copy
auto f2 = [&](){ x++; }; // can change x

PART C: ADVANCE - Where used?

With STL algorithms: for_each, sort with custom comparator.

Example: sort by second element using lambda comparator.

Lambda vs Function: Lambda can capture local context, function cannot.

PART D: SCHOLAR - Interview

Q: What is Lambda? Anonymous function introduced C++11.
Q: Capture list? Tells what outside vars lambda can use.
Q: [=] vs [&]? = by value (read only copy), & by reference (can modify original)
Q: Where stored? Like functor object.
*/

int main(){
    cout << "================================================================\n";
    cout << "06_07_02 - LAMBDA FUNCTIONS C++11\n";
    cout << "================================================================\n\n";

    cout << "1. Basic Lambda:\n";
    auto add = [](int a, int b){ return a+b; };
    cout << "add(5,3) = " << add(5,3) << endl;

    auto square = [](int x){ return x*x; };
    cout << "square(6) = " << square(6) << "\n\n";

    cout << "2. Capture Demo:\n";
    int x = 10, y = 20;
    auto printSum = [=](){ cout << "Captured [=] x+y=" << x+y << endl; };
    printSum();

    auto incX = [&](){ x++; cout << "Captured [&] x++ => x=" << x << endl; };
    incX();
    cout << "Now x in main = " << x << "\n\n";

    cout << "3. Lambda with STL for_each:\n";
    vector<int> v = {1,2,3,4,5};
    cout << "Vector: ";
    for_each(v.begin(), v.end(), [](int n){ cout << n << " "; });
    cout << "\n\n";

    cout << "4. Lambda comparator for sort descending:\n";
    sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
    cout << "Sorted desc: ";
    for(int n: v) cout << n << " ";
    cout << "\n\n";

    cout << "5. Lambda with params capturing outer:\n";
    int factor = 2;
    auto multiply = [factor](int n){ return n * factor; };
    cout << "multiply(10) with factor 2 = " << multiply(10) << endl;

    cout << "\n================================================================\n";
    cout << "Key: Lambda = [capture](params){body} - anonymous, C++11.\n";
    cout << "================================================================\n";
    return 0;
}