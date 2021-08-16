#include <bits/stdc++.h>

using namespace std;

bool check(string s,int l){
    string rs="";
    for(int i=l-1;i>=0;i--) rs+=string(1,s[i]);
    if(s==rs) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int l=s.size();
    bool flag=false;
    for(int i=l;i>0;i--){
        for(int j=0;j<=l-i;j++){
            string subs=s.substr(j,i);
            if(check(subs,i)){
                cout<<i<<"\n";
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
}
