#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string a,b;
    cin>>t>>a>>b;
    int w=0;
    for(int i=0;i<t;i++){
        if(a[i]=='C' and b[i]=='C') w++;
    }
    cout<<w<<"\n";
}
