#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char vowel[]={'a','e','i','o','u'};
    string word;
    cin>>word;
    string w="";
    for(char c:word){
        if(find(vowel, vowel+5,c)!=vowel+5) w+=string(1,c);
        else {
            w+=string(1,c);
            int x=c-'a';
            if(x<=2) w+="a";
            else if(x<=6) w+="e";
            else if(x<=11) w+="i";
            else if(x<=17) w+="o";
            else w+="u";
            
            if(x<=2) w+=string(1,c+1);
            else if(c=='d') w+="f";
            else if(x<=6) w+=string(1,c+1);
            else if(c=='h') w+="j";
            else if(x<=12) w+=string(1,c+1);
            else if(c=='n') w+="p";
            else if(x<=18) w+=string(1,c+1);
            else if(c=='t') w+="v";
            else if(x<=24) w+=string(1,c+1);
            else w+="z";
        }
    }
    cout<<w<<"\n";
}
