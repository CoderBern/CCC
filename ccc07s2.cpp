#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,tmp;
    cin>>n;
    
    map <int,vector<int>> m;
    for(int i=0;i<n;i++) {
        vector <int> v;
        int volume=1;
        for(int j=0;j<3;j++) {
            cin>>tmp;
            v.push_back(tmp);
            volume*=tmp;
        }
        sort(v.begin(), v.end());
        m[volume]=v;
    }
    
    int mm;
    cin>>mm;
    int tm[3];
    for(int i=0;i<mm;i++){
        int volume=1, w=0;
        for(int j=0;j<3;j++) {
            cin>>tm[j];
            volume*=tm[j];
        }
        sort(tm,tm+3);
        for(auto itr=m.lower_bound(volume);itr!=m.end();itr++){
            if(itr->second[0]>=tm[0] and itr->second[1]>=tm[1] and itr->second[2]>=tm[2]){
                w=itr->first;
                break;
            }
        }
        if(w==0) cout<<"Item does not fit.\n";
        else cout<<w<<"\n";
    }
}
