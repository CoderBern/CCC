#include <iostream>

using namespace std;

int main() {
    int k;
    string s;
    cin>>k>>s;
    char c;
    int S;
    for(int i=0;i<s.size();i++){
        S=3*(i+1)+k;
        S=S%26;
        c=s[i]-S;
        if(c<'A') c+=26;
        cout<<c;
    }
    cout<<"\n";
}
