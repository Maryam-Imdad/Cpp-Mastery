#include <iostream>
using namespace std;

// Q1: area - square vs rectangle
int area(int side){
    return side * side; // square
}
int area(int l, int w){
    return l * w; // rectangle
}

// Q2: add overloaded
int add(int a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}
int add(int a, int b, int c){
    return a + b + c;
}

// Q3: max overloaded
int getMax(int a, int b){
    if(a > b) return a;
    else return b;
}
float getMax(float a, float b){
    if(a > b) return a;
    else return b;
}

// Q4: print overloaded
void print(int n){
    cout << "Int: " << n;
}
void print(float f){
    cout << "Float: " << f;
}
void print(string s){
    cout << "String: " << s;
}

// Q5: multiply overloaded
int multiply(int a, int b){
    return a * b;
}
int multiply(int a, int b, int c){
    return a * b * c;
}
float multiply(float a, float b){
    return a * b;
}

// Q6: cube - int vs float
int cube(int n){
    return n * n * n;
}
float cube(float n){
    return n * n * n;
}

// Q7: power - default overload simulation
int power(int base){
    return base * base;
}
int power(int base, int exp){
    int result = 1;
    for(int i=0; i<exp; i++) result *= base;
    return result;
}

// Q8: absolute - int vs float
int absolute(int n){
    return n < 0 ? -n : n;
}
float absolute(float n){
    return n < 0 ? -n : n;
}

// Q9: display - 1 arg vs 2 args
void display(int a){
    cout << "One: " << a;
}
void display(int a, int b){
    cout << "Two: " << a << " , " << b;
}

// Q10: volume overload
int volume(int side){
    return side * side * side; // cube
}
int volume(int l, int w, int h){
    return l * w * h; // cuboid
}

int main(){
    cout << "================================================================\n";
    cout << "06_04_03_PRACTICE - Function Overloading (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: area(5) vs area(5,10)\n";
    cout << "Solution: Square=" << area(5) << " , Rectangle=" << area(5,10) << "\n\n";

    cout << "Q2: add(2,3) , add(2.5f,3.5f) , add(1,2,3)\n";
    cout << "Solution: " << add(2,3) << " , " << add(2.5f,3.5f) << " , " << add(1,2,3) << "\n\n";

    cout << "Q3: getMax(10,20) , getMax(10.5f,5.5f)\n";
    cout << "Solution: " << getMax(10,20) << " , " << getMax(10.5f,5.5f) << "\n\n";

    cout << "Q4: print(10) , print(5.5f) , print('Hello')\n";
    cout << "Solution: ";
    print(10);
    cout << " | ";
    print(5.5f);
    cout << " | ";
    print("Hello");
    cout << "\n\n";

    cout << "Q5: multiply(2,3) , multiply(2,3,4) , multiply(2.5f,3.5f)\n";
    cout << "Solution: " << multiply(2,3) << " , " << multiply(2,3,4) << " , " << multiply(2.5f,3.5f) << "\n\n";

    cout << "Q6: cube(3) , cube(2.5f)\n";
    cout << "Solution: " << cube(3) << " , " << cube(2.5f) << "\n\n";

    cout << "Q7: power(5) square, power(2,3) cube\n";
    cout << "Solution: " << power(5) << " , " << power(2,3) << "\n\n";

    cout << "Q8: absolute(-10) , absolute(-10.5f)\n";
    cout << "Solution: " << absolute(-10) << " , " << absolute(-10.5f) << "\n\n";

    cout << "Q9: display(10) , display(10,20)\n";
    cout << "Solution: ";
    display(10);
    cout << " | ";
    display(10,20);
    cout << "\n\n";

    cout << "Q10: volume(4) cube , volume(2,3,5) cuboid\n";
    cout << "Solution: " << volume(4) << " , " << volume(2,3,5) << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Overloading Questions Done! 06_04 COMPLETE!\n";
    cout << "================================================================\n";
    return 0;
}