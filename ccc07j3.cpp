#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={
        100 , 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000
    };
    int t,tmp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>tmp;
        arr[tmp-1]=0;
    }
    int sum=0,avg;
    sum=accumulate(arr,arr+10,sum);
    avg=sum/(10-t);
    int a;
    cin>>a;
    if(avg<a) cout<<"deal";
    else cout<<"no deal";
}
