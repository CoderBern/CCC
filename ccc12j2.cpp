#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d>c and c>b and b>a) cout<<"Fish Rising\n";
    else if(a>b and b>c and c>d) cout<<"Fish Diving\n";
    else if(a==b and b==c and c==d) cout<<"Fish At Constant Depth\n";
    else cout<<"No Fish\n";
}
