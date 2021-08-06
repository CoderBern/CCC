#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    int tmp;
    vector <int> v;
    for(int i=0;i<t;i++){
        cin>>tmp;
        if(tmp==0) v.pop_back();
        else v.push_back(tmp);
    }
    int sum=0;
    sum=accumulate(v.begin(),v.end(),sum);
    cout<<sum<<"\n";
}
