#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
/*

FILE: 06_08_01_Final_50_Interview_Questions.cpp
TOPIC: FINAL 50 - With Details / Samjhane Ke Liye
LANGUAGE: Urdu/Hinglish Explanation for Viva

Yeh file 06-Functions ka final revision hai.
Har Q ke saath WHY + LOGIC + INTERVIEW ANSWER likha hai.

*/

// =================================================================
// SECTION 1: Basics (1-10)
// =================================================================

// Q1: Add two numbers using function
// Logic: a+b return karo. Sabse basic function example.
int Q1_add(int a, int b){ return a+b; }
// Interview Ans: Function reusable hota hai, code duplication khatam.

// Q2: Max of two numbers
// Logic: if(a>b) return a else b. Ternary operator use kiya.
int Q2_max2(int a,int b){ return a>b?a:b; }

// Q3: Check Even Odd
// Logic: n%2==0 to even warna odd.
bool Q3_isEven(int n){ return n%2==0; }

// Q4: Factorial using Recursion
// Logic: fact(n) = n * fact(n-1). Base case n<=1 return 1.
// Example: 5! = 5*4*3*2*1
long long Q4_fact(int n){ if(n<=1) return 1; return n*Q4_fact(n-1); }
// Interview: Recursion me function khud ko call karta hai, stack banta hai.

// Q5: Prime Check
// Logic: 2 se sqrt(n) tak check karo koi divide karta hai kya.
// Agar koi divisor mila to NOT prime.
bool Q5_isPrime(int n){ if(n<=1) return false; for(int i=2;i*i<=n;i++) if(n%i==0) return false; return true; }

// Q6: Sum of N natural numbers
// Logic: Formula n*(n+1)/2. O(1) me.
int Q6_sumN(int n){ return n*(n+1)/2; }

// Q7: Reverse Number e.g. 123 -> 321
// Logic: last digit nikalo n%10, rev=rev*10+digit, n/=10 loop.
int Q7_reverseNum(int n){ int rev=0; while(n>0){ rev=rev*10+n%10; n/=10; } return rev; }

// Q8: Palindrome Number e.g. 121 == 121
// Logic: reverse karke original se compare.
bool Q8_isPalNum(int n){ return n==Q7_reverseNum(n); }

// Q9: Count Digits e.g. 12345 = 5
// Logic: n ko 10 se divide karte jao count++.
int Q9_countDigits(int n){ if(n==0) return 1; int c=0; while(n>0){ c++; n/=10; } return c; }

// Q10: Sum of Digits 123 = 6
// Logic: n%10 se digit lo sum me jodo.
int Q10_sumDigits(int n){ int s=0; while(n>0){ s+=n%10; n/=10; } return s; }

// =================================================================
// SECTION 2: Parameters, Overloading, Recursion (11-20)
// =================================================================

// Q11: Swap by Value (FAIL hota hai)
// Logic: Local copy change hoti hai, original main wale variables change nahi hote.
void Q11_swapValue(int a,int b){ int t=a; a=b; b=t; }

// Q12: Swap by Reference (PASS hota hai)
// Logic: & se original variable ka address jata hai, isliye swap ho jata hai.
// Interview: Yehi call by reference ka main difference hai.
void Q12_swapRef(int &a,int &b){ int t=a; a=b; b=t; }

// Q13: Power b^e
// Logic: loop se e bar multiply.
int Q13_power(int b,int e){ int r=1; for(int i=0;i<e;i++) r*=b; return r; }

// Q14: GCD using Euclid Recursion
// Logic: gcd(a,b) = gcd(b, a%b). Base b==0 to a is GCD.
// Example: gcd(48,18) -> gcd(18,12) -> gcd(12,6) -> gcd(6,0) = 6
int Q14_gcd(int a,int b){ if(b==0) return a; return Q14_gcd(b,a%b); }

// Q15: LCM
// Logic: Formula LCM = (a*b)/GCD(a,b)
int Q15_lcm(int a,int b){ return a*b/Q14_gcd(a,b); }

// Q16: Default Argument
// Logic: b ka default 10 hai. Agar 1 arg doge to b=10 lega, 2 doge to diya hua lega.
void Q16_defaultArg(int a, int b=10){ cout << a+b << " "; }

