#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int n;
    char c;
    for(int i=0;i<t;i++){
        cin>>n>>c;
        cout<<string(n,c)<<"\n";
    }
}
