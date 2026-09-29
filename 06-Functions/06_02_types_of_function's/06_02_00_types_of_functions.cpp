#include <iostream>
using namespace std;
/*

FILE: 06_02_00_types_of_functions.cpp
TOPIC: TYPES OF FUNCTIONS - OVERVIEW / ROADMAP FILE
ROLE: This is Intro File - It explains what we will study
      in this whole 06_02 folder.


PART A: BEGINNER - What is Type?

In 06_01 we learned WHAT is a function.
Now in 06_02 we will learn HOW MANY WAYS we can make a function.

Simple Question: Function input leta hai? Output deta hai?
Based on this 2 questions, 2x2 = 4 combinations banty hain.
This is called TYPES OF FUNCTIONS based on Argument & Return.

PART B: INTERMEDIATE - The 4 Main Types Roadmap

This folder 06_02_types_of_function's.cpp has 4 sub-types.
We made separate file for each for clear learning.

1. 06_02_01_No_Arg_No_Return.cpp
   -> Takes nothing, Returns nothing
   -> Example: void greet() { cout << "Hello"; }
   -> Use: Just to do some work, like printing menu.

2. 06_02_02_No_Arg_With_Return.cpp
   -> Takes nothing, Returns something
   -> Example: int getNumber() { return 100; }
   -> Use: To get some value, like random number, user input.

3. 06_02_03_With_Arg_No_Return.cpp
   -> Takes something, Returns nothing
   -> Example: void printSquare(int n) { cout << n*n; }
   -> Use: Takes data and performs action, but no result needed back.

4. 06_02_04_With_Arg_With_Return.cpp
   -> Takes something, Returns something (MOST USED - 90%)
   -> Example: int add(int a, int b) { return a+b; }
   -> Use: Takes input, processes, gives result back.

PART C: ADVANCE - Other Classifications (For Future)

After these 4, we will also study:
a) Call by Value vs Call by Reference (06_03)
b) Recursive Functions
c) Inline, Default Argument, Overloading

But for this 06_02 folder, our focus is only the 4 main types.

PART D: SCHOLAR - Why this Intro File?

Why we need 06_02_00 file?
- Big projects have 100+ functions.
- If we know type system, we can decide quickly:
  Does my function need input? Yes -> With Arg
  Does it need to return something? Yes -> With Return
- This file is like a MAP / INDEX of the folder.
*/

// Quick Demo of All 4 Types - Just for Overview
void type1_demo(){
    cout << "I am Type 1: No Arg, No Return";
}

int type2_demo(){
    return 50;
}

void type3_demo(int x){
    cout << "I am Type 3: Took value " << x << " but return nothing";
}

int type4_demo(int a, int b){
    return a + b;
}

int main(){
    cout << "================================================================\n";
    cout << "06_02_00 - TYPES OF FUNCTIONS - INTRO / OVERVIEW FILE\n";
    cout << "================================================================\n\n";

    cout << "This folder contains 4 main types of functions.\n";
    cout << "Based on: Argument (Input) and Return (Output)\n\n";

    cout << "----------------------------------------\n";
    cout << "ROADMAP OF THIS FOLDER:\n";
    cout << "----------------------------------------\n";
    cout << "1. 06_02_01_No_Arg_No_Return\n";
    cout << "   -> void greet()\n\n";

    cout << "2. 06_02_02_No_Arg_With_Return\n";
    cout << "   -> int getNumber()\n\n";

    cout << "3. 06_02_03_With_Arg_No_Return\n";
    cout << "   -> void print(int n)\n\n";

    cout << "4. 06_02_04_With_Arg_With_Return\n";
    cout << "   -> int add(int a, int b) [Most Important]\n";
    cout << "----------------------------------------\n\n";

    cout << "QUICK DEMO OF ALL 4 TYPES:\n\n";

    cout << "Type 1 Demo: ";
    type1_demo();
    cout << "\n";

    cout << "Type 2 Demo: Returned value = " << type2_demo() << "\n";

    cout << "Type 3 Demo: ";
    type3_demo(10);
    cout << "\n";

    cout << "Type 4 Demo: add(10,20) = " << type4_demo(10,20) << "\n\n";

    cout << "================================================================\n";
    cout << "Now open next files one by one to learn each type in detail.\n";
    cout << "================================================================\n";

    return 0;
}