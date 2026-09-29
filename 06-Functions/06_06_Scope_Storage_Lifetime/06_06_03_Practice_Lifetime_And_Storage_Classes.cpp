#include <iostream>
using namespace std;

int global1 = 100;
static int fileStatic = 200;

int getStaticCount(){
    static int count = 0;
    count++;
    return count;
}

extern int global1; // extern declaration (same file demo)

int main(){
    cout << "================================================================\n";
    cout << "06_06_03_PRACTICE - Lifetime & Storage Classes (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: auto variable demo\n";
    auto int a = 10;
    cout << "auto a=" << a << " stored in stack\n\n";

    cout << "Q2: register variable demo\n";
    register int r = 5;
    cout << "register r=" << r << " request to keep in CPU register\n\n";

    cout << "Q3: static local remembers - call getStaticCount 3 times\n";
    cout << "Solution: " << getStaticCount() << ", " << getStaticCount() << ", " << getStaticCount() << "\n\n";

    cout << "Q4: global vs fileStatic (static global)\n";
    cout << "global1=" << global1 << " (can be externed)\n";
    cout << "fileStatic=" << fileStatic << " (only this file)\n\n";

    cout << "Q5: extern declaration - using global1 via extern\n";
    cout << "extern global1 = " << global1 << "\n\n";

    cout << "Q6: Lifetime - local dies, global lives\n";
    {
        int tempLocal = 999;
        cout << "Inside block tempLocal=" << tempLocal << "\n";
    }
    cout << "Outside block tempLocal dead, but global1=" << global1 << " still alive\n\n";

    cout << "Q7: Default values - static 0 vs auto garbage\n";
    static int sDef;
    cout << "static default = " << sDef << " (0)\n";
    // int autoGarbage; // would be garbage, not printing to avoid UB
    cout << "auto default = garbage (random)\n\n";

    cout << "Q8: Memory location concept\n";
    cout << "Stack: auto, local\n";
    cout << "Data: global, static\n";
    cout << "Heap: new int\n\n";

    cout << "Q9: static local in loop - init only once\n";
    for(int i=0;i<3;i++){
        static int loopStatic = 0;
        loopStatic++;
        cout << "Loop iter " << i << " loopStatic=" << loopStatic << "\n";
    }
    cout << "\n";

    cout << "Q10: extern vs static global difference\n";
    cout << "extern = says defined elsewhere, no new memory\n";
    cout << "static global = memory here, but not shareable\n";
    cout << "Demo done\n\n";

    cout << "================================================================\n";
    cout << "All 10 Storage Class Questions Done! 06_06 COMPLETE!\n";
    cout << "================================================================\n";
    return 0;
}