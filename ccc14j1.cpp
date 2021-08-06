#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and b==c and c==60) cout<<"Equilateral\n";
    else if(a+b+c==180 and (a==b or b==c or a==c)) cout<<"Isosceles\n";
    else if(a+b+c==180) cout<<"Scalene\n";
    else cout<<"Error\n";
}
