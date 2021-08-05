#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        if(i<(n+1)/2) tmp=i*2+1;
        else tmp= (n-i)*2-1;
        cout<<string(tmp,'*')+string(n*2-2*tmp,' ')+string(tmp,'*')<<"\n";
    }
}
