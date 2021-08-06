#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int y,m,d;
    for(int i=0;i<t;i++){
        cin>>y>>m>>d;
        //birth day on or before 1989 2 27 is YES
        if(y<1989) cout<<"Yes\n";
        else if(y>1989) cout<<"No\n";
        else if(m<2) cout<<"Yes\n";
        else if(m>2) cout<<"No\n";
        else if(d<=27) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
