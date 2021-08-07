#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b, bool s){
    if(a<b and s){
        swap(a,b);
    }
    if(a==0) return b;
    return gcd(b%a, a, false);
}

int main() {
    int a,b;
    cin>>a>>b;
    int d=gcd(a,b,true);
    a /=d;
    b /=d;
    if(b==1) cout<<a<<"\n";
    else if(a>b) {
        int c=a/b;
        cout<<c<<" "<<a-c*b<<"/"<<b<<"\n";
    } else cout<<a<<"/"<<b<<"\n";

}
