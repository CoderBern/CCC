#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int time=-1;
    map <int, pair<int,pair<int,bool>>> m;
    string action;
    int a;
    for(int i=0;i<n;i++){
        cin>>action>>a;
        if(action=="W") {
            time+=a;
            time--;
            continue;
        } else {
            time++;
            if(action=="R"){
                if(m.find(a)==m.end()){
                    m[a].first=0;
                }
                m[a].second.first=time;
                m[a].second.second=false;
            } else {
                m[a].first +=time-m[a].second.first;
                m[a].second.second = true;
            }
        }
    }
    
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second.second.second==false) cout<<itr->first<<" "<<-1<<"\n";
        else cout<<itr->first<<" "<<itr->second.first<<"\n";
        
    }
    
}
