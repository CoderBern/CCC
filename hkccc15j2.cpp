#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int min_side=30000;
    int x1,y1,x2,y2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            min_side = min(min_side, max(abs(arr[i][0]-arr[j][0]), abs(arr[i][1]-arr[j][1])));
        }
    }
    cout<<min_side*min_side<<"\n";

}
