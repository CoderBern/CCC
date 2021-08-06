#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    double arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    double w=DBL_MAX;
    for(int i=1;i<t-1;i++){
        w=min(w, (arr[i+1]-arr[i-1])/2);
    }
    printf("%.1f\n",w);
}
