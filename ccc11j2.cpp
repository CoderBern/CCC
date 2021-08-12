#include <bits/stdc++.h>

using namespace std;

int main() {
    int h,m;
    cin>>h>>m;
    int i,A;
    for(i=1;i<=m;i++){
        A=-6*pow(i,4)+h*pow(i,3)+2*pow(i,2)+i;
        if(A<=0) break;
    }
    if(i>m) cout<<"The balloon does not touch ground in the given time.\n";
    else cout<<"The balloon first touches ground at hour:\n"<<i<<"\n";
}
