#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main() {
    arr[54]=-35;
    arr[90]=-42;
    arr[99]=-22;
    arr[9]=25;
    arr[40]=24;
    arr[67]=19;
    int m,pos=1;
    while(true){
        cin>>m;

        if(pos==100){
            cout<<"You Win!\n";
            break;
        }
        if(m==0){
            cout<<"You Quit!\n";
            break;
        }
        if(pos+m>100) {
            m=0;
        }
        pos +=m;
        pos +=arr[pos];
        cout<<"You are now on square "<<pos<<"\n";
    }
}