// Q17: Inline Function
// Logic: inline se function call ki jagah code copy ho jata hai, fast hota hai small functions ke liye.
inline int Q17_inlineSq(int x){ return x*x; }

// Q18: Function Overloading (same name different params)
// Logic: C++ me same naam se 2 functions ho sakte hain agar parameters different hon.
// int wala int version call karega, double wala double version.
int Q18_overloadAdd(int a,int b){ return a+b; }
double Q18_overloadAdd(double a,double b){ return a+b; }

// Q19: Fibonacci Recursion - Slow O(2^n)
// Logic: fib(n)=fib(n-1)+fib(n-2). Base 0,1.
int Q19_fib(int n){ if(n<=1) return n; return Q19_fib(n-1)+Q19_fib(n-2); }

// Q20: Fibonacci Iterative - Fast O(n)
// Logic: loop se 2 variables se previous 2 values track karo. Interview me yahi puchte hain fast wala.
int Q20_fibIter(int n){ if(n<=1) return n; int a=0,b=1,c; for(int i=2;i<=n;i++){ c=a+b; a=b; b=c; } return b; }

// =================================================================
// SECTION 3: Scope, Storage, Array (21-30)
// =================================================================

int globalVar = 100; // Q21 Global: pure program me zinda, Data Segment me

int Q21_globalAccess(){ return globalVar; }

void Q22_localDemo(){ int local=5; cout<<local<<" "; } // local stack me, function ke baad mar jata hai

// Q23: Static - yaad rakhta hai
// Logic: static int c=0 sirf pehli bar init hoga. Agli bar purani value yaad rahegi.
// Isliye counter ban jata hai.
int Q23_staticCounter(){ static int c=0; c++; return c; }

string Q24_reverseStr(string s){ reverse(s.begin(),s.end()); return s; }

bool Q25_isPalStr(string s){ string r=s; reverse(r.begin(),r.end()); return s==r; }

