#include <iostream>
using namespace std;

// Q1
void sayHello(){
    cout << "Hello World!";
}

// Q2
void printName(){
    cout << "My Name is Student";
}

// Q3
void printTableOf5(){
    for(int i = 1; i <= 10; i++){
        cout << "5 x " << i << " = " << 5 * i << endl;
    }
}

// Q4
void printEven1to20(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// Q5
void printMyCollege(){
    cout << "GCUF - C++ Mastery" << endl;
    cout << "Department of CS" << endl;
}

// Q6
void print1to10(){
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;
}

// Q7
void printStarBox(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

// Q8
void printSumOfFirst10(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum = sum + i;
    }
    cout << "Sum of 1 to 10 = " << sum;
}

// Q9
void printWelcome(){
    cout << "Welcome to Functions" << endl;
    cout << "Learning Type 1" << endl;
    cout << "No Arg No Return" << endl;
}

// Q10
void printGoodBye(){
    cout << "Thank you! Program Ended.";
}

int main(){
    cout << "================================================================\n";
    cout << "06_02_01_PRACTICE - No Arg, No Return (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: sayHello()\n";
    cout << "Solution: ";
    sayHello();
    cout << "\n\n";

    cout << "Q2: printName()\n";
    cout << "Solution: ";
    printName();
    cout << "\n\n";

    cout << "Q3: printTableOf5() - Table of 5\n";
    cout << "Solution:\n";
    printTableOf5();
    cout << "\n";

    cout << "Q4: printEven1to20() - Even numbers 1 to 20\n";
    cout << "Solution: ";
    printEven1to20();
    cout << "\n";

    cout << "Q5: printMyCollege()\n";
    cout << "Solution:\n";
    printMyCollege();
    cout << "\n";

    cout << "Q6: print1to10()\n";
    cout << "Solution: ";
    print1to10();
    cout << "\n";

    cout << "Q7: printStarBox() - 4x4 Star Box\n";
    cout << "Solution:\n";
    printStarBox();
    cout << "\n";

    cout << "Q8: printSumOfFirst10()\n";
    cout << "Solution: ";
    printSumOfFirst10();
    cout << "\n\n";

    cout << "Q9: printWelcome()\n";
    cout << "Solution:\n";
    printWelcome();
    cout << "\n";

    cout << "Q10: printGoodBye()\n";
    cout << "Solution: ";
    printGoodBye();
    cout << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Type-1 Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}