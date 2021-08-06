#include <iostream>

using namespace std;

int main() {
    string s[]={
        "*x*",
        " xx",
        "* *"
    };

    int k;
    cin>>k;
    string r[]={"","",""};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            r[i]+=string(k,s[i][j]);
        }
        for(int j=0;j<k;j++) cout<<r[i]<<"\n";
    }
}
