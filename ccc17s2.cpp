#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n], brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    int j=0;
    if(n%2==0){
        for(int i=n/2-1;i>=0;i--){
            brr[j*2]=arr[i];
            brr[j*2+1]=arr[j+n/2];
            j++;
        }
    } else {
        for(int i=n/2;i>0;i--){
            brr[j*2]=arr[i];
            brr[j*2+1]=arr[j+n/2+1];
            j++;            
        }
        brr[j*2]=arr[0];
    }
    
    
    for(int i=0;i<n-1;i++){
        cout<<brr[i]<<" ";
    }
    cout<<brr[n-1]<<"\n";
}
