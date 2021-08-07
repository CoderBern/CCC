#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin>>m;
    int l,w;
    int maxp=0;
    for(int i=0;i<m;i++){
        cin>>l>>w;
        maxp=max(maxp, l*w);
    }
    cin>>m;
    string result="Casper";
    for(int i=0;i<m;i++){
        cin>>l>>w;
        if(l*w>maxp) {
            result="Natalie";
            break;
        } else if(l*w==maxp){
            result="Tie";
        }
    }
    
    cout<<result<<"\n";
}
