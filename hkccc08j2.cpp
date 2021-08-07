#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    string tmp;
    for(int i=0;i<t;i++){
        cin>>tmp;
        while(tmp.size()>1){
            int sum=0;
            for(char c:tmp){
                sum+=c-'0';
            }
            tmp=to_string(sum);
        }
        cout<<tmp<<"\n";
    }
}
