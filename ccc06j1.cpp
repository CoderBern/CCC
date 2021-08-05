#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int aa[]={461,431,420,0}, bb[]={100,57,70,0},cc[]={130,160,118,0},dd[]={167,266,75,0};
    cout<<"Your total Calorie count is "<<aa[a-1]+bb[b-1]+cc[c-1]+dd[d-1]<<".\n";
}
