#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<", ";
    cout<<"\n";
}

int main() {
    int n,a,b;
    while(true){
        cin>>n;
        if(n==0) break;
        int arr[n-1];
        cin>>a;
        for(int i=0;i<n-1;i++){
            cin>>b;
            arr[i]=b-a;
            a=b;
        }
        //printArr(arr,n-1);
        a=arr[0];
        int w=n-1;
        for(int i=1;i<n-1;i++){
            if(arr[i]==a){
                bool flag=true;
                for(int j=i;j<n-1;j++){
                    if(arr[j]!=arr[j-i]){
                        flag=false;
                        break;
                    }
                }
                if(flag) {
                    w=i;
                    break;
                }
            } 
        }
        cout<<w<<"\n";
    }
}
