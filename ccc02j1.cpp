#include <bits/stdc++.h>

using namespace std;
string h1=" * * *\n";
string h2="*     *\n";
string l="*\n";
string r="      *\n";

int main() {
    int n;
    cin>>n;
    if(n==0){
        cout<<h1<<h2<<h2<<h2<<"\n"<<h2<<h2<<h2<<h1;
    }
    if(n==1){
        cout<<"\n"<<r<<r<<r<<"\n"<<r<<r<<r<<"\n";
    }
    if(n==2){
        cout<<h1<<r<<r<<r<<h1<<l<<l<<l<<h1;
    }
    if(n==3){
        cout<<h1<<r<<r<<r<<h1<<r<<r<<r<<h1;
    }
    if(n==4){
        cout<<"\n"<<h2<<h2<<h2<<h1<<r<<r<<r<<"\n";
    }
    if(n==5){
        cout<<h1<<l<<l<<l<<h1<<r<<r<<r<<h1;
    }
    if(n==6){
        cout<<h1<<l<<l<<l<<h1<<h2<<h2<<h2<<h1;
    }
    if(n==7){
        cout<<h1<<r<<r<<r<<"\n"<<r<<r<<r<<"\n";
    }
    if(n==8){
        cout<<h1<<h2<<h2<<h2<<h1<<h2<<h2<<h2<<h1;
    }
    if(n==9){
        cout<<h1<<h2<<h2<<h2<<h1<<r<<r<<r<<h1;
    }
}
