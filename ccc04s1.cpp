#include <bits/stdc++.h>

using namespace std;
string s[3];

bool check(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j) continue;
            if(s[i].size()<s[j].size()) continue;
            int pos=s[i].find(s[j]);
            if(pos==0 or pos==s[i].size()-s[j].size()) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[0]>>s[1]>>s[2];
        if(check()) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
