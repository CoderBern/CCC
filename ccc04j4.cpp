#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b,c="";
    getline(cin, a);
    getline(cin, b);
    for(char ch:b){
        if(isupper(ch)) c+=string(1,ch);
    }
    int n=a.size();
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=a[i]-'A';
    }
    for(int i=0;i<c.size();i++){
        int tmp=c[i]+arr[i%n];
        if(tmp>'Z') tmp-=26;
        c[i]=tmp;
    }
    cout<<c<<"\n";
}
