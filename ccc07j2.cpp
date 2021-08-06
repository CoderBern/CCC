#include <bits/stdc++.h>

using namespace std;

int main() {
    map <string,string> m;
    m["CU"]="see you";
    m[":-)"]="I'm happy";
    m[":-("]="I'm unhappy";
    m[";-)"]="wink";
    m[":-P"]="stick out my tongue";
    m["(~.~)"]="sleepy";
    m["TA"]="totally awesome";
    m["CCC"]="Canadian Computing Competition";
    m["CUZ"]="because";
    m["TY"]="thank-you";
    m["YW"]="you're welcome";
    m["TTYL"]="talk to you later";
    string s;
    while(true){
        cin>>s;
        if(m[s]=="") cout<<s<<"\n";
        else cout<<m[s]<<"\n";
        if(s=="TTYL") break;
    }
}
