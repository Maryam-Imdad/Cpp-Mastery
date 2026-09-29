#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "DO-WHILE LOOP - 10 PRACTICAL QUESTIONS (Auto-Running)\n";
    cout << "================================================================\n\n";

    // Q1 BEGINNER
    cout << "Q1 [Beginner]: Print 1 to 10\nQuestion: Print 1 to 10 using do-while\nSolution: ";
    int i1=1; do{ cout << i1 << " "; i1++; }while(i1<=10);
    cout << "\n\n";

    // Q2 BEGINNER - Proves at least once
    cout << "Q2 [Beginner]: Proof that it runs once even if false\nQuestion: Start i=100, condition i<=5\nSolution: ";
    int i2=100; do{ cout << i2 << " (Ran once!)"; i2++; }while(i2<=5);
    cout << "\n\n";

    // Q3 EASY
    int N=10, sum=0, i3=1;
    cout << "Q3 [Easy]: Sum 1 to " << N << "\nQuestion: Find sum\n";
    do{ sum+=i3; i3++; }while(i3<=N);
    cout << "Solution: Sum = " << sum << "\n\n";

    // Q4 EASY
    int n=8, t=1;
    cout << "Q4 [Easy]: Table of " << n << "\nQuestion: Multiplication table\nSolution:\n";
    do{ cout << n << " x " << t << " = " << n*t << endl; t++; }while(t<=10);
    cout << "\n";

    // Q5 MEDIUM
    cout << "Q5 [Medium]: Even numbers 1-30\nQuestion: Print even only\nSolution: ";
    int e=2; do{ cout << e << " "; e+=2; }while(e<=30);
    cout << "\n\n";

    // Q6 MEDIUM
    int factNum=5; long long fact=1; int f=1;
    cout << "Q6 [Medium]: Factorial of " << factNum << "\nQuestion: 5! = 120\n";
    do{ fact*=f; f++; }while(f<=factNum);
    cout << "Solution: " << factNum << "! = " << fact << "\n\n";

    // Q7 MEDIUM - Reverse
    int num=12345, rev=0;
    cout << "Q7 [Medium]: Reverse " << num << "\nQuestion: Reverse digits\n";
    int temp=num; do{ rev=rev*10 + temp%10; temp/=10; }while(temp!=0);
    cout << "Solution: Reverse = " << rev << "\n\n";

    // Q8 ADVANCE - Input Validation Simulation
    cout << "Q8 [Advance]: Marks Validation (0-100) - Best use of do-while\nQuestion: Keep asking until valid marks\nSolution:\n";
    int marksArray[]={-5, 150, 85}; int mIdx=0, marks;
    do{
        marks=marksArray[mIdx];
        cout << "Entered: " << marks << (marks<0||marks>100? " -> Invalid! Ask again\n" : " -> Valid! Accepted\n");
        mIdx++;
    }while((marks<0 || marks>100) && mIdx<3);
    cout << "\n";

    // Q9 ADVANCE - Menu Driven Simulation
    cout << "Q9 [Advance]: Menu Driven Program - Best use of do-while\nQuestion: Show menu until Exit\nSolution:\n";
    int choices[]={1, 1, 2}; int cIdx=0, choice;
    do{
        choice=choices[cIdx];
        cout << "Menu: 1.Hello 2.Exit | Choice=" << choice << " -> ";
        if(choice==1) cout << "Hello Maryam!\n";
        else cout << "Exiting...\n";
        cIdx++;
    }while(choice!=2 && cIdx<3);
    cout << "\n";

    // Q10 ADVANCE/INTERVIEW - Guess the number
    int secret=7, guesses[]={3, 9, 7}, gIdx=0, guess;
    cout << "Q10 [Advance]: Guess the Secret Number " << secret << "\nQuestion: Keep guessing until correct\nSolution:\n";
    do{
        guess=guesses[gIdx];
        cout << "Guessed: " << guess << (guess==secret? " -> Correct!\n" : " -> Wrong, try again\n");
        gIdx++;
    }while(guess!=secret && gIdx<3);

    cout << "\n================================================================\n";
    cout << "All 10 Do-While Questions Completed!\n";
    cout << "================================================================\n";
    return 0;
}