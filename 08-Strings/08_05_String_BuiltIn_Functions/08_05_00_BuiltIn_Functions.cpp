#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*

TOPIC: Built-in Functions of string class

1. length()/size() 2. substr(pos,len) 3. find() 4. replace()
5. erase() 6. insert() 7. compare() 8. empty()
9. to_string() 10. stoi()
*/

int main(){
    cout << "================================================================\n";
    cout << "08_05_00 - BUILTIN FUNCTIONS\n";
    cout << "================================================================\n\n";

    string s="HelloWorld";
    cout << "s=" << s << "\n";
    cout << "length=" << s.length() << "\n";
    cout << "substr(0,5)=" << s.substr(0,5) << "\n"; // From 0 take 5
    cout << "find('World')=" << s.find("World") << "\n"; // Position
    cout << "find('xyz')=" << s.find("xyz") << " (npos=" << string::npos << ")\n";

    string r="HelloWorld";
    r.replace(5,5,"C++"); cout << "replace=" << r << "\n";

    cout << "to_string(123)=" << to_string(123) + "abc" << "\n";
    cout << "stoi('456')+1=" << stoi("456")+1 << "\n";

    string e=""; cout << "empty? " << (e.empty()?"Yes":"No") << "\n";

    cout << "\n================================================================\n";
    return 0;
}