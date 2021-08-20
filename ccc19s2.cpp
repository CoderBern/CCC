#include <bits/stdc++.h>

using namespace std;

bool prime(int i){
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) return false;
    }    
    return true;
}

int count_=1;

int main() {
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        if(prime(2*k-2)) cout<<2<<" "<<2*k-2<<"\n";
        else {
            for(int j=3;j<=k;j=j+2){
                if(prime(j) and prime(2*k-j)){
                    cout<<j<<" "<<2*k-j<<"\n";
                    break;
                }
            }            
        }
    }
}
