#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,n;
    cin>>k>>n;
    int drr[n],prr[n];
    for(int i=0;i<n;i++){
        cin>>drr[i];
    }
    for(int i=0;i<n;i++){
        cin>>prr[i];
    }
    sort(drr,drr+n);
    sort(prr,prr+n);
    
    int w=0;
    if(k==1){
        //mimimum total speed
        for(int i=0;i<n;i++){
            w+=max(drr[i],prr[i]);
        }
    } else {
        //maximum total speed
         for(int i=0;i<n;i++){
            w+=max(drr[i],prr[n-1-i]);
        }       
    }
    cout<<w<<"\n";
}
