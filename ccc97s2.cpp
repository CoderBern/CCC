#include <bits/stdc++.h>
using ll=long long;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a;
    
    for(int i=0;i<n;i++){
        vector <int> sum, deduct;
        cin>>a;
        bool flag=false;
        for(int d=1;d<sqrt(a);d++){
            if(a%d==0){
                int d1=d, d2=a/d;
                if(find(sum.begin(),sum.end(),d2-d1)!=sum.end() or find(deduct.begin(),deduct.end(), d1+d2)!=deduct.end()){
                    flag=true;
                    break;
                } else {
                    sum.push_back(d1+d2);
                    deduct.push_back(d2-d1);
                }
            }
        }
        if(flag) cout<<a<<" is nasty\n";
        else cout<<a<<" is not nasty\n";
    }
}
