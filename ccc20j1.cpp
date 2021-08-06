#include <bits/stdc++.h>

using namespace std;

int main() {
    int s,m,l;
    cin>>s>>m>>l;
    int sum=s+2*m+3*l;
    if(sum>=10) cout<<"happy\n";
    else cout<<"sad\n";
}
