#include <bits/stdc++.h>

using namespace std;
int arr[101][101];

bool check(int n){
    for(int i=0;i<n-1;i++){
        if(arr[0][i+1]<arr[0][i] or arr[i+1][0]<arr[i][0]) {
            return false;
        }
    }
    return true;
}

void turn(int n){
    int brr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[n-j-1][i];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=brr[i][j];
        }
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    while(true){
        if(check(n)) break;
        turn(n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
