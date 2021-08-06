#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int w=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i+j==10) w++;
        }
    }
    if(w==1) cout<<"There is "<<w<<" way to get the sum 10.\n";
    else cout<<"There are "<<w<<" ways to get the sum 10.\n";
}
