#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i=1000; i<=9999;i++){

        int sum=1;
        for(int d=2; d<sqrt(i);d++){
            if(i%d==0) sum+=d+i/d;
        }
        if((int)sqrt(i)*(int)sqrt(i)==i) sum+=sqrt(i);
        if(sum==i) cout<<i<<" ";
    }
    cout<<"\n";
    
    for(int i=100;i<=999;i++){
        int a=i%10;
        int b=((i-a)/10)%10;
        int c=(i-a-b*10)/100;
        if(i==pow(a,3)+pow(b,3)+pow(c,3)) cout<<i<<" ";
    }
}
