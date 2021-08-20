#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int len = s.size(), pos=1, t=1;
        char c=s[0];
        while(true){
            if(pos==len) {
                cout<<t<<" "<<c;
                break;
            }
            if(s[pos]==c){
                t++;
            } else{
                cout<<t<<" "<<c<<" ";
                t=1;
                c=s[pos];
            }
            pos++;
        }
        cout<<"\n";
    }
}
