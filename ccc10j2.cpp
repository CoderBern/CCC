#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d,s;
    cin>>a>>b>>c>>d>>s;
    int r1=s%(a+b), r2=s%(c+d);
    int t1=s/(a+b), t2=s/(c+d);
    int d1=t1*(a-b)+min(r1,a)-(r1-min(r1,a)),d2=t2*(c-d)+min(r2,c)-(r2-min(r2,c));
    if(d1>d2) cout<<"Nikky\n";
    else if(d1<d2) cout<<"Byron\n";
    else cout<<"Tied\n";
}
