#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i]<<" as "<<b[j]<<"\n";
        }
    }
}
