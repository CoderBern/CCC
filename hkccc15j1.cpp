#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    string arr[t], brr[t];
    for(int i=0;i<t;i++) cin>>arr[i];
    for(int i=0;i<t;i++) cin>>brr[i];
    
    int a=0,b=0;
    for(int i=0;i<t;i++){
        if((arr[i]=="rock" and brr[i]=="scissors") or (arr[i]=="paper" and brr[i]=="rock") or (arr[i]=="scissors" and brr[i]=="paper")) a++;
        else if(arr[i]==brr[i]) continue;
        else b++;
    }
    cout<<a<<" "<<b<<"\n";
}
