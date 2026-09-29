#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "WHILE LOOP - 10 PRACTICAL QUESTIONS (Auto-Running)\n";
    cout << "================================================================\n\n";

    // Q1 BEGINNER
    cout << "Q1 [Beginner]: Print 1 to 10\nQuestion: Print numbers 1 to 10\nSolution: ";
    int i1=1; while(i1<=10){ cout << i1 << " "; i1++; }
    cout << "\n\n";

    // Q2 BEGINNER
    cout << "Q2 [Beginner]: Countdown 10 to 1\nQuestion: Print 10 down to 1\nSolution: ";
    int i2=10; while(i2>=1){ cout << i2 << " "; i2--; }
    cout << "\n\n";

    // Q3 EASY
    int N=10, sum=0, i3=1;
    cout << "Q3 [Easy]: Sum 1 to " << N << "\nQuestion: Find sum of 1 to N\n";
    while(i3<=N){ sum+=i3; i3++; }
    cout << "Solution: Sum = " << sum << "\n\n";

    // Q4 EASY
    int n=6, t=1;
    cout << "Q4 [Easy]: Table of " << n << "\nQuestion: Print multiplication table\nSolution:\n";
    while(t<=10){ cout << n << " x " << t << " = " << n*t << endl; t++; }
    cout << "\n";

    // Q5 MEDIUM
    cout << "Q5 [Medium]: Even numbers 1-50\nQuestion: Print even numbers only\nSolution: ";
    int e=2; while(e<=50){ cout << e << " "; e+=2; }
    cout << "\n\n";

    // Q6 MEDIUM
    int factNum=5; long long fact=1; int f=1;
    cout << "Q6 [Medium]: Factorial of " << factNum << "\nQuestion: 5! = 5*4*3*2*1 = 120\n";
    while(f<=factNum){ fact*=f; f++; }
    cout << "Solution: " << factNum << "! = " << fact << "\n\n";

    // Q7 MEDIUM
    int num=12345, rev=0;
    cout << "Q7 [Medium]: Reverse Number " << num << "\nQuestion: Reverse digits\n";
    int temp=num; while(temp!=0){ rev=rev*10 + temp%10; temp/=10; }
    cout << "Solution: Reverse = " << rev << "\n\n";

    // Q8 ADVANCE
    int num2=987654, count=0;
    cout << "Q8 [Advance]: Count Digits of " << num2 << "\nQuestion: How many digits?\n";
    int temp2=num2; while(temp2!=0){ temp2/=10; count++; }
    cout << "Solution: Digits = " << count << "\n\n";

    // Q9 ADVANCE - Best use case for while loop (unknown iterations)
    cout << "Q9 [Advance]: PIN Validation Simulation\nQuestion: Keep asking until correct PIN (1234)\nSolution:\n";
    int correct=1234, tries[]={1111, 2222, 1234}, idx=0, entered=0;
    while(entered!=correct){
        entered=tries[idx];
        cout << "Trying PIN: " << entered << (entered==correct? " -> Access Granted\n" : " -> Wrong PIN\n");
        idx++; if(idx>2) break;
    }
    cout << "\n";

    // Q10 ADVANCE/INTERVIEW
    int num3=123, dsum=0, prod=1;
    cout << "Q10 [Advance]: Sum and Product of Digits of " << num3 << "\nQuestion: 1+2+3 and 1*2*3\n";
    int t3=num3; while(t3!=0){ dsum+=t3%10; prod*=t3%10; t3/=10; }
    cout << "Solution: Sum=" << dsum << " Product=" << prod << "\n";

    cout << "\n================================================================\n";
    cout << "All 10 While Loop Questions Completed!\n";
    cout << "================================================================\n";
    return 0;
}