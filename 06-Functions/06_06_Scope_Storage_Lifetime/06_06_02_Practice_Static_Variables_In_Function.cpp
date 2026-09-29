#include <iostream>
using namespace std;

// Q1: Counter
void counter(){
    static int c = 0;
    c++;
    cout << "Called " << c << " times";
}

// Q2: Normal vs Static
void normalCounter(){
    int c = 0; c++; cout << c << " ";
}
void staticCounter(){
    static int c = 0; c++; cout << c << " ";
}

// Q3: Static sum accumulator
int addToSum(int n){
    static int sum = 0;
    sum += n;
    return sum;
}

// Q4: Static to keep last ID
int getNextId(){
    static int id = 0;
    id++;
    return id;
}

// Q5: Static string? use int for simplicity
void staticDemo5(){
    static int balance = 1000;
    balance -= 100;
    cout << "Balance left: " << balance;
}

// Q6: Static flag for first time
void firstTimeOnly(){
    static bool first = true;
    if(first){
        cout << "First time initialization!";
        first = false;
    } else {
        cout << "Already initialized";
    }
}

// Q7: Static array? simulate with static int
void staticEvenCheck(){
    static int num = 0;
    num += 2;
    cout << num << " ";
}

// Q8: Factorial using static? Actually iterative with static cache
int fibCache(int n){
    static int cache[100] = {0};
    static bool initialized = false;
    if(!initialized){
        cache[0]=0; cache[1]=1;
        for(int i=2;i<100;i++) cache[i]=cache[i-1]+cache[i-2];
        initialized = true;
    }
    return cache[n];
}

// Q9: Static char count
void countCalls(){
    static int count = 0;
    count++;
    cout << "Call #" << count;
}

// Q10: Reset proof - static not reset
void resetTest(){
    static int x = 5;
    cout << "x=" << x << " ";
    x++;
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_02_PRACTICE - Static Variables (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: Function call counter using static\n";
    cout << "Solution: "; counter(); cout << "\n";
    cout << "Solution: "; counter(); cout << "\n";
    cout << "Solution: "; counter(); cout << "\n\n";

    cout << "Q2: Normal vs Static counter 3 calls\n";
    cout << "Normal: "; normalCounter(); normalCounter(); normalCounter(); cout << "\n";
    cout << "Static: "; staticCounter(); staticCounter(); staticCounter(); cout << "\n\n";

    cout << "Q3: addToSum(5), addToSum(10), addToSum(20) accumulator\n";
    cout << "Solution: " << addToSum(5) << ", " << addToSum(10) << ", " << addToSum(20) << "\n\n";

    cout << "Q4: getNextId() 3 times\n";
    cout << "Solution: " << getNextId() << ", " << getNextId() << ", " << getNextId() << "\n\n";

    cout << "Q5: Bank balance static 1000, withdraw 100 each call\n";
    cout << "Solution: "; staticDemo5(); cout << "\n";
    cout << "Solution: "; staticDemo5(); cout << "\n\n";

    cout << "Q6: First time init message\n";
    cout << "Solution: "; firstTimeOnly(); cout << "\n";
    cout << "Solution: "; firstTimeOnly(); cout << "\n\n";

    cout << "Q7: Even number generator 2,4,6 using static\n";
    cout << "Solution: "; staticEvenCheck(); staticEvenCheck(); staticEvenCheck(); cout << "\n\n";

    cout << "Q8: fibCache(6) using static cache\n";
    cout << "Solution: fib(6)=" << fibCache(6) << "\n\n";

    cout << "Q9: countCalls() 3 times\n";
    cout << "Solution: "; countCalls(); cout << " | "; countCalls(); cout << " | "; countCalls(); cout << "\n\n";

    cout << "Q10: resetTest() static not reset to 5\n";
    cout << "Solution: "; resetTest(); resetTest(); resetTest(); cout << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Static Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}