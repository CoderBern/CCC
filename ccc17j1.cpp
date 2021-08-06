#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,y;
    cin>>x>>y;
    
    if(x>0 and y>0) cout<<"1\n";
    else if(x<0 and y>0) cout<<"2\n";
    else if(x<0 and y<0) cout<<"3\n";
    else cout<<"4\n";
    
}
