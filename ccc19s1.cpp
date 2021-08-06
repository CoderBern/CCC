#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[2][2]={{1,2},{3,4}};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='V'){
            swap(arr[0][0],arr[0][1]);
            swap(arr[1][0],arr[1][1]);
        } else{
            swap(arr[0][0],arr[1][0]);
            swap(arr[0][1],arr[1][1]);            
        }
    }
    cout<<arr[0][0]<<" "<<arr[0][1]<<"\n";
    cout<<arr[1][0]<<" "<<arr[1][1]<<"\n";
}
