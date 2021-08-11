#include <bits/stdc++.h>

using namespace std;

set <int> s;

void solve(int r){
    auto itr=s.begin();
    int l=s.size();
    set <int> tmp;
    for(int i=1;i<=l;i++){
        if(i%r!=0) tmp.insert(*itr);
        itr++;
    }
    s=tmp;
}

int main() {
    
    int k,m,r;
    cin>>k>>m;
    for(int i=1;i<=k;i++) s.insert(i);

    for(int i=0;i<m;i++){
        cin>>r;
        solve(r);
    }
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<"\n";
    }
    
    
}
