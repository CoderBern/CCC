#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b;
    int aa=100,bb=100;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a<b) aa-=b;
        else if(a>b) bb-=a;
    }
    cout<<aa<<"\n"<<bb<<"\n";
}
