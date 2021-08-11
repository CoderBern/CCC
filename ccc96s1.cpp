#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int d=2, sum=1;
        while(d<pow(n,0.5)){
            if(n%d==0) sum+=d+n/d;

            d++;
        }
        if(d*d==n) sum+=d;

        if(sum==n) cout<<n<<" is a perfect number.\n";
        else if(sum<n) cout<<n<<" is a deficient number.\n";
        else cout<<n<<" is an abundant number.\n";
    }
}
