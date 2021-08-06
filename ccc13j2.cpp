#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch[]={'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
    string s;
    cin>>s;
    bool flag=true;
    for(char i:s){
        if(find(ch,ch+7,i)==ch+7){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
