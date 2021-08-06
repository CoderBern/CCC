#include <bits/stdc++.h>

using namespace std;

int main() {
    pair <int, int> pos;
    map <char, pair<int,int>> m;
    m['A']={0,0};m['B']={0,1};m['C']={0,2};m['D']={0,3};m['E']={0,4};m['F']={0,5};
    m['G']={1,0};m['H']={1,1};m['I']={1,2};m['J']={1,3};m['K']={1,4};m['L']={1,5};
    m['M']={2,0};m['N']={2,1};m['O']={2,2};m['P']={2,3};m['Q']={2,4};m['R']={2,5};
    m['S']={3,0};m['T']={3,1};m['U']={3,2};m['V']={3,3};m['W']={3,4};m['X']={3,5};
    m['Y']={4,0};m['Z']={4,1};m[' ']={4,2};m['-']={4,3};m['.']={4,4};m['+']={4,5};
    string s;
    getline(cin,s);
    int w=0;
    pos.first=0;pos.second=0;
    for(int i=0;i<s.size();i++){
        w+=abs(m[s[i]].first-pos.first) + abs(m[s[i]].second-pos.second);
        pos.first=m[s[i]].first;pos.second=m[s[i]].second;
    }
    w+=m['+'].first - pos.first + m['+'].second -pos.second;
    cout<<w<<"\n";

}
