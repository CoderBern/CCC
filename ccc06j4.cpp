#include <bits/stdc++.h>

using namespace std;

vector <pair<int, int>> v;
int arr[]={1,2,3,4,5,6,7};

int position(int x){
    auto itr=find(arr, arr+7, x);
    return itr-arr;
}

bool check(){
    for(int i=0;i<v.size();i++){
        if(position(v[i].first)>position(v[i].second)) return false;
    }   
    return true;
}

int main() {

    v.push_back({1,7});
    v.push_back({1,4});
    v.push_back({2,1});
    v.push_back({3,4});
    v.push_back({3,5});
    int a,b;
    while(true){
        cin>>a>>b;
        if(a==0 and b==0) break;
        v.push_back({a,b});
    }
    
    bool flag=false;
    do{
        if(check()){
            for(int i=0;i<7;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            flag=true;
            break;
        }
    }while(next_permutation(arr,arr+7));
    
    if(!flag) cout<<"Cannot complete these tasks. Going to bed.\n";      
}
