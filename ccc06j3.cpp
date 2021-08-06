#include <iostream>

using namespace std;

int main() {
    string s;
    int arr[]={1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,4,
                1,2,3,
                1,2,3,4
    };
    int brr[]={2,2,2,
                3,3,3,
                4,4,4,
                5,5,5,
                6,6,6,
                7,7,7,7,
                8,8,8,
                9,9,9,9
    };
    while(true){
        cin>>s;
        if(s=="halt") break;
        int w=0;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(brr[s[i]-'a']==l) w+=arr[s[i]-'a']+2;
            else w+=arr[s[i]-'a'];
            l=brr[s[i]-'a'];
        }
        cout<<w<<"\n";
    }
}
