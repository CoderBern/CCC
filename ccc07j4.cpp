#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map <char, int> m1, m2;
    
    for(char i:s1) m1[i]++;
    for(char i:s2) m2[i]++;
    
    bool flag=true;
    for(auto itr=m1.begin();itr!=m1.end();itr++){
        if(itr->first == ' ') continue;
        if(itr->second != m2[itr->first]){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Is an anagram.\n";
    else cout<<"Is not an anagram.\n";
}
