#include <iostream>
using namespace std;

// Q1: Add with default 10
int add(int a, int b = 10){
    return a + b;
}

// Q2: Multiply with default 2
int multiply(int a, int b = 2){
    return a * b;
}

// Q3: Power with default exponent 2 (square)
int power(int base, int exp = 2){
    int result = 1;
    for(int i=0; i<exp; i++){
        result = result * base;
    }
    return result;
}

// Q4: Greet with default Guest
void greet(string name = "Guest"){
    cout << "Hello " << name;
}

// Q5: Sum of 3 with defaults 0,0
int sum3(int a, int b = 0, int c = 0){
    return a + b + c;
}

// Q6: Print table with default up to 10
void printTable(int num, int upTo = 10){
    for(int i=1; i<=upTo; i++){
        cout << num << "x" << i << "=" << num*i << " ";
    }
}

// Q7: Interest with default rate 5%
float interest(int principal, float rate = 5.0f){
    return principal * rate / 100.0f;
}

// Q8: Increment with default step 1
int incrementBy(int n, int step = 1){
    return n + step;
}

// Q9: Volume with default height 10
int volume(int l, int w, int h = 10){
    return l * w * h;
}

// Q10: Message with default
void showMsg(string msg = "Welcome to Cpp-Mastery"){
    cout << msg;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_01_PRACTICE - Default Arguments (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: add(5) and add(5,20)\n";
    cout << "Solution: " << add(5) << " , " << add(5,20) << "\n\n";

    cout << "Q2: multiply(6) and multiply(6,5)\n";
    cout << "Solution: " << multiply(6) << " (6*2) , " << multiply(6,5) << "\n\n";

    cout << "Q3: power(4) -> 4^2 and power(2,3) -> 8\n";
    cout << "Solution: " << power(4) << " , " << power(2,3) << "\n\n";

    cout << "Q4: greet() and greet('Ahmed')\n";
    cout << "Solution: ";
    greet();
    cout << " , ";
    greet("Ahmed");
    cout << "\n\n";

    cout << "Q5: sum3(5) , sum3(5,10) , sum3(5,10,15)\n";
    cout << "Solution: " << sum3(5) << " , " << sum3(5,10) << " , " << sum3(5,10,15) << "\n\n";

    cout << "Q6: printTable(2,5) vs printTable(2) default 10\n";
    cout << "Solution (upTo=5): ";
    printTable(2,5);
    cout << "\n\n";

    cout << "Q7: interest(1000) default 5% and interest(1000,10)\n";
    cout << "Solution: " << interest(1000) << " , " << interest(1000,10) << "\n\n";

    cout << "Q8: incrementBy(10) and incrementBy(10,5)\n";
    cout << "Solution: " << incrementBy(10) << " , " << incrementBy(10,5) << "\n\n";

    cout << "Q9: volume(2,3) default h=10 and volume(2,3,5)\n";
    cout << "Solution: " << volume(2,3) << " , " << volume(2,3,5) << "\n\n";

    cout << "Q10: showMsg() and showMsg('Hello 06_04')\n";
    cout << "Solution: ";
    showMsg();
    cout << " | ";
    showMsg("Hello 06_04");
    cout << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Default Argument Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}