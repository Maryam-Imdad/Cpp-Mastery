#include <iostream>
using namespace std;

// Q1: Square
inline int square(int x){
    return x * x;
}

// Q2: Cube
inline int cube(int x){
    return x * x * x;
}

// Q3: Add
inline int add(int a, int b){
    return a + b;
}

// Q4: Max of two
inline int getMax(int a, int b){
    if(a > b) return a;
    else return b;
}

// Q5: Min of two
inline int getMin(int a, int b){
    if(a < b) return a;
    else return b;
}

// Q6: Absolute
inline int absolute(int n){
    if(n < 0) return -n;
    else return n;
}

// Q7: Double
inline int doubleValue(int n){
    return n * 2;
}

// Q8: Average of two
inline float average(int a, int b){
    return (a + b) / 2.0f;
}

// Q9: Even check
inline bool isEven(int n){
    return n % 2 == 0;
}

// Q10: Power 4 (n^4) using square twice
inline int power4(int n){
    int sq = n * n;
    return sq * sq;
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_02_PRACTICE - Inline Functions (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: inline square(6)\n";
    cout << "Solution: " << square(6) << "\n\n";

    cout << "Q2: inline cube(4)\n";
    cout << "Solution: " << cube(4) << "\n\n";

    cout << "Q3: inline add(15,25)\n";
    cout << "Solution: " << add(15,25) << "\n\n";

    cout << "Q4: inline getMax(30,50)\n";
    cout << "Solution: Max = " << getMax(30,50) << "\n\n";

    cout << "Q5: inline getMin(30,50)\n";
    cout << "Solution: Min = " << getMin(30,50) << "\n\n";

    cout << "Q6: inline absolute(-15)\n";
    cout << "Solution: " << absolute(-15) << "\n\n";

    cout << "Q7: inline doubleValue(12)\n";
    cout << "Solution: " << doubleValue(12) << "\n\n";

    cout << "Q8: inline average(10,20)\n";
    cout << "Solution: " << average(10,20) << "\n\n";

    cout << "Q9: inline isEven(9) and isEven(10)\n";
    cout << "Solution: 9 is " << (isEven(9) ? "Even" : "Odd") << " , 10 is " << (isEven(10) ? "Even" : "Odd") << "\n\n";

    cout << "Q10: inline power4(3) -> 3^4=81\n";
    cout << "Solution: " << power4(3) << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Inline Functions Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}