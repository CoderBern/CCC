#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <string> v={"A","B","C","D","E"};
    string tmp;
    int b,n;
    
    while(true){
        cin>>b>>n;

        if(b==1){
            for(int j=0;j<n;j++)
            {
                tmp=v[0];
                v.erase(v.begin());
                v.push_back(tmp);
            }
        }
        
        if(b==2){
            for(int j=0;j<n;j++)
            {
                tmp=v[4];
                v.insert(v.begin(),tmp);
                v.pop_back();
            }
        }
        
        if(b==3){
            for(int j=0;j<n;j++)
            {
                swap(v[0],v[1]);
            }
        }
        
        if(b==4){
            for(int j=0;j<n;j++)
            {
                for(int i=0;i<4;i++) cout<<v[i]<<" ";
                cout<<v[4]<<"\n";
            }
        }
        
        if(b==4 and n==1) break;

    }

}