int Q26_countVowels(string s){ int c=0; for(char ch: s){ ch=tolower(ch); if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') c++; } return c; }

int Q27_maxArr(int arr[], int n){ int mx=arr[0]; for(int i=1;i<n;i++) if(arr[i]>mx) mx=arr[i]; return mx; }

int Q28_sumArr(int arr[], int n){ int s=0; for(int i=0;i<n;i++) s+=arr[i]; return s; }

bool Q29_isSorted(int arr[], int n){ for(int i=1;i<n;i++) if(arr[i]<arr[i-1]) return false; return true; }

void Q30_printArray(int arr[], int n){ for(int i=0;i<n;i++) cout<<arr[i]<<" "; }

// =================================================================
// SECTION 4: Advance Recursion, Math (31-40)
// =================================================================

// Q31: Fast Power O(log n)
// Logic: x^10 = (x^5)^2. Divide and conquer. Normal power O(n), ye O(log n).
// Interview ka top question!
long long Q31_fastPow(int b,int e){ if(e==0) return 1; long long half=Q31_fastPow(b,e/2); if(e%2==0) return half*half; else return b*half*half; }

// Q32: Add using recursion only
// Logic: a+b = (a+1)+(b-1) jab tak b 0 na ho jaye.
int Q32_addRec(int a,int b){ if(b==0) return a; return Q32_addRec(a+1,b-1); }

void Q33_printNto1(int n){ if(n==0) return; cout<<n<<" "; Q33_printNto1(n-1); }

void Q34_print1toN(int n){ if(n==0) return; Q34_print1toN(n-1); cout<<n<<" "; } // pehle recursion phir print -> ulta

bool Q35_isArmstrong(int n){ int orig=n,s=0; int digits=Q9_countDigits(n); while(n>0){ int d=n%10; s+=pow(d,digits); n/=10; } return s==orig; } // 153=1^3+5^3+3^3

int Q36_secondMax(int arr[], int n){ int max1=INT_MIN,max2=INT_MIN; for(int i=0;i<n;i++){ if(arr[i]>max1){ max2=max1; max1=arr[i]; } else if(arr[i]>max2 && arr[i]!=max1) max2=arr[i]; } return max2; }

int Q37_binaryToDec(int bin){ int dec=0,base=1; while(bin>0){ int last=bin%10; dec+=last*base; base*=2; bin/=10; } return dec; }

string Q38_decToBinary(int n){ string b=""; while(n>0){ b=char('0'+n%2)+b; n/=2; } return b==""?"0":b; }

int Q39_nCr(int n,int r){ return Q4_fact(n)/(Q4_fact(r)*Q4_fact(n-r)); }

void Q40_table(int n){ for(int i=1;i<=10;i++) cout<<n<<"x"<<i<<"="<<n*i<<" "; }

// =================================================================
// SECTION 5: Lambda, Function Pointer, Builtin (41-50)
// =================================================================

// Q41: Lambda Add - naam ke bina function
auto Q41_lambdaAdd = [](int a,int b){ return a+b; }; // [] capture, () params, {} body

auto Q42_lambdaSq = [](int x){ return x*x; };

int Q43_funcPtrAdd(int a,int b){ return a+b; }

// Q44: Function pointer as parameter (Callback)
// Logic: calc function ko batao kaunsa operation karna hai (add) pointer se.
int Q44_calc(int a,int b,int(*op)(int,int)){ return op(a,b); }

int Q45_builtinSqrt(int n){ return sqrt(n); } // <cmath> se ready-made

int Q46_builtinPow(int a,int b){ return pow(a,b); }

bool Q47_leapYear(int y){ return (y%400==0)|| (y%4==0 && y%100!=0); }

double Q48_avgArr(int arr[],int n){ return (double)Q28_sumArr(arr,n)/n; }

int Q49_factorialIter(int n){ int r=1; for(int i=2;i<=n;i++) r*=i; return r; } // iterative fast, recursion se memory kam

bool Q50_isPerfect(int n){ int sum=0; for(int i=1;i<n;i++) if(n%i==0) sum+=i; return sum==n; } // 6=1+2+3, 28=1+2+4+7+14

int main(){
    cout << "================================================================\n";
    cout << "FINAL 50 DETAILED - Har Sawal Samjhane Ke Liye\n";
    cout << "================================================================\n\n";

    // Demo with explanation print
    cout << "Q1-Q10: Basics\n";
    cout << "Q1 add(5,3)= " << Q1_add(5,3) << " | Logic: simple + \n";
    cout << "Q2 max(10,20)= " << Q2_max2(10,20) << " | Logic: ternary a>b?a:b\n";
    cout << "Q3 isEven(4)= " << (Q3_isEven(4)?"Even":"Odd") << " | Logic: n%2==0\n";
    cout << "Q4 fact(5)= " << Q4_fact(5) << " | Logic: n*fact(n-1), base 1\n";
    cout << "Q5 isPrime(7)= " << (Q5_isPrime(7)?"Prime":"Not") << " | Logic: sqrt tak check\n";
    cout << "Q6 sumN(10)= " << Q6_sumN(10) << " | Formula: n(n+1)/2\n";
    cout << "Q7 reverse(123)= " << Q7_reverseNum(123) << " | Logic: rev*10+n%10\n";
    cout << "Q8 isPal(121)= " << (Q8_isPalNum(121)?"Pal":"Not") << " | reverse==original\n";
    cout << "Q9 countDigits(12345)= " << Q9_countDigits(12345) << " | divide by 10\n";
    cout << "Q10 sumDigits(123)= " << Q10_sumDigits(123) << " | n%10 add\n\n";

    cout << "Q11-Q20: Parameter Passing\n";
    int a=5,b=10;
    Q11_swapValue(a,b); cout << "Q11 swapByValue(5,10): a=" << a << " b=" << b << " -> FAIL kyunki copy gayi thi\n";
    Q12_swapRef(a,b); cout << "Q12 swapByRef(5,10): a=" << a << " b=" << b << " -> PASS kyunki reference gaya tha\n";
    cout << "Q13 power(2,3)= " << Q13_power(2,3) << " | loop se multiply\n";
    cout << "Q14 gcd(48,18)= " << Q14_gcd(48,18) << " | Euclid: gcd(b, a%b)\n";
    cout << "Q15 lcm(4,6)= " << Q15_lcm(4,6) << " | (a*b)/gcd\n";
    cout << "Q16 defaultArg(5)= "; Q16_defaultArg(5); cout << "| b default 10 lega\n";
    cout << "Q16 defaultArg(5,20)= "; Q16_defaultArg(5,20); cout << "| ab b=20\n";
    cout << "Q17 inlineSq(6)= " << Q17_inlineSq(6) << " | inline fast\n";
    cout << "Q18 overload int(2,3)= " << Q18_overloadAdd(2,3) << " double(2.5,3.5)= " << Q18_overloadAdd(2.5,3.5) << " | same naam diff params\n";
    cout << "Q19 fibRec(6)= " << Q19_fib(6) << " | fib(n-1)+fib(n-2) O(2^n) slow\n";
    cout << "Q20 fibIter(6)= " << Q20_fibIter(6) << " | loop O(n) fast -> interview me yehi likhna\n\n";

    cout << "Q21-Q30: Scope & Array\n";
    cout << "Q21 globalVar= " << Q21_globalAccess() << " | poore program me zinda\n";
    cout << "Q23 staticCounter 3 calls: " << Q23_staticCounter() << "," << Q23_staticCounter() << " | yaad rakhta hai\n";
    cout << "Q24 reverseStr(hello)= " << Q24_reverseStr("hello") << "\n";
    cout << "Q25 isPalStr(madam)= " << (Q25_isPalStr("madam")?"Yes":"No") << "\n";
    cout << "Q26 vowels(recursion)= " << Q26_countVowels("recursion") << "\n";
    int arr[] = {3,9,2,15,7}; int n=5;
    cout << "Q27 maxArr= " << Q27_maxArr(arr,n) << " | loop se max\n";
    cout << "Q28 sumArr= " << Q28_sumArr(arr,n) << "\n";
    cout << "Q29 isSorted= " << (Q29_isSorted(arr,n)?"Sorted":"Not Sorted") << "\n\n";

    cout << "Q31-Q40: Advance\n";
    cout << "Q31 fastPow(2,10)= " << Q31_fastPow(2,10) << " | O(log n) divide\n";
    cout << "Q33 Nto1(5)= "; Q33_printNto1(5); cout << " | pehle print phir recursion\n";
    cout << "\nQ34 1toN(5)= "; Q34_print1toN(5); cout << " | pehle recursion phir print\n";
    cout << "\nQ35 isArmstrong(153)= " << (Q35_isArmstrong(153)?"Yes":"No") << " | 1^3+5^3+3^3=153\n";
    cout << "Q36 secondMax= " << Q36_secondMax(arr,n) << " | 2 variables max1,max2\n";
    cout << "Q37 binToDec(101)= " << Q37_binaryToDec(101) << " | binary 101=5\n";
    cout << "Q38 decToBin(10)= " << Q38_decToBinary(10) << " | 10=1010\n";
    cout << "Q39 nCr(5,2)= " << Q39_nCr(5,2) << " | n!/(r!*(n-r)!)\n";
    cout << "Q40 table(2)= "; Q40_table(2); cout << "\n\n";

    cout << "Q41-Q50: Lambda, F-Pointer, Builtin\n";
    cout << "Q41 lambdaAdd(10,20)= " << Q41_lambdaAdd(10,20) << " | [](){} anonymous\n";
    cout << "Q42 lambdaSq(7)= " << Q42_lambdaSq(7) << "\n";
    int (*p)(int,int)=Q43_funcPtrAdd;
    cout << "Q43 funcPtrAdd(5,5)= " << p(5,5) << " | pointer function ko point karta hai\n";
    cout << "Q44 calc with callback= " << Q44_calc(10,5,Q43_funcPtrAdd) << " | function ko argument me pass\n";
    cout << "Q45 sqrt(25)= " << Q45_builtinSqrt(25) << " | <cmath> builtin\n";
    cout << "Q46 pow(2,5)= " << Q46_builtinPow(2,5) << "\n";
    cout << "Q47 leapYear(2024)= " << (Q47_leapYear(2024)?"Leap":"Not Leap") << "\n";
    cout << "Q48 avgArr= " << Q48_avgArr(arr,n) << "\n";
    cout << "Q49 factIter(5)= " << Q49_factorialIter(5) << " | loop fast, stack overflow nahi\n";
    cout << "Q50 isPerfect(28)= " << (Q50_isPerfect(28)?"Perfect":"Not") << " | divisors sum = number\n";

    cout << "\n================================================================\n";
    cout << "ALL 50 DONE - Ab koi interview question functions se bahar nahi!\n";
    cout << "================================================================\n";
    return 0;
}