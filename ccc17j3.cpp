#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1,y1,x2,y2,t;
    cin>>x1>>y1>>x2>>y2>>t;
    
    int dist=abs(x1-x2)+abs(y1-y2);
    if(t<dist) cout<<"N\n";
    else if(t%2==0 and dist%2!=0) cout<<"N\n";
    else if(t%2!=0 and dist%2==0) cout<<"N\n";
    else cout<<"Y\n";
}
