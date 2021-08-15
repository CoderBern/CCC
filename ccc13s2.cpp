#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w,n;
    cin>>w>>n;
    int arr[n];
    int s=0,c=0,i;
    for(i=0;i<n;i++){
        cin>>arr[i];{
            c++;
            if(c==5){
                s-=arr[i-4];
                c=4;
            }
            s+=arr[i];
            if(s>w) break;
        }
    }
    cout<<i<<"\n";
}
