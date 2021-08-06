#include <bits/stdc++.h>

using namespace std;

string a,b;
map <char, int> ma;
map <char, int> mb;

bool solve(){
    int c=0;
    for(auto itr=ma.begin();itr!=ma.end();itr++){
        if(mb.find(itr->first)==mb.end()) c+=itr->second;
        else if(mb[itr->first]>(itr->second)) return false;
        else c+=(itr->second) - mb[itr->first];
    }
    if(mb.find('*')!=mb.end()) c=c-mb['*'];

    if(c==0) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>a>>b;

    for(char i:a){
        if(ma.find(i)==ma.end()) ma[i]=1;
        else ma[i]++;
    }
    for(char i:b){
        if(mb.find(i)==mb.end()) mb[i]=1;
        else mb[i]++;        
    }

    if(solve()) cout<<"A\n";
    else cout<<"N\n";
}
