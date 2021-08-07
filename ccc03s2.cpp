#include <bits/stdc++.h>

using namespace std;

string vowel[]={"a","e","i","o","u"};

string rhyme(string s){
    int pos[5], w=0;
    for(int i=0;i<5;i++){
        pos[i]=s.rfind(vowel[i]);
        w=max(w, pos[i]);
    }
    return s.substr(w, s.size()-w);
}

int main() {
    int n;
    cin>>n;
    cin.ignore(256, '\n');
    string str[4];
    for(int j=0;j<n;j++){
        for(int i=0;i<4;i++){
            getline(cin, str[i]);
            int l=str[i].size();
            int pos_space=str[i].rfind(" ");
            str[i]=str[i].substr(pos_space+1,l-pos_space-1);
            for(int a=0;a<str[i].size();a++) str[i][a]=tolower(str[i][a]);
            str[i]=rhyme(str[i]);
        }
        if(str[0]==str[1] and str[1]==str[2] and str[2]==str[3]) cout<<"perfect\n";
        else if(str[0]==str[1] and str[2]==str[3]) cout<<"even\n";
        else if(str[0]==str[2] and str[1]==str[3]) cout<<"cross\n";
        else if(str[0]==str[3] and str[1]==str[2]) cout<<"shell\n";
        else cout<<"free\n";
    }
}
