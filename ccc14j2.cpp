#include <bits/stdc++.h>

using namespace std;

int main() {
    int v;
    string s;
    cin>>v>>s;
    int a=0,b=0;
    for(char i:s){
        if(i=='A') a++;
        else b++;
    }
    if(a==b) cout<<"Tie\n";
    else if (a>b) cout<<"A\n";
    else cout<<"B\n";
}
