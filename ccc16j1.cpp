#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char tmp;
    int w=0;
    for(int i=0;i<6;i++){
        cin>>tmp;
        if(tmp=='W') w++;
    }
    if(w>=5) cout<<1<<"\n";
    else if(w>=3) cout<<2<<"\n";
    else if(w>=1) cout<<3<<"\n";
    else cout<<-1<<"\n";
}
