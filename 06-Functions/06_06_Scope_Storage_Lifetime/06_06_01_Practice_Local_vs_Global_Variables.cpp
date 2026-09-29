#include <iostream>
using namespace std;

int globalX = 50;
int globalY = 100;

// Q1 function uses global
void addGlobals(){
    cout << globalX + globalY;
}

// Q2 shadow demo
int g = 10;

// Q3-10 helpers
void modifyGlobal(){
    globalX = globalX + 10;
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_01_PRACTICE - Local vs Global (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: Print globalX and globalY sum using function\n";
    cout << "Solution: ";
    addGlobals();
    cout << "\n\n";

    cout << "Q2: Shadowing - global g=10, local g=20, print both\n";
    int g = 20;
    cout << "Local g=" << g << " Global ::g=" << ::g << "\n\n";

    cout << "Q3: Local variable inside block, check scope\n";
    if(true){
        int inside = 77;
        cout << "Inside block inside=" << inside << "\n";
    }
    cout << "Outside block inside not accessible\n\n";

    cout << "Q4: Modify globalX from 50 to 60 via function\n";
    cout << "Before: " << globalX << " ";
    modifyGlobal();
    cout << "After: " << globalX << "\n\n";

    cout << "Q5: Local same name as global, which used?\n";
    int globalX_local = 5; // actually local named similar
    cout << "Local variable = " << globalX_local << " vs Global ::globalX=" << ::globalX << "\n\n";

    cout << "Q6: Can function access local of main? No\n";
    int mainLocal = 123;
    cout << "mainLocal=" << mainLocal << " only main can use, other functions cannot directly\n\n";

    cout << "Q7: Global default value demo (global initialized to 0 if not given)\n";
    cout << "globalX has value " << ::globalX << " (if not init, would be 0)\n\n";

    cout << "Q8: Two functions sharing global counter\n";
    globalY = 0;
    globalY++;
    cout << "After 1st increment globalY=" << globalY << "\n";
    globalY++;
    cout << "After 2nd increment globalY=" << globalY << "\n\n";

    cout << "Q9: Nested block accessing outer local\n";
    int outer = 10;
    {
        int inner = 20;
        cout << "Inner can access outer=" << outer << " and inner=" << inner << "\n";
    }
    cout << "Outer still=" << outer << " but inner lost\n\n";

    cout << "Q10: Global vs Local lifetime\n";
    cout << "Global lives whole program, local lives till } ends\n";
    cout << "Proof: globalX=" << globalX << " still alive from start\n\n";

    cout << "================================================================\n";
    cout << "All 10 Local vs Global Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}