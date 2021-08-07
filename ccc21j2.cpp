#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    string name,w;
    int bid, m=0;
    for(int i=0;i<t;i++){
        cin>>name>>bid;
        if(bid>m){
            m=bid;
            w=name;
        }
    }
    cout<<w<<"\n";
}
