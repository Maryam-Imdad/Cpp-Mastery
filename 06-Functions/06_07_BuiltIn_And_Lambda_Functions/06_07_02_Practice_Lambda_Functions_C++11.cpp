#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "06_07_02_PRACTICE - Lambda (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: Lambda add two numbers\n";
    auto add = [](int a,int b){ return a+b; };
    cout << "Solution: " << add(10,20) << "\n\n";

    cout << "Q2: Lambda square\n";
    auto sq = [](int x){ return x*x; };
    cout << "Solution: " << sq(7) << "\n\n";

    cout << "Q3: Lambda even check\n";
    auto isEven = [](int n){ return n%2==0; };
    cout << "Solution: 4 isEven? " << (isEven(4)?"Yes":"No") << "\n\n";

    cout << "Q4: Capture [=] sum x+y where x=5,y=10\n";
    int x=5,y=10;
    auto sumCap = [=](){ return x+y; };
    cout << "Solution: " << sumCap() << "\n\n";

    cout << "Q5: Capture [&] increment x\n";
    auto inc = [&](){ x++; };
    inc();
    cout << "Solution: x after inc = " << x << "\n\n";

    cout << "Q6: Lambda with for_each print doubled\n";
    vector<int> v = {1,2,3};
    cout << "Solution: ";
    for_each(v.begin(), v.end(), [](int n){ cout << n*2 << " "; });
    cout << "\n\n";

    cout << "Q7: Sort descending using lambda comparator\n";
    vector<int> v2 = {3,1,4,2};
    sort(v2.begin(), v2.end(), [](int a,int b){ return a>b; });
    cout << "Solution: ";
    for(int n: v2) cout << n << " ";
    cout << "\n\n";

    cout << "Q8: Lambda capture factor multiply\n";
    int factor=3;
    auto mult = [factor](int n){ return n*factor; };
    cout << "Solution: 10*3=" << mult(10) << "\n\n";

    cout << "Q9: Lambda max of two\n";
    auto getMax = [](int a,int b){ if(a>b) return a; else return b; };
    cout << "Solution: max(12,8)=" << getMax(12,8) << "\n\n";

    cout << "Q10: Lambda string length\n";
    auto strLen = [](string s){ return s.length(); };
    cout << "Solution: len('Cpp-Mastery')=" << strLen("Cpp-Mastery") << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Lambda Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}