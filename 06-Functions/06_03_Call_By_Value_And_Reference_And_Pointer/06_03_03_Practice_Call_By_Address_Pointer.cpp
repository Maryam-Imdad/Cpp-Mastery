#include <iostream>
using namespace std;

// Q1: Change to 100 via pointer
void changeTo100(int *x){
    *x = 100;
    cout << "Inside: *x = " << *x;
}

// Q2: Increment via pointer
void increment(int *n){
    (*n)++;
    cout << "Inside: *n = " << *n;
}

// Q3: Swap via pointer
void swapPtr(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside: *a=" << *a << " *b=" << *b;
}

// Q4: Make square via pointer
void makeSquare(int *n){
    *n = (*n) * (*n);
    cout << "Inside: *n = " << *n;
}

// Q5: Make double via pointer
void makeDouble(int *n){
    *n = (*n) * 2;
    cout << "Inside: *n = " << *n;
}

// Q6: Make negative via pointer
void makeNegative(int *n){
    *n = -(*n);
    cout << "Inside: *n = " << *n;
}

// Q7: Add 10 via pointer
void addTen(int *n){
    *n = *n + 10;
    cout << "Inside: *n = " << *n;
}

// Q8: Make zero both
void makeZero(int *a, int *b){
    *a = 0;
    *b = 0;
    cout << "Inside: *a=" << *a << " *b=" << *b;
}

// Q9: Set both to max via pointer
void setBothToMax(int *a, int *b){
    if(*a > *b){
        *b = *a;
    }
    else{
        *a = *b;
    }
    cout << "Inside: *a=" << *a << " *b=" << *b;
}

// Q10: Absolute via pointer
void setPositive(int *n){
    if(*n < 0){
        *n = -(*n);
    }
    cout << "Inside: *n = " << *n;
}

int main(){
    cout << "================================================================\n";
    cout << "06_03_03_PRACTICE - Call By Address/Pointer (10 Questions)\n";
    cout << "================================================================\n\n";

    cout << "Q1: changeTo100(20)\n";
    int a = 20;
    cout << "Before: a=" << a << " | ";
    changeTo100(&a);
    cout << " | After: a=" << a << " (Changed!)\n\n";

    cout << "Q2: increment(5)\n";
    int b = 5;
    cout << "Before: b=" << b << " | ";
    increment(&b);
    cout << " | After: b=" << b << "\n\n";

    cout << "Q3: swapPtr(10,20)\n";
    int p = 10, q = 20;
    cout << "Before: p=" << p << " q=" << q << " | ";
    swapPtr(&p, &q);
    cout << " | After: p=" << p << " q=" << q << " (Swapped)\n\n";

    cout << "Q4: makeSquare(7)\n";
    int c = 7;
    cout << "Before: c=" << c << " | ";
    makeSquare(&c);
    cout << " | After: c=" << c << "\n\n";

    cout << "Q5: makeDouble(15)\n";
    int d = 15;
    cout << "Before: d=" << d << " | ";
    makeDouble(&d);
    cout << " | After: d=" << d << "\n\n";

    cout << "Q6: makeNegative(25)\n";
    int e = 25;
    cout << "Before: e=" << e << " | ";
    makeNegative(&e);
    cout << " | After: e=" << e << "\n\n";

    cout << "Q7: addTen(30)\n";
    int f = 30;
    cout << "Before: f=" << f << " | ";
    addTen(&f);
    cout << " | After: f=" << f << "\n\n";

    cout << "Q8: makeZero(5,9)\n";
    int g = 5, h = 9;
    cout << "Before: g=" << g << " h=" << h << " | ";
    makeZero(&g, &h);
    cout << " | After: g=" << g << " h=" << h << "\n\n";

    cout << "Q9: setBothToMax(12,45)\n";
    int i = 12, j = 45;
    cout << "Before: i=" << i << " j=" << j << " | ";
    setBothToMax(&i, &j);
    cout << " | After: i=" << i << " j=" << j << "\n\n";

    cout << "Q10: setPositive(-10)\n";
    int k = -10;
    cout << "Before: k=" << k << " | ";
    setPositive(&k);
    cout << " | After: k=" << k << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Call By Pointer Questions Done!\n";
    cout << "FOLDER 06_03 COMPLETE - 7 Files Total!\n";
    cout << "================================================================\n";
    return 0;
}