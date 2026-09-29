#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "FOR LOOP - 10 PRACTICAL QUESTIONS (Beginner to Advance)\n";
    cout << "================================================================\n\n";

    // Q1: BEGINNER - Print numbers 1 to 10
    cout << "Q1 [Beginner]: Print 1 to 10\n";
    cout << "Question: Print numbers from 1 to 10.\n";
    cout << "Solution: ";
    for(int i=1; i<=10; i++){
        cout << i << " ";
    }
    cout << "\n\n";

    // Q2: BEGINNER - Print name 5 times
    cout << "Q2 [Beginner]: Print your name 5 times\n";
    cout << "Question: Print 'Maryam' 5 times with counting.\n";
    cout << "Solution:\n";
    for(int i=1; i<=5; i++){
        cout << i << ". Maryam\n";
    }
    cout << "\n";

    // Q3: EASY - Multiplication Table
    cout << "Q3 [Easy]: Multiplication Table\n";
    int n; cout << "Question: Enter a number for table: "; cin >> n;
    cout << "Solution for Table of " << n << ":\n";
    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
    cout << "\n";

    // Q4: EASY - Sum of 1 to N
    cout << "Q4 [Easy]: Sum of 1 to N\n";
    cout << "Question: Find sum from 1 to N.\n";
    cout << "Enter N: "; int N; cin >> N; int sum=0;
    // Invariant: sum always holds sum of 1 to i-1
    for(int i=1; i<=N; i++){
        sum = sum + i;
    }
    cout << "Solution: Sum = " << sum << endl;
    cout << "\n";

    // Q5: MEDIUM - Even numbers
    cout << "Q5 [Medium]: Even numbers 1 to 20\n";
    cout << "Question: Print only even numbers from 1 to 20.\n";
    cout << "Solution Method 1 (Filter): ";
    for(int i=1; i<=20; i++){
        if(i%2==0) cout << i << " ";
    }
    cout << "\nSolution Method 2 (Step): ";
    for(int i=2; i<=20; i+=2) cout << i << " ";
    cout << "\n\n";

    // Q6: MEDIUM - Factorial
    cout << "Q6 [Medium]: Factorial\n";
    cout << "Question: Find factorial of a number. 5! = 120\n";
    cout << "Enter number: "; int factNum; cin >> factNum; long long fact=1;
    for(int i=1; i<=factNum; i++){
        fact = fact * i;
    }
    cout << "Solution: " << factNum << "! = " << fact << endl;
    cout << "\n";

    // Q7: MEDIUM - Power calculation b^p
    cout << "Q7 [Medium]: Power Calculation\n";
    cout << "Question: Find base^power without pow() function. e.g. 2^5=32\n";
    int base, power, result=1;
    cout << "Enter base and power: "; cin >> base >> power;
    for(int i=1; i<=power; i++){
        result = result * base;
    }
    cout << "Solution: " << base << "^" << power << " = " << result << endl;
    cout << "\n";

    // Q8: ADVANCE - Sum and Count of Digits
    cout << "Q8 [Advance]: Sum and Count of Digits using For Loop\n";
    cout << "Question: For 12345, Count=5, Sum=1+2+3+4+5=15\n";
    cout << "Enter number: "; int num; cin >> num;
    int digitSum=0, digitCount=0;
    for(int temp=num; temp!=0; temp/=10){
        digitSum += temp%10;
        digitCount++;
    }
    cout << "Solution: Count=" << digitCount << " Sum=" << digitSum << endl;
    cout << "\n";

    // Q9: ADVANCE - Prime Number Check (Optimized)
    cout << "Q9 [Advance]: Prime Number Check\n";
    cout << "Question: Check if number is prime. Prime divisible only by 1 and itself.\n";
    cout << "Enter number: "; int pNum; cin >> pNum; bool isPrime=true;
    if(pNum<=1) isPrime=false;
    else{
        for(int i=2; i*i<=pNum; i++){ // O(sqrt(N)) - Interview optimization
            if(pNum%i==0){ isPrime=false; break; } // break saves time
        }
    }
    cout << "Solution: " << pNum << (isPrime? " is Prime" : " is Not Prime") << endl;
    cout << "\n";

    // Q10: ADVANCE + INTERVIEW - Right Triangle Star Pattern (Nested For)
    cout << "Q10 [Advance/Interview]: Star Pattern\n";
    cout << "Question: Print this pattern:\n*\n* *\n* * *\n* * * *\n* * * * *\n";
    int rows=5;
    cout << "Solution:\n";
    for(int i=1; i<=rows; i++){ // Outer loop = Rows
        for(int j=1; j<=i; j++){ // Inner loop = Columns, depends on outer i
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n================================================================\n";
    cout << "10 Questions Complete - Beginner to Advance Mastered!\n";
    cout << "================================================================\n";
    return 0;
}