#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int diff=b-a;
    if(diff<=0) cout<<"Congratulations, you are within the speed limit!\n";
    else if(diff<=20) cout<<"You are speeding and your fine is $"<<100<<".\n";
    else if(diff<=30) cout<<"You are speeding and your fine is $"<<270<<".\n";
    else cout<<"You are speeding and your fine is $"<<500<<".\n";
}
