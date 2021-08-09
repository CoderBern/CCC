#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
    }
    int l=v.size();
    string direction;
    for(int i=l-2;i>=0;i=i-2){
        if(v[i]=="R") direction="LEFT";
        else direction="RIGHT";
        if(i!=0) cout<<"Turn "<<direction<<" onto "<<v[i-1]<<" street.\n";
        else cout<<"Turn "<<direction<<" into your HOME"<<".\n";
    }
}
