#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;
    char tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp==arr[i]) sum++;
    }
    cout<<sum<<"\n";
}
