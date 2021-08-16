#include <bits/stdc++.h>

using namespace std;

struct animal{
        int x;
        int y;
};

bool comp(animal a, animal b){
    if(a.x==b.x) return a.y<b.y;
    else return a.x<b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,n;
    cin>>l>>n;

    animal a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a, a+n, comp);
    
    int w=a[0].x, last=a[0].y;
    for(int i=1;i<n;i++){
        if(a[i].x>last){
            w=max(w, a[i].x-last);
            last=a[i].y;
        } else {
            last=max(last, a[i].y);
        }
    }
    w=max(w, l-last);
    cout<<w<<"\n";
}
