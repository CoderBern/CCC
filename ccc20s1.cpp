#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    map <double, double> m;
    for(int i=0;i<n;i++){
        double t, d;
        cin>>t>>d;
        m[t]=d;
    }
    double v=0, tmp;
    for(auto itr=m.begin(); itr!=m.end();itr++){
        
        if(next(itr)==m.end()) break;
        tmp=abs(next(itr)->second - itr->second)/(next(itr)->first - itr->first);
        if(tmp>v) v=tmp;
    }
    cout<<v<<"\n";
}
