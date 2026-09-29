#include <iostream>
using namespace std;

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int maxNum(int a,int b){ return a>b?a:b; }
int minNum(int a,int b){ return a<b?a:b; }

int calc(int a,int b, int (*op)(int,int)){
    return op(a,b);
}

void greet(){
    cout << "Hello from function pointer!";
}

int square(int n){ return n*n; }
int cube(int n){ return n*n*n; }

int apply(int n, int (*func)(int)){
    return func(n);
}

int main(){
    cout << "================================================================\n";
    cout << "06_07_03_PRACTICE - Function Pointers (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: Function pointer to add(10,20)\n";
    int (*pAdd)(int,int) = add;
    cout << "Solution: " << pAdd(10,20) << "\n\n";

    cout << "Q2: Function pointer to sub(20,5)\n";
    int (*pSub)(int,int) = sub;
    cout << "Solution: " << pSub(20,5) << "\n\n";

    cout << "Q3: Calculate with callback add and mul\n";
    cout << "Solution: calc(6,3,add)=" << calc(6,3,add) << " calc(6,3,mul)=" << calc(6,3,mul) << "\n\n";

    cout << "Q4: Pointer to greet() no args\n";
    void (*pGreet)() = greet;
    cout << "Solution: ";
    pGreet();
    cout << "\n\n";

    cout << "Q5: Array of function pointers add,sub,mul\n";
    int (*arr[3])(int,int) = {add,sub,mul};
    cout << "Solution: " << arr[0](5,5) << ", " << arr[1](5,5) << ", " << arr[2](5,5) << "\n\n";

    cout << "Q6: apply square(5) via pointer\n";
    int (*pSq)(int) = square;
    cout << "Solution: " << apply(5,pSq) << "\n\n";

    cout << "Q7: apply cube(3) via pointer\n";
    int (*pCube)(int) = cube;
    cout << "Solution: " << apply(3,pCube) << "\n\n";

    cout << "Q8: maxNum via pointer\n";
    int (*pMax)(int,int) = maxNum;
    cout << "Solution: max(10,20)=" << pMax(10,20) << "\n\n";

    cout << "Q9: Switch operation at runtime\n";
    int (*op)(int,int) = add;
    cout << "op=add => " << op(10,10) << "\n";
    op = mul;
    cout << "op=mul => " << op(10,10) << "\n\n";

    cout << "Q10: minNum via calc function\n";
    cout << "Solution: calc(10,20,minNum)=" << calc(10,20,minNum) << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Function Pointer Questions Done!\n";
    cout << "06_07 COMPLETE! 06-FUNCTIONS FULLY DONE! 31 Files!\n";
    cout << "================================================================\n";
    return 0;
}