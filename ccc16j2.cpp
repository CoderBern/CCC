#include <bits/stdc++.h>

using namespace std;

int arr[4][4];

int rowSum(int n){
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[n][i];
    }
    return sum;
}

int colSum(int n){
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[i][n];
    }
    return sum;
}

bool solve(){
    int sum=rowSum(0);
    for(int i=1;i<4;i++){
        if(rowSum(i)!=sum) return false;
    }
    for(int i=0;i<4;i++){
        if(colSum(i)!=sum) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    if(solve()) cout<<"magic\n";
    else cout<<"not magic\n";

}
