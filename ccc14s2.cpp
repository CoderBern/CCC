#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map <string, string> ma;
    for(int i=0;i<n;i++){
        ma[a[i]]=b[i];
    }
    bool flag=true;
    for(auto itr=ma.begin();itr!=ma.end();itr++){
        if(itr->first==itr->second or itr->first!=ma[itr->second]){
            flag=false;
            break;
        }
    }

    if(flag) cout<<"good\n";
    else cout<<"bad\n";
}
