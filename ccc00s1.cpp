#include <bits/stdc++.h>

using namespace std;

int main() {
    int jar;
    cin>>jar;
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int brr[]={35,100,10}, crr[]={30,60,9};
    int t=0,tmp;
    while(jar>0){
        t++;
        jar--;
        tmp=(t-1)%3;
        arr[tmp]++;
        arr[tmp]%=brr[tmp];
        if(arr[tmp]==0) jar+=crr[tmp];
    }
    cout<<"Martha plays "<<t<<" times before going broke.\n";
}
