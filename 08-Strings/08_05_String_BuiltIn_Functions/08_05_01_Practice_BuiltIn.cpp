#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "08_05_01 - PRACTICE BUILTIN 10 Qs\n\n";
    string s="HelloWorld";
    // Q1 substr
    cout << "Q1 substr(0,5)=" << s.substr(0,5) << "\n";
    // Q2 find
    cout << "Q2 find World at " << s.find("World") << "\n";
    // Q3 replace
    string t=s; t.replace(0,5,"Hi"); cout << "Q3 replace Hello->Hi " << t << "\n";
    // Q4 erase
    t=s; t.erase(5,5); cout << "Q4 erase World " << t << "\n";
    // Q5 insert
    t=s; t.insert(5," "); cout << "Q5 insert space " << t << "\n";
    // Q6 stoi
    cout << "Q6 stoi 123 + 7 = " << stoi("123")+7 << "\n";
    // Q7 to_string
    cout << "Q7 to_string " << to_string(99) << "\n";
    // Q8 compare
    cout << "Q8 compare abc abc " << string("abc").compare("abc") << "\n";
    // Q9 empty
    cout << "Q9 empty check " << (string("").empty()?"Empty":"Not") << "\n";
    // Q10 append
    string a="Hi"; a.append(" There"); cout << "Q10 append " << a << "\n";
    return 0;
}