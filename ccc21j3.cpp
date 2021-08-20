#include <bits/stdc++.h>

using namespace std;

string arr[]={"right","left"};

int main() {
    string s, last;
    
    while(true){
        cin>>s;
        if(s=="99999") break;
        int turn = s[0]-'0'+s[1]-'0';
        if(turn !=0){
            last = arr[turn%2];
        } 
        cout<<last<<" "<<s.substr(2,3)<<"\n";
                    
    }
}
