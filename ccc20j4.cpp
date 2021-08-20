#include <bits/stdc++.h>

using namespace std;

string arr[1000];

void cyclic_shift(string s, int t, int l){
    if(t==l) return;
    arr[t]=s;
    cyclic_shift(s.substr(1,l-1)+string(1,s[0]),t+1,l);
}

bool check(string s, int l){
    for(int i=0;i<l;i++){
        if(s.find(arr[i])!=string::npos) return true;
    }
    return false;
}

int main() {
    string t,s;
    cin>>t>>s;
    cyclic_shift(s,0,s.size());
    if(check(t,s.size())) cout<<"yes\n";
    else cout<<"no\n";
}
