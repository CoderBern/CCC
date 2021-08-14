#include <bits/stdc++.h>

using namespace std;

int main() {
    string city;
    int tmp;
    int lowest=300;
    string answer;
    while(true){
        cin>>city>>tmp;
        if(tmp<lowest){
            answer=city;
            lowest=tmp;
        }
        if(city=="Waterloo") break;
    }
    cout<<answer<<"\n";
}
