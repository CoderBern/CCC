#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    string s=to_string(n);
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    string s;
    while(true){
        n++;
        if(check(n)) break;
    }
    cout<<n<<"\n";
    
}
