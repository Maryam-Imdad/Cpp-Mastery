#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "================================================================\n";
    cout << "08_03_01 - PRACTICE EASY (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Reverse string
    cout << "Q1: Reverse 'Ali'\n";
    string s="Ali"; string rev="";
    for(int i=s.size()-1;i>=0;i--) rev+=s[i]; // Add from end
    cout<<rev<<"\n\n";

    // Q2: Palindrome check
    cout << "Q2: Check 'level' Palindrome\n";
    string p="level"; bool ok=true;
    for(int i=0;i<p.size()/2;i++) if(p[i]!=p[p.size()-1-i]) ok=false;
    cout<<(ok?"Yes":"No")<<"\n\n";

    // Q3: Count vowels
    cout << "Q3: Count vowels in 'Hello World'\n";
    string v="Hello World"; int vc=0;
    for(int i=0;i<v.size();i++){
        char c=tolower(v[i]); // Convert to lower for easy check
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vc++;
    }
    cout<<"Vowels="<<vc<<"\n\n";

    // Q4: Count consonants
    cout << "Q4: Count consonants\n";
    int cc=0;
    for(int i=0;i<v.size();i++){
        char c=tolower(v[i]);
        if(c>='a' && c<='z' &&!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) cc++;
    }
    cout<<"Consonants="<<cc<<"\n\n";

    // Q5: Count spaces
    cout << "Q5: Count spaces in 'Hello World'\n";
    int sp=0; for(char ch: v) if(ch==' ') sp++; cout<<sp<<"\n\n";

    // Q6: Upper to lower
    cout << "Q6: Upper to lower 'HeLLo'\n";
    string up="HeLLo";
    for(int i=0;i<up.size();i++) up[i]=tolower(up[i]); // Built-in tolower
    cout<<up<<"\n\n";

    // Q7: Lower to upper
    cout << "Q7: Lower to upper 'hello'\n";
    string low="hello";
    for(int i=0;i<low.size();i++) low[i]=toupper(low[i]);
    cout<<low<<"\n\n";

    // Q8: Length without size()
    cout << "Q8: Length manual\n";
    string lenS="Test"; int len=0; while(lenS[len]!='\0') len++; // Till \0
    // Safer: for loop count
    int len2=0; for(char c: lenS) len2++; cout<<len2<<"\n\n";

    // Q9: Copy string without =
    cout << "Q9: Copy without =\n";
    string src="Copy"; string dest=""; for(int i=0;i<src.size();i++) dest+=src[i]; cout<<dest<<"\n\n";

    // Q10: Compare two strings without ==
    cout << "Q10: Compare 'abc' 'abd'\n";
    string a="abc", b="abd";
    bool same=true;
    if(a.size()!=b.size()) same=false;
    else for(int i=0;i<a.size();i++) if(a[i]!=b[i]) same=false;
    cout<<(same?"Equal":"Not Equal")<<"\n";

    cout << "\n================================================================\n";
    return 0;
}