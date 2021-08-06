#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int maxx=0, minx=102, maxy=0, miny=102;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int pos=s.find(',');
        int a=stoi(s.substr(0,pos)), b=stoi(s.substr(pos+1,s.size()-pos-1));
        maxx=max(maxx, a);
        minx=min(minx, a);
        maxy=max(maxy, b);
        miny=min(miny, b);
    }
    cout<<minx-1<<","<<miny-1<<"\n";
    cout<<maxx+1<<","<<maxy+1<<"\n";
}
