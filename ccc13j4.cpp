#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,c;
    cin>>t>>c;
    int arr[c];
    int tmp;
    for(int i=0;i<c;i++) {
        cin>>tmp;
        arr[i]=tmp;
    }
    sort(arr,arr+c);
    int sum=0, w=0;
    for(int i=0;i<c;i++){
        sum+=arr[i];
        if(sum>t) break;
        w++;
    }
    cout<<w<<"\n";
}
