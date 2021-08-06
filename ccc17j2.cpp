#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,n;
    cin>>x>>n;
    int sum=x;
    for(int i=0;i<n;i++){
        x*=10;
        sum +=x;
    }
    cout<<sum<<"\n";
}
