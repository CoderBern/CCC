#include <bits/stdc++.h>
using ll=long long;
using namespace std;

bool comp(pair <string, int>& a, pair <string, int>& b){
    return a.second>b.second;
}

void sortMap(map<string, int>& m){
    vector<pair<string,int>> v;
    for(auto& itr:m){
        v.push_back(itr);
    }
    sort(v.begin(),v.end(), comp);
    cout<<v[0].first<<"\n"<<v[1].first<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map <string, int> m;
    string name;
    int r,s,d;
    for(int i=0;i<n;i++){
        cin>>name>>r>>s>>d;
        m[name]=2*r+3*s+d;
    }
    if(n==0) cout<<"\n";
    else if(n==1) cout<<m.begin()->first<<"\n";
    else sortMap(m);
}
