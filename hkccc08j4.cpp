#include <bits/stdc++.h>

using namespace std;
string s;

bool check(){
    int a=0, b=0;
    for(int i=0;i<9;i++){
        if(s[i]=='X') a++;
        else if(s[i]=='O') b++;
    }
    
    if(b>a) return false;
    
    if(b==a) {
        if(s[0]==s[1] and s[1]==s[2] and s[0]=='X') return false;
        if(s[3]==s[4] and s[4]==s[5] and s[3]=='X') return false;
        if(s[6]==s[7] and s[7]==s[8] and s[6]=='X') return false;
        
        if(s[0]==s[3] and s[3]==s[6] and s[0]=='X') return false;
        if(s[1]==s[4] and s[4]==s[7] and s[1]=='X') return false;
        if(s[2]==s[5] and s[5]==s[8] and s[2]=='X') return false;
        
        if(s[0]==s[4] and s[4]==s[8] and s[0]=='X') return false;
        if(s[2]==s[4] and s[4]==s[6] and s[2]=='X') return false;
    }
    
    if(a-b>1) return false;
    
    if(a>b){
        if(s[0]==s[1] and s[1]==s[2] and s[0]=='O') return false;
        if(s[3]==s[4] and s[4]==s[5] and s[3]=='O') return false;
        if(s[6]==s[7] and s[7]==s[8] and s[6]=='O') return false;
        
        if(s[0]==s[3] and s[3]==s[6] and s[0]=='O') return false;
        if(s[1]==s[4] and s[4]==s[7] and s[1]=='O') return false;
        if(s[2]==s[5] and s[5]==s[8] and s[2]=='O') return false;
        
        if(s[0]==s[4] and s[4]==s[8] and s[0]=='O') return false;
        if(s[2]==s[4] and s[4]==s[6] and s[2]=='O') return false;        
    }
    
    return true;
}

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>s;
        if(check()) cout<<"yes\n";
        else cout<<"no\n";
    }
    
}
