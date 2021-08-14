#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(true){
        cin>>n;
        if(n==0) break;
        int sum=0;
        for(int i=1;i<=n;i++){
            int l=pow(n*n-i*i,0.5);
            sum+=(l*2+1)*2;
        }
        sum+=2*n+1;
        cout<<sum<<"\n";
    }
}
