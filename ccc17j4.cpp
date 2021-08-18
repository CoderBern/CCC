#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    for(int i=0; i<s.size()-2;i++){
        if(s[i+1]-s[i]!=s[i+2]-s[i+1]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map <int, int> m;
    int mins, hours, count_=0;
    for(int i=0;i<12*60;i++){
        mins = i%60;
        hours = ((i-mins)/60)%12;
        if(hours==0) hours=12;
        string s_mins;
        if(mins<10) s_mins="0"+to_string(mins);
        else s_mins=to_string(mins);
        string time=to_string(hours)+s_mins;
        if(check(time)){
            count_++;
            m[i]=count_;
        }
    }
    m[12*60-1]=count_;
    
    int n;
    cin>>n;
    int round, res;
    res=n%(12*60);
    round = (n-res)/(12*60);
    auto itr=m.lower_bound(res);
    int w;
    if(itr->first == res) w=round * m[12*60-1] + itr->second;
    else w = round * m[12*60-1] + itr->second-1;
    cout<<w<<"\n";
}
