#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int start = pow(a,(double)1/3);
    if(start*start*start<a) start++;
    int count_=0;
    for(int i=start; i*i*i<=b; i++){
        int x=pow(i*i*i,(double)1/2);
        if(x*x == i*i*i) count_++;
    }
    cout<<count_<<"\n";
}
