#include <iostream>
using namespace std;
/*

FILE: 06_06_03_Lifetime_And_Storage_Classes.cpp
TOPIC: LIFETIME AND STORAGE CLASSES


PART A: BEGINNER - What is Storage Class?

Storage Class tells: Where stored? Lifetime? Scope? Default value?

4 Old C storage classes (C++ still supports):
1. auto (default for local)
2. register (request to store in CPU register)
3. static (global lifetime)
4. extern (declare variable defined elsewhere)

Memory Layout of C++ Program:
- Code Segment: Your code
- Data Segment: Global + Static (initialized)
- BSS: Global + Static (uninitialized, zero)
- Heap: new/malloc (dynamic)
- Stack: Local variables, function calls

PART B: INTERMEDIATE - Each Class

1. auto: int auto x=5; Means local, stack, auto destroyed. All locals are auto by default. Keyword rarely used.

2. register: register int i; Request to keep in CPU register for speed (loops). Modern compilers ignore, they optimize auto.

3. static: static int x; Data segment, zero default, lifetime whole program. Two uses: static local (remembers) and static global (file scope only, not visible to other files)

4. extern: extern int x; Says x defined in another file. No memory allocated here, just declaration. Used to share global across files.

C++ also has:
- mutable, thread_local but for later.

PART C: ADVANCE - Lifetime Summary Table

Type | Storage | Lifetime | Scope | Default
auto | Stack | Function | Block | Garbage
register | Register| Function | Block | Garbage
static | Data | Program | Block/File | 0
extern | Data | Program | Whole | 0
global | Data | Program | Whole File | 0

PART D: SCHOLAR - Interview

Q: Difference between static global and normal global?
Static global: visible only in this file. Normal global: visible across files via extern.
Q: What is extern?
Declaration that variable defined elsewhere.
Q: Where are static stored? Data Segment.
Q: auto keyword? Default storage for locals.
*/

int globalVar = 10; // Global - Data Segment
static int staticGlobal = 20; // Static Global - file scope only

void demoStorage(){
    auto int autoVar = 5; // auto - Stack (same as int autoVar)
    register int regVar = 10; // register - request for CPU register
    static int staticVar = 30; // static local - Data Segment
    // extern int extVar; // would refer to var defined elsewhere

    cout << "autoVar (stack) = " << autoVar << endl;
    cout << "regVar (register request) = " << regVar << endl;
    cout << "staticVar (data segment, remembers) = " << staticVar << endl;
    staticVar++;
}

int main(){
    cout << "================================================================\n";
    cout << "06_06_03 - LIFETIME AND STORAGE CLASSES\n";
    cout << "================================================================\n\n";

    cout << "Memory Layout:\n";
    cout << "Code -> Data (global/static) -> BSS -> Heap -> Stack\n\n";

    cout << "Demo Storage Classes:\n";
    demoStorage();
    demoStorage();
    demoStorage();
    cout << "Note: staticVar increases 30,31,32\n\n";

    cout << "Table:\n";
    cout << "auto - Stack, Function lifetime, Garbage default\n";
    cout << "register - CPU Register (request), Function, Garbage\n";
    cout << "static - Data Segment, Program lifetime, 0 default\n";
    cout << "extern - Data Segment, Program, 0 default, shared across files\n";
    cout << "global - Data Segment, Program, 0 default\n\n";

    cout << "static global vs global:\n";
    cout << "globalVar=" << globalVar << " accessible across files via extern\n";
    cout << "staticGlobal=" << staticGlobal << " only this file, cannot extern elsewhere\n";

    cout << "\n================================================================\n";
    cout << "Key: Storage class decides WHERE, HOW LONG, VISIBLE WHERE.\n";
    cout << "06_06 FOLDER COMPLETE - 7 Files!\n";
    cout << "================================================================\n";
    return 0;
}