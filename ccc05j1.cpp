#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    double planA,planB;
    planA=max(0, a-100)*0.25+0.15*b+0.2*c;
    planB=max(0, a-250)*0.45+0.35*b+0.25*c;
    string w;
    if(planA<planB) w="Plan A";
    else w="Plan B";
    cout<<"Plan A costs "<<planA<<"\n";
    cout<<"Plan B costs "<<planB<<"\n";
    if(abs(planA-planB)<1e-9) cout<<"Plan A and B are the same price.\n";
    else cout<<w<<" is cheapest.\n";
}
