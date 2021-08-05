#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(true){
        cin>>n;
        if(n==0) break;
        int a=pow(n,0.5);
        while(true){
            if(n%a==0){
                cout<<"Minimum perimeter is "<<(a+n/a)*2<<" with dimensions "<<a<<" x "<<n/a<<"\n";
                break;
            } else{
                a--;
            }
        }
    }
}
