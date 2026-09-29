#include <iostream>
using namespace std;
/*

FILE: 06_06_01_Local_vs_Global_Variables.cpp
TOPIC: LOCAL VS GLOBAL VARIABLES


PART A: BEGINNER - Definition

Local Variable:
- Inside function / block { }
- Example: int x inside main() or inside if{}
- Scope: Only inside that block
- Lifetime: Created at block start, destroyed at block end
- Default value: Garbage

Global Variable:
- Outside all functions, at top
- Scope: Whole file, all functions can use
- Lifetime: Whole program (start to end)
- Default value: 0 (for int)
- Bad practice if overused, but useful for config.

PART B: INTERMEDIATE - Shadowing & :: Operator

If global int a=10 and inside main int a=20, then main's a shadows global.
Inside main, a=20 will be used.

To access hidden global, use ::a (scope resolution operator)

Memory:
Local -> Stack
Global -> Data Segment (initialized) or BSS (uninitialized)

PART C: ADVANCE

Global can be accessed from other files using extern.
Local is safe - no name conflict with other functions.

Why avoid global? Any function can change it -> bugs hard to track.

PART D: SCHOLAR - Interview

Q: Local vs Global?
Local: block scope, stack, short lifetime, garbage default
Global: file scope, data segment, long lifetime, zero default

Q: What is shadowing?
Local name hides global name.

Q: How to access hidden global?
Using :: operator.
*/

int globalA = 100; // Global variable
int globalB = 200;

void show(){
    cout << "In show(), globalA = " << globalA << endl;
    int localInShow = 30;
    cout << "In show(), localInShow = " << localInShow << endl;
}

void shadowDemo(){
    int globalA = 5; // Shadows outer globalA
    cout << "Inside shadowDemo, local globalA = " << globalA << endl;
    cout << "Inside shadowDemo, global ::globalA = " << ::globalA << " (using ::)\n";
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_01 - LOCAL VS GLOBAL VARIABLES\n";
    cout << "================================================================\n\n";

    cout << "1. Global Access:\n";
    cout << "globalA = " << globalA << " , globalB = " << globalB << endl;
    show();
    cout << "\n";

    cout << "2. Local Variable Demo:\n";
    int localMain = 10;
    cout << "localMain in main = " << localMain << endl;
    if(true){
        int blockVar = 99;
        cout << "Inside block, blockVar = " << blockVar << endl;
        cout << "Inside block, localMain = " << localMain << " (outer accessible)\n";
    }
    // cout << blockVar; // ERROR - out of scope
    cout << "Outside block, blockVar not accessible (compile error if used)\n\n";

    cout << "3. Shadowing Demo:\n";
    shadowDemo();
    cout << "In main, globalA still = " << globalA << " (not changed)\n\n";

    cout << "4. Global Modify:\n";
    globalA = 150;
    cout << "Changed globalA to 150, now in main globalA=" << globalA << endl;
    show();

    cout << "\n================================================================\n";
    cout << "Key: Local safe but limited. Global powerful but risky.\n";
    cout << "Use :: to access hidden global.\n";
    cout << "================================================================\n";
    return 0;
}