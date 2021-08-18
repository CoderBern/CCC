#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> a, pair<int, int>b){
    if(a.second>b.second) return true;
    if(a.second==b.second) return a.first<b.first;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    map <int, string> contacts;
    string name;
    int number;
    for(int i=0;i<n;i++){
        cin>>name>>number;
        contacts[number]=name;
    }
    int d;
    cin>>d;
    map <int, int> m;
    for(int i=0; i<d;i++){
        cin>>number;
        m[number]++;
    }
    vector <pair<int,int>> v;
    for(auto itr=m.begin(); itr!=m.end();itr++){
        v.push_back({itr->first, itr->second});
    }
    sort(v.begin(), v.end(), comp);
    cout<<contacts[v[0].first]<<"\n";
}
