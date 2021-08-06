#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    arr[0]=0;
    int tmp, sum=0;
    for(int i=1;i<5;i++) {
        cin>>tmp;
        sum+=tmp;
        arr[i]=sum;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j<4) cout<<abs(arr[i]-arr[j])<<" ";
            else cout<<abs(arr[i]-arr[j])<<"\n";
        }
    }
}
