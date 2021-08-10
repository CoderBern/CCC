#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    map <char,char> m;
    for(int i=0;i<s1.size();i++){
        m[s2[i]]=s1[i];
    }
    for(int i=0;i<s3.size();i++){
        if(m.find(s3[i])!=m.end()){
            cout<<m[s3[i]];
        } else{
            cout<<'.';
        }
    }
    cout<<"\n";
}
