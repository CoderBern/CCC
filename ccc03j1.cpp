#include <iostream>

using namespace std;

int main() {
    int t,s,h;
    cin>>t>>s>>h;
    string a="*"+string(s,' ')+"*"+string(s,' ')+"*\n";
    for(int i=0;i<t;i++) cout<<a;
    for(int i=0;i<3+2*s;i++) cout<<"*";
    cout<<"\n";
    string b=string(1+s,' ')+"*\n";
    for(int i=0;i<h;i++) cout<<b;
}
