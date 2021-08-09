#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b,s;
    cin>>a>>b;
    map <char,int> m,ma,mb;
    for(char c: a) {m[c]++;ma[c]++;}
    for(char c: b) {m[c]++;mb[c]++;}

    vector <char> mustnot;
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(isupper(itr->first) and itr->second>=3) {mustnot.push_back(tolower(itr->first));}
        if(islower(itr->first) and itr->second==4) {mustnot.push_back(toupper(itr->first));}
    }
    for(auto itr=ma.begin();itr!=ma.end();itr++){
        if(isupper(itr->first) and itr->second==2) {mustnot.push_back(tolower(itr->first));}
    }
    for(auto itr=mb.begin();itr!=mb.end();itr++){
        if(isupper(itr->first) and itr->second==2) {mustnot.push_back(tolower(itr->first));}
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>s;
        bool flag=true;
        for(char c:s){
            if(find(mustnot.begin(),mustnot.end(),c)!=mustnot.end()) {flag= false;break;}
        }
        if(flag) cout<<"Possible baby.\n";
        else cout<<"Not their baby!\n";
    }
    
}
