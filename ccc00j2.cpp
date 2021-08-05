#include <bits/stdc++.h>

using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    
    //counter
    int c=0;
    
    for(int i=m;i<=n;i++){
        string s=to_string(i);
        string new_s="";
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='0') new_s+="0";
            else if(s[j]=='1') new_s+="1";
            else if(s[j]=='6') new_s+="9";
            else if(s[j]=='8') new_s+="8";
            else if(s[j]=='9') new_s+="6";
            else if(s[j]=='0') new_s+="0";
            else break;
        }
        
        if(s==new_s) c++;
    }
    cout<<c<<endl;
}
