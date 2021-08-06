#include <bits/stdc++.h>

using namespace std;

int main() {
    int m,d;
    cin>>m>>d;
    if(m<2) cout<<"Before\n";
    else if(m>2) cout<<"After\n";
    else if(d<18) cout<<"Before\n";
    else if(d>18) cout<<"After\n";
    else cout<<"Special\n";
}
