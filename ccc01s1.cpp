#include <bits/stdc++.h>

using namespace std;

int main() {
    map <char, vector<char>> m;
    map <char, int> score;
    string s;
    cin>>s;
    
    char tmp;
    for(char c:s){
        if(c=='C' or c=='D' or c=='H' or c=='S'){
            tmp=c;
            continue;
        }
        m[tmp].push_back(c);
        if(c=='A') score[tmp]+=4;
        if(c=='K') score[tmp]+=3;
        if(c=='Q') score[tmp]+=2;
        if(c=='J') score[tmp]+=1;
    }
    
    char suits[]={'C','D','H','S'};
    for(char c:suits){
        if(m.find(c)==m.end()) score[c]+=3;
        else if(m[c].size()==1) score[c]+=2;
        else if(m[c].size()==2) score[c]+=1;
    }
    
    map <char, string> name;
    name['C']="Clubs";
    name['D']="Diamonds";
    name['H']="Hearts";
    name['S']="Spades";
    
    cout<<"Cards Dealt Points\n";
    int total=0;
    for(char c:suits){
        cout<<name[c]<<" ";
        for(char ch:m[c]) cout<<ch<<" ";
        cout<<score[c]<<"\n";
        total+=score[c];
    }
    cout<<"Total "<<total<<"\n";
}
