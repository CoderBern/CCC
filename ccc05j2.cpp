#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int w=0;
    for(int i=a;i<=b;i++){
        int c=1,d=0;
        while(true){
            if(d>4 or c>b) break;
            if(i%c==0) d+=1;
            c++;
        }
        if(d==4) w++;
    }
    cout<<"The number of RSA numbers between "<<a<<" and "<<b<<" is "<<w<<"\n";
}
