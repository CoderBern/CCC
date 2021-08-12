#include <bits/stdc++.h>

using namespace std;



void split(string str, string d){
    vector <string> words;
    int pos;
    string tmp;
    while((pos=str.find(d))!=string::npos){
        tmp=str.substr(0,pos);
        if(tmp.size()==4) tmp="****";
        words.push_back(tmp);
        str=str.substr(pos+1, str.length()-pos-1);
    }
    if(str.size()==4) str="****";
    words.push_back(str);
    for(pos=0;pos<words.size()-1;pos++) cout<<words[pos]<<" ";
    cout<<words[pos]<<"\n";
}


int main() {
    int n;
    cin>>n;
    cin.ignore();
    string str;
    for(int i=0;i<n;i++){
        getline(cin,str);
        split(str, " ");
        
    }
}
