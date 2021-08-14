#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    string s;
    map <char,int> m;
    for(int i=0;i<t;i++){
        getline(cin,s);
        for(char c:s){
            m[c]++;
        }
    }
    int ct=m['t']+m['T'];
    int cs=m['s']+m['S'];
    
    if(ct>cs) cout<<"English\n";
    else cout<<"French\n";
}
