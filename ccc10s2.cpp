#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map <string, string> m;
    string a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        m[b]=a;
    }
    string q,s,w="";
    cin>>q;

    for(int i=0;i<q.size();i++){
        for(int j=i;j<q.size();j++){
            s=q.substr(i, j-i+1);
            if(m.find(s)!=m.end()){
              w+=m[s];
              i=j;
              break;
            }
        }
    }
    cout<<w<<"\n";
}
