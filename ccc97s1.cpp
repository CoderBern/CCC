#include <bits/stdc++.h>

using namespace std;

int a,b,c;
string subject[20],verb[20], object[20];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        string tmp;
        getline(cin, tmp);
        for(int j=0;j<a;j++) getline(cin,subject[j]);
        for(int j=0;j<b;j++) getline(cin,verb[j]);
        for(int j=0;j<c;j++) getline(cin,object[j]);
        // sort(subject, subject+a);
        // sort(verb, verb+b);
        // sort(object, object+c);
        for(int x=0;x<a;x++){
            for(int y=0;y<b;y++){
                for(int z=0;z<c;z++){
                    cout<<subject[x]<<" "<<verb[y]<<" "<<object[z]<<".\n";
                }
            }
        }
        cout<<"\n";
    }
}
