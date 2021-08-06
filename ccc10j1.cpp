#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int w=0;
    for(int i=0;i<=n/2;i++){
        if(n-i<=5) w++;
    }
    cout<<w<<"\n";

}
