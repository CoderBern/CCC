#include <bits/stdc++.h>

using namespace std;

int main() {
    int p,n,r;
    cin>>p>>n>>r;
    int t=0, tmp=n;
    while(n<=p){
        t++;
        tmp*=r;
        n+=tmp;
    }
    cout<<t<<"\n";
}
