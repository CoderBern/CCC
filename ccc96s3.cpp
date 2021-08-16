#include <bits/stdc++.h>
using ll=long long;
using namespace std;

void solve(int n, int k, string s, int c){
    if(s.size()==n){
        if(c==k) cout<<s<<"\n";
        return;
    }
    if(c==k) solve(n, k, s+"0", c);
    else {
        solve(n, k, s+"1", c+1);
        solve(n, k, s+"0",c);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        cout<<"The bit patterns are\n";
        solve(n,k,"",0);
        cout<<"\n";
    }
}
