#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map <string, int> m ={
        {"S",0},
        {"M",1},
        {"L",2}
    };
    int j,a;
    cin>>j>>a;
    string jersey[j+1];
    bool flag[j+1];
    for(int i=1;i<=j;i++){
        cin>>jersey[i];
        flag[i]=true;
    }

    string s;
    int n;
    int w=0;
    for(int i=0;i<a;i++){
        cin>>s>>n;
        if(m[jersey[n]]>=m[s] and flag[n]){
            w++;
            flag[n]=false;
        }
    }
    cout<<w<<"\n";
}
