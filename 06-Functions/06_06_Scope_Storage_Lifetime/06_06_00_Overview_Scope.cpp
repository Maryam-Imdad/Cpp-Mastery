#include <iostream>
using namespace std;
/*

FILE: 06_06_00_Overview_Scope.cpp
TOPIC: SCOPE, STORAGE, LIFETIME - OVERVIEW
ROLE: Intro file for 06_06 folder


PART A: BEGINNER - What is Scope?

Scope = Where variable can be seen/used.

Example: Variable inside function only lives inside that function.
Outside function you cannot access it.

Lifetime = How long variable lives in memory.
Storage Class = Where it is stored (stack, data segment etc)

Real Life: Your house key scope is your house only. Office key scope office only.
You cannot use house key in office.

PART B: INTERMEDIATE - 3 Types

1. Local: Inside function { }. Created when function called, destroyed when exit.
   Memory: Stack. Lifetime: Function duration.

2. Global: Outside all functions. Visible everywhere. Lives whole program.
   Memory: Data Segment. Lifetime: Program start to end.

3. Static: Inside function but remembers value. Lives whole program but scope local.
   Memory: Data Segment. Lifetime: Whole program but visible only inside function.

PART C: ADVANCE - Shadowing

If local and global have same name, local wins (shadows global).
To access global, use ::globalVar (scope resolution operator).

PART D: SCHOLAR - Roadmap

06_06_01_Local_vs_Global_Variables.cpp
   -> Local, Global, Shadowing, :: operator
06_06_02_Static_Variables_In_Function.cpp
   -> static keyword, counter example
06_06_03_Lifetime_And_Storage_Classes.cpp
   -> auto, static, register, extern, memory layout

Interview: Local vs Global vs Static difference is hot question.
*/

int globalVar = 100; // Global - accessible everywhere

void demoLocal(){
    int localVar = 50; // Local - only inside this function
    cout << "Inside demoLocal, localVar = " << localVar << endl;
    cout << "Inside demoLocal, globalVar = " << globalVar << endl;
}

void demoStatic(){
    static int count = 0; // Static - remembers, lives whole program
    count++;
    cout << "demoStatic called " << count << " times" << endl;
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_00 - OVERVIEW - Scope, Storage, Lifetime\n";
    cout << "================================================================\n\n";

    cout << "ROADMAP OF 06_06 FOLDER:\n";
    cout << "1. 06_06_01_Local_vs_Global_Variables\n";
    cout << "2. 06_06_02_Static_Variables_In_Function\n";
    cout << "3. 06_06_03_Lifetime_And_Storage_Classes\n";
    cout << "----------------------------------------\n\n";

    cout << "Demo Global vs Local:\n";
    cout << "globalVar in main = " << globalVar << endl;
    demoLocal();
    // cout << localVar; // ERROR - not in scope here

    cout << "\nDemo Static - remembers value:\n";
    demoStatic();
    demoStatic();
    demoStatic();

    cout << "\n================================================================\n";
    cout << "Key: Scope=Where visible, Lifetime=How long alive.\n";
    cout << "================================================================\n";
    return 0;
}