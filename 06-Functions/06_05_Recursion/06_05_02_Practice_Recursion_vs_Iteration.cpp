#include <iostream>
using namespace std;

// Q1: Factorial
int factR(int n){ if(n<=1) return 1; return n*factR(n-1); }
int factI(int n){ int r=1; for(int i=1;i<=n;i++) r*=i; return r; }

// Q2: Sum N
int sumR(int n){ if(n==1) return 1; return n+sumR(n-1); }
int sumI(int n){ int s=0; for(int i=1;i<=n;i++) s+=i; return s; }

// Q3: Power
int powR(int b,int e){ if(e==0) return 1; return b*powR(b,e-1); }
int powI(int b,int e){ int r=1; for(int i=0;i<e;i++) r*=b; return r; }

// Q4: Print N to 1
void printR(int n){ if(n==0) return; cout<<n<<" "; printR(n-1); }
void printI(int n){ for(int i=n;i>=1;i--) cout<<i<<" "; }

// Q5: Count digits
int countR(int n){ if(n==0) return 0; return 1+countR(n/10); }
int countI(int n){ int c=0; while(n>0){ c++; n/=10; } return c; }

// Q6: Sum of digits
int sumDigR(int n){ if(n==0) return 0; return n%10+sumDigR(n/10); }
int sumDigI(int n){ int s=0; while(n>0){ s+=n%10; n/=10; } return s; }

// Q7: Fibonacci nth
int fibR(int n){ if(n==0) return 0; if(n==1) return 1; return fibR(n-1)+fibR(n-2); }
int fibI(int n){ if(n==0) return 0; if(n==1) return 1; int a=0,b=1,c; for(int i=2;i<=n;i++){ c=a+b; a=b; b=c; } return b; }

// Q8: Reverse number (rec vs iter) - simple version returning reversed via iter, rec via helper
int revI(int n){ int rev=0; while(n>0){ rev=rev*10+n%10; n/=10; } return rev; }
int revRHelper(int n,int rev){ if(n==0) return rev; return revRHelper(n/10, rev*10+n%10); }
int revR(int n){ return revRHelper(n,0); }

// Q9: GCD - Recursion Euclid vs Iteration
int gcdR(int a,int b){ if(b==0) return a; return gcdR(b,a%b); }
int gcdI(int a,int b){ while(b!=0){ int t=b; b=a%b; a=t; } return a; }

// Q10: Check palindrome number
bool palR(int n){ return n == revR(n); }
bool palI(int n){ return n == revI(n); }

int main(){
    cout << "================================================================\n";
    cout << "06_05_02_PRACTICE - Recursion vs Iteration (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: Factorial(5) R vs I\n";
    cout << "Solution: " << factR(5) << " vs " << factI(5) << "\n\n";

    cout << "Q2: Sum 1..10 R vs I\n";
    cout << "Solution: " << sumR(10) << " vs " << sumI(10) << "\n\n";

    cout << "Q3: Power 2^5 R vs I\n";
    cout << "Solution: " << powR(2,5) << " vs " << powI(2,5) << "\n\n";

    cout << "Q4: Print 5 to 1 R vs I\n";
    cout << "Rec: "; printR(5); cout << "\nIter: "; printI(5); cout << "\n\n";

    cout << "Q5: CountDigits 12345 R vs I\n";
    cout << "Solution: " << countR(12345) << " vs " << countI(12345) << "\n\n";

    cout << "Q6: SumDigits 123 R vs I\n";
    cout << "Solution: " << sumDigR(123) << " vs " << sumDigI(123) << "\n\n";

    cout << "Q7: Fib(8) R vs I\n";
    cout << "Solution: " << fibR(8) << " vs " << fibI(8) << "\n\n";

    cout << "Q8: Reverse 1234 R vs I\n";
    cout << "Solution: " << revR(1234) << " vs " << revI(1234) << "\n\n";

    cout << "Q9: GCD(48,18) R vs I\n";
    cout << "Solution: " << gcdR(48,18) << " vs " << gcdI(48,18) << "\n\n";

    cout << "Q10: Palindrome 121 R vs I\n";
    cout << "Solution: " << (palR(121)?"Yes":"No") << " vs " << (palI(121)?"Yes":"No") << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Compare Questions Done! Iteration faster, Recursion elegant.\n";
    cout << "================================================================\n";
    return 0;
}