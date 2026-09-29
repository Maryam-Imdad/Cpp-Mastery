#include <iostream>
#include <string>
using namespace std;
/*

FILE: 06_05_03_Advanced_Recursion_Problems.cpp
TOPIC: ADVANCED RECURSION PROBLEMS


PART A: BEGINNER - Why Advanced?

Basic recursion we did factorial/fib. Now we solve real interview problems
using recursion only.

List:
1. GCD (Euclid) : gcd(a,b) = gcd(b, a%b)
2. Reverse String : reverse(s) = last char + reverse(rest)
3. Palindrome : check first == last and middle is palindrome
4. Power Optimized : fast power O(log n)
5. Tower of Hanoi: Classic recursion problem

PART B: INTERMEDIATE - Logic

GCD: Base if b==0 return a else gcd(b, a%b)
Reverse: Base if length==0 return "" else last + reverse(n-1)
Palindrome: Base if length 0/1 true else check first==last and recursion
Power Fast: x^n = (x^(n/2))^2 if n even else x * (x^(n/2))^2

PART C: ADVANCE

These show recursion thinking: Break big problem into smaller same type.

PART D: SCHOLAR - Interview

Tower of Hanoi: Move n disks from A to C using B.
T(n) = 2*T(n-1) + 1 => O(2^n) moves.
Asked in FAANG for recursion understanding.
*/

// 1. GCD - Euclid
int gcdRec(int a, int b){
    if(b == 0) return a; // Base
    return gcdRec(b, a % b);
}

// 2. Reverse String
string reverseRec(string s){
    if(s.length() <= 1) return s; // Base
    return s.substr(s.length()-1, 1) + reverseRec(s.substr(0, s.length()-1));
}

// 3. Palindrome Check
bool isPalindromeRec(string s, int start, int end){
    if(start >= end) return true; // Base
    if(s[start]!= s[end]) return false;
    return isPalindromeRec(s, start+1, end-1);
}

// 4. Fast Power O(log n)
long long fastPower(int base, int exp){
    if(exp == 0) return 1; // Base
    long long half = fastPower(base, exp/2);
    if(exp % 2 == 0){
        return half * half;
    } else {
        return base * half * half;
    }
}

// 5. Sum of array recursion
int sumArrayRec(int arr[], int n){
    if(n == 0) return 0; // Base
    return arr[n-1] + sumArrayRec(arr, n-1);
}

// 6. Tower of Hanoi - print moves
void towerOfHanoi(int n, char from, char to, char aux){
    if(n == 1){
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n-1, aux, to, from);
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_03 - ADVANCED RECURSION PROBLEMS\n";
    cout << "================================================================\n\n";

    cout << "1. GCD Recursion gcd(48,18):\n";
    cout << "GCD = " << gcdRec(48,18) << "\n\n";

    cout << "2. Reverse String 'hello':\n";
    cout << "Reverse = " << reverseRec("hello") << "\n\n";

    cout << "3. Palindrome 'madam' and 'hello':\n";
    string s1 = "madam";
    cout << "madam -> " << (isPalindromeRec(s1,0,s1.length()-1)? "Palindrome" : "Not") << endl;
    string s2 = "hello";
    cout << "hello -> " << (isPalindromeRec(s2,0,s2.length()-1)? "Palindrome" : "Not") << "\n\n";

    cout << "4. Fast Power 2^10:\n";
    cout << "2^10 = " << fastPower(2,10) << "\n\n";

    cout << "5. Sum Array [1,2,3,4,5]:\n";
    int arr[] = {1,2,3,4,5};
    cout << "Sum = " << sumArrayRec(arr,5) << "\n\n";

    cout << "6. Tower of Hanoi for 3 disks:\n";
    towerOfHanoi(3, 'A', 'C', 'B');

    cout << "\n================================================================\n";
    cout << "Key: Advanced recursion breaks problem into same type smaller.\n";
    cout << "06_05 FOLDER COMPLETE - 7 Files!\n";
    cout << "================================================================\n";
    return 0;
}