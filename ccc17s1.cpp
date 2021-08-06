#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a=0,b=0;
    int w=0;
    int arr[t],brr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        cin>>brr[i];
    }
    for(int i=0;i<t;i++){
        a+=arr[i];
        b+=brr[i];
        if(a==b) w=i+1;
    }
    cout<<w<<"\n";
}
