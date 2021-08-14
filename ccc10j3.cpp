#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    map <char, int> m;
    m['A']=0;
    m['B']=0;
    while(1){
        getline(cin,str);
        if(str=="7")  break;
        if(str[0]=='2'){
            cout<<m[str[2]]<<"\n";
        }
        else if(str[0]=='1'){
            m[str[2]]=stoi(str.substr(4,str.size()-4));
        }
        else if(str[0]=='3'){
            m[str[2]]+=m[str[4]];
        }
        else if(str[0]=='4'){
            m[str[2]]*=m[str[4]];         
        }
        else if(str[0]=='5'){
            m[str[2]]-=m[str[4]];        
        }  
        else if(str[0]=='6'){
            m[str[2]]/=m[str[4]];        
        }
    }
    
}
