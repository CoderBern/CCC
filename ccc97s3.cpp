#include <bits/stdc++.h>
using ll=long long;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        cout<<"Round 0: "<<t<<" undefeated, 0 one-loss, 0 eliminated\n";
        int round=0;
        int undefeated=t, oneloss=0, eliminated=0;
    while(eliminated<t-2){
        round++;
        int tmp =oneloss/2;
        oneloss += undefeated/2 - tmp; 
        if(undefeated>1){
        undefeated -=undefeated/2;
        }
        eliminated += tmp;
        cout<<"Round "<<round<<": "<<undefeated<<" undefeated, "<<oneloss<<" one-loss, "<<eliminated<<" eliminated\n";
    }
    if(t==2){
        round++;
        undefeated=1;
        oneloss=1;
        eliminated=0;
        cout<<"Round "<<round<<": "<<undefeated<<" undefeated, "<<oneloss<<" one-loss, "<<eliminated<<" eliminated\n";
    }
    round++;
    undefeated = 0;
    oneloss++;
    cout<<"Round "<<round<<": "<<undefeated<<" undefeated, "<<oneloss<<" one-loss, "<<eliminated<<" eliminated\n";
    round++;
    oneloss--;
    eliminated++;
    cout<<"Round "<<round<<": "<<undefeated<<" undefeated, "<<oneloss<<" one-loss, "<<eliminated<<" eliminated\n";
        cout<<"There are "<<round<<" rounds.\n\n";
        
    }
}
