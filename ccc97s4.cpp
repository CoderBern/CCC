#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        map <string, int> m;
        int count_=1;
        string s,w,sub;
        while(true){
            getline(cin, s);
            if(s=="") break;
            w="";
            while(true){
                int pos=s.find(" ");
                if(pos==-1) sub=s;
                else {
                    sub=s.substr(0,pos);
                    s=s.substr(pos+1, s.size()-pos-1);
                }

                if(m.find(sub)==m.end()){
                    w+=sub+" ";
                    m[sub]=count_;
                    count_++;
                } else{
                    w+=to_string(m[sub])+" ";
                }
                if(pos==-1) break;
            }
            w=w.substr(0,w.size()-1);
            cout<<w<<"\n";
        }
        cout<<"\n";
    }
}
