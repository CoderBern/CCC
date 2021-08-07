#include <bits/stdc++.h>

using namespace std;

int main() {
    int b;
    cin>>b;
    int p=5*b-400;
    cout<<p<<"\n";
    if(p>100) cout<<"-1\n";
    else if(p==100) cout<<"0\n";
    else cout<<"1\n";
}
