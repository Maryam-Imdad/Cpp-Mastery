#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "06_07_01_PRACTICE - BuiltIn Library Functions (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: sqrt(49) and sqrt(64) using <cmath>\n";
    cout << "Solution: sqrt(49)=" << sqrt(49) << " sqrt(64)=" << sqrt(64) << "\n\n";

    cout << "Q2: pow(2,10) and pow(3,3)\n";
    cout << "Solution: pow(2,10)=" << pow(2,10) << " pow(3,3)=" << pow(3,3) << "\n\n";

    cout << "Q3: abs(-25) and abs(-3.5)\n";
    cout << "Solution: abs(-25)=" << abs(-25) << " abs(-3.5)=" << abs(-3.5) << "\n\n";

    cout << "Q4: ceil(4.1) ceil(4.9) floor(4.9) floor(4.1)\n";
    cout << "Solution: ceil(4.1)=" << ceil(4.1) << " ceil(4.9)=" << ceil(4.9);
    cout << " floor(4.9)=" << floor(4.9) << " floor(4.1)=" << floor(4.1) << "\n\n";

    cout << "Q5: max(15,30) min(15,30) using <algorithm>\n";
    cout << "Solution: max=" << max(15,30) << " min=" << min(15,30) << "\n\n";

    cout << "Q6: Sort array [5,2,9,1,3] using sort()\n";
    int arr[] = {5,2,9,1,3};
    sort(arr, arr+5);
    cout << "Solution: Sorted = ";
    for(int i=0;i<5;i++) cout << arr[i] << " ";
    cout << "\n\n";

    cout << "Q7: Reverse string 'hello' using reverse()\n";
    string s = "hello";
    reverse(s.begin(), s.end());
    cout << "Solution: reverse='hello' -> '" << s << "'\n\n";

    cout << "Q8: toupper('a') tolower('Z') using <cctype>\n";
    cout << "Solution: toupper('a')=" << (char)toupper('a') << " tolower('Z')=" << (char)tolower('Z') << "\n\n";

    cout << "Q9: cbrt(27) and round(2.6)\n";
    cout << "Solution: cbrt(27)=" << cbrt(27) << " round(2.6)=" << round(2.6) << "\n\n";

    cout << "Q10: hypot(3,4) = 5 (3-4-5 triangle) and fmax(10,20)\n";
    cout << "Solution: hypot(3,4)=" << hypot(3,4) << " fmax(10,20)=" << fmax(10,20) << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Builtin Library Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}