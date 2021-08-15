#include <bits/stdc++.h>
using ll=long long;
using namespace std;

/*
Symbol	    I	V	X	L	C	D	M
Base value	1	5	10	50	100	500	1000
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map <char,int> m={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    
    string s;
    cin>>s;
    int sum=0, d=1;
    for(int i=s.size()-1;i>=0;i=i-2){
        if(i<s.size()-1){
            if(m[s[i]]<m[s[i+2]]) d=-1;
            else d=1;
        }
        sum +=d*(m[s[i]]*(s[i-1]-'0'));
    }
    cout<<sum<<"\n";
}
