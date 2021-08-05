#include <bits/stdc++.h>

using namespace std;

int main() {
    int x,m;
    cin>>x>>m;
    int i;
    for(i=1;i<=m;i++){
        if(x*i%m==1){
            cout<<i<<"\n";
            break;
        }
    }
    if(i==m+1) cout<<"No such integer exists."<<endl;
    
}
