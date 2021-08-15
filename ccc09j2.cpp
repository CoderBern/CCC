#include <bits/stdc++.h>

using namespace std;

int arr[3],sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<3;i++) cin>>arr[i];
    cin>>sum;
    int count_=0;
    for(int a=0;a<=sum;a++){
        for(int b=0;b<=sum;b++){
            for(int c=0;c<=sum;c++){
                if(a*arr[0]+b*arr[1]+c*arr[2]<=sum and a+b+c>0){
                    cout<<a<<" Brown Trout, "<<b<<" Northern Pike, "<<c<<" Yellow Pickerel\n";
                    count_++;
                }
            }
        }
    }
    cout<<"Number of ways to catch fish: "<<count_<<"\n";
}
