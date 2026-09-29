// ===================================================================
// CHAPTER 03 - PRACTICE - 15 Questions
// ===================================================================
#include <iostream>
using namespace std;

int main() {
    cout << "========== PRACTICE 03 START ==========" << endl;

    // Q1: Arithmetic Basic
    cout << "\n--- Q1 ---" << endl;
    int a=20, b=6;
    cout << "Sum: " << a+b << " Diff: " << a-b << " Mul: " << a*b << endl;
    cout << "Div (int): " << a/b << " Div (float): " << (float)a/b << " Mod: " << a%b << endl;

    // Q2: Even/Odd using %
    cout << "\n--- Q2 Even/Odd ---" << endl;
    int n=15;
    cout << n << " is " << ((n%2==0)?"Even":"Odd") << endl;
    // TODO: Try n=22

    // Q3: Relational
    cout << "\n--- Q3 Relational ---" << endl;
    int age=19;
    cout << "Can vote? " << (age>=18) << endl;

    // Q4: Logical - Voting eligibility
    cout << "\n--- Q4 Logical ---" << endl;
    int age2=20; bool hasID=true;
    bool canVote = (age2>=18 && hasID==true);
    cout << "Can Vote (age>=18 AND hasID): " << boolalpha << canVote << noboolalpha << endl;

    // Q5: Assignment shorthand
    cout << "\n--- Q5 Assignment ---" << endl;
    int x=10; x+=5; cout << "x+=5 => " << x << endl;

    // Q6: Increment trap
    cout << "\n--- Q6 Increment ---" << endl;
    int i=5;
    cout << "i++ = " << i++ << " now i=" << i << endl;
    cout << "++i = " << ++i << " now i=" << i << endl;

    // Q7: Ternary - Pass/Fail
    cout << "\n--- Q7 Ternary ---" << endl;
    int marks=40;
    string res = (marks>=50) ? "Pass" : "Fail";
    cout << marks << " -> " << res << endl;

    // Q8: Ternary - Greater number
    cout << "\n--- Q8 Max of 2 ---" << endl;
    int p=100, q=200;
    int maxVal = (p>q) ? p : q;
    cout << "Max of " << p << " and " << q << " is " << maxVal << endl;

    // Q9: Compound - Area and discount
    cout << "\n--- Q9 Area ---" << endl;
    int length=10, width=5;
    cout << "Area: " << length*width << endl;

    // Q10: Celsius to Fahrenheit: F = C*9/5 + 32
    cout << "\n--- Q10 Temp Converter ---" << endl;
    float celsius=37.0f;
    float fahrenheit = celsius * 9/5 + 32;
    cout << celsius << "C = " << fahrenheit << "F" << endl;

    // Q11: Precedence
    cout << "\n--- Q11 Precedence ---" << endl;
    cout << "10 + 2*3 = " << 10+2*3 << endl;
    cout << "(10+2)*3 = " << (10+2)*3 << endl;

    // Q12: Logical OR - Weekend check
    cout << "\n--- Q12 OR ---" << endl;
    string day="Sunday";
    bool isWeekend = (day=="Saturday" || day=="Sunday");
    cout << day << " is weekend? " << boolalpha << isWeekend << noboolalpha << endl;

    // Q13: NOT operator
    cout << "\n--- Q13 NOT ---" << endl;
    bool isRaining=false;
    cout << "Is not raining? " << !isRaining << endl;

    // Q14: Swapping using operators only (no temp)
    cout << "\n--- Q14 Swap ---" << endl;
    int m=5, n2=10;
    cout << "Before m="<<m<<" n="<<n2<<endl;
    m = m + n2; n2 = m - n2; m = m - n2;
    cout << "After m="<<m<<" n="<<n2<<endl;

    // Q15: FINAL - Shopping with tax
    cout << "\n--- Q15 Final Bill ---" << endl;
    float priceItem=1000.0f;
    int quantity=3;
    float taxRate=0.15f; // 15%
    float totalBill = quantity * priceItem;
    totalBill += totalBill * taxRate; // add tax
    cout << "Total with 15% tax: " << totalBill << endl;

    cout << "\n========== PRACTICE DONE ==========" << endl;
    return 0;
}