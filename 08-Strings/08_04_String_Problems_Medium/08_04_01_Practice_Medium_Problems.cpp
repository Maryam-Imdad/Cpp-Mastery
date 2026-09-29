#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "08_04_01 - PRACTICE MEDIUM (10 Qs)\n\n";

    // Q1: Anagram check
    cout << "Q1: Anagram listen/silent\n";
    string s1="listen", s2="silent";
    int f1[26]={0}, f2[26]={0};
    for(char c:s1) f1[c-'a']++; for(char c:s2) f2[c-'a']++;
    bool ok=true; for(int i=0;i<26;i++) if(f1[i]!=f2[i]) ok=false;
    cout<<(ok?"Anagram":"Not")<<"\n\n";

    // Q2: Frequency of each char
    cout << "Q2: Frequency of 'banana'\n";
    string s="banana"; int freq[26]={0};
    for(char c:s) freq[c-'a']++;
    for(int i=0;i<26;i++) if(freq[i]>0) cout<<(char)('a'+i)<<":"<<freq[i]<<" ";
    cout<<"\n\n";

    // Q3: First non-repeating char
    cout << "Q3: First non-repeating in 'swiss'\n";
    string sw="swiss"; int fr[26]={0}; for(char c:sw) fr[c-'a']++;
    for(char c:sw) if(fr[c-'a']==1){ cout<<c<<"\n"; break; }
    cout<<"\n";

    // Q4: Remove duplicates
    cout << "Q4: Remove duplicates 'hello'\n";
    string dup="hello"; string res=""; bool seen[26]={0};
    for(char c:dup){ if(!seen[c-'a']){ res+=c; seen[c-'a']=true; } }
    cout<<res<<"\n\n";

    // Q5: Count words in sentence
    cout << "Q5: Count words in 'Hello World Test'\n";
    string sen="Hello World Test"; int words=1;
    for(char c:sen) if(c==' ') words++; cout<<words<<"\n\n";

    // Q6: Reverse each word
    cout << "Q6: Reverse each word logic: split by space then reverse each\n\n";

    // Q7: Toggle case: Hello -> hELLO
    cout << "Q7: Toggle 'Hello'\n";
    string tg="Hello"; for(int i=0;i<tg.size();i++){ if(islower(tg[i])) tg[i]=toupper(tg[i]); else tg[i]=tolower(tg[i]); } cout<<tg<<"\n\n";

    // Q8: Check only digits
    cout << "Q8: Check '123a' is only digits? ";
    string num="123a"; bool allDigit=true; for(char c:num) if(!isdigit(c)) allDigit=false; cout<<(allDigit?"Yes":"No")<<"\n\n";

    // Q9: Remove spaces
    cout << "Q9: Remove spaces 'a b c'\n";
    string sp="a b c"; string ns=""; for(char c:sp) if(c!=' ') ns+=c; cout<<ns<<"\n\n";

    // Q10: Largest word in sentence
    cout << "Q10: Largest word logic: split words, track max len word\n";

    cout << "================================================================\n";
    return 0;
}