#include <bits/stdc++.h>

using namespace std;

int arr[3],sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,minutes,hours;
    cin>>n;
    minutes=n%100;
    hours=(n-minutes)/100;
    int hour_diff[] ={-3, -2, -1, 0, 1, 1};
    int min_diff[] ={0, 0, 0, 0, 0, 30};
    string city[] = {"Victoria","Edmonton","Winnipeg","Toronto","Halifax","St. John's"};
    cout<<n<<" in Ottawa\n";
    int h,m;
    for(int i=0;i<6;i++){
        h=0;
        m=minutes+min_diff[i];
        if(m>=60){
            m-=60;
            h=1;
        }
        
        h+=hours+hour_diff[i];
        if(h<0) h+=24;
        if(h>=24) h-=24;
        
        cout<<h*100+m<<" in "<<city[i]<<"\n";
    }
}
