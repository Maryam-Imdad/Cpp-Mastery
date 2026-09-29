#include <iostream>
using namespace std;
/*

FILE: 06_06_02_Static_Variables_In_Function.cpp
TOPIC: STATIC VARIABLES IN FUNCTION


PART A: BEGINNER - What is Static?

Normal local: dies after function ends. Next call creates fresh.

Static local: Lives whole program! Remembers last value.
Scope is still inside function only, but lifetime is global.

Syntax: static int count = 0;

Real Life: Like attendance register in class room. Class ends, students leave,
but register stays, remembers. Next day continues from old count.

PART B: INTERMEDIATE - How it works?

Memory: Static stored in Data Segment, not Stack.
Initialization: Only once, first time function called. Not every time.
Default value: 0 (if not given) unlike normal local garbage.

Example:
void fun(){
  static int a=0; // init once
  a++;
  cout<<a;
}
fun() -> 1
fun() -> 2
fun() -> 3 (remembers!)

Normal int would give 1,1,1 every time.

PART C: ADVANCE - Use Cases

1. Counter: How many times function called
2. Cache / Memoization: Store previous result
3. Singleton pattern (in OOP later)
4. Avoid global but need memory

Static vs Global:
Global: scope everywhere, risky
Static local: scope limited but lifetime global -> safer

PART D: SCHOLAR - Interview

Q: Where static stored? Data Segment, not Stack.
Q: When initialized? At compile time / first call, only once.
Q: Default value? 0
Q: Can other functions access static local? No, scope is function only.
Q: Static function variable thread safe? In C++11 initialization is thread safe.
*/

void normalVarDemo(){
    int count = 0; // Normal - fresh every time
    count++;
    cout << "Normal count = " << count << " (always 1)" << endl;
}

void staticVarDemo(){
    static int count = 0; // Static - remembers
    count++;
    cout << "Static count = " << count << " (increases)" << endl;
}

void staticInitDemo(){
    static int x = 100; // Only initialized first time
    cout << "x = " << x << endl;
    x += 10;
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_02 - STATIC VARIABLES IN FUNCTION\n";
    cout << "================================================================\n\n";

    cout << "1. Normal Variable (dies each time):\n";
    normalVarDemo();
    normalVarDemo();
    normalVarDemo();
    cout << "\n";

    cout << "2. Static Variable (remembers):\n";
    staticVarDemo();
    staticVarDemo();
    staticVarDemo();
    cout << "\n";

    cout << "3. Static Initialization Only Once:\n";
    staticInitDemo();
    staticInitDemo();
    staticInitDemo();
    cout << "Note: x initialized 100 only first time, then 110,120...\n\n";

    cout << "4. Static Default Value is 0:\n";
    auto demoDefault = [](){
        static int s; // not initialized
        cout << "Default static = " << s << " (0, not garbage)\n";
    };
    demoDefault();

    cout << "\n================================================================\n";
    cout << "Key: static = Local scope + Global lifetime + Remembers.\n";
    cout << "================================================================\n";
    return 0;
}