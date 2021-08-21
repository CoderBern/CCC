#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        int min_=1;
        stack <int> branch;
        branch.push(100001);
        
        bool flag = true;
        for(int j=n-1;j>=0;j--){
            if(arr[j]!=min_ and branch.top()!=min_) {
                if(arr[j]>branch.top()){
                    flag=false;

                    break;
                } else{
                    branch.push(arr[j]);
                }
            } else {
                if(arr[j]==min_) min_++;
                 else if(branch.top()==min_) {
                    branch.pop();
                    min_++;
                    j++;
                }
            } 
        }
        if(flag) cout<<"Y\n";
        else cout<<"N\n";
    }
    
}
