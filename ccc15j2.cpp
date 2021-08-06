#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin,str);
    string happy=":-)", sad=":-(";
    int h=0,s=0;
    for(int i=0;i<str.size()-2;i++){
        if(str.substr(i,3)==happy) {h++;i+=2;continue;}
        if(str.substr(i,3)==sad) {s++;i+=2;continue;}
    }
    if(h==0 and s==0) cout<<"none\n";
    else if(h==s) cout<<"unsure\n";
    else if(h>s) cout<<"happy\n";
    else cout<<"sad\n";
}
