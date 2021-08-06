#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int aa=0,bb=0;
    aa=a*3+b*2+c;
    bb=d*3+e*2+f;
    if(aa>bb) cout<<"A\n";
    else if(aa<bb) cout<<"B\n";
    else cout<<"T\n";
}
