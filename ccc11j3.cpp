#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c=0,t=2;
    cin>>a>>b;
    while(true){
        c=a-b;
        if(c<0) break;
        t++;
        a=b;
        b=c;
    }
    cout<<t<<"\n";
}
