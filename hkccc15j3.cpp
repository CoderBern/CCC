#include <bits/stdc++.h>

using namespace std;

bool arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        for(int a=1;a<=n;a++){
            arr[x][a]=true;
            arr[a][y]=true;
            int xx=x,yy=y;
            while(true){
                if(min(xx-1,yy-1)==0) break;
                xx--;
                yy--;
                arr[xx][yy]=true;
            }
            xx=x;yy=y;
            while(true){
                if(max(xx+1,yy+1)>n) break;
                xx++;
                yy++;
                arr[xx][yy]=true;
            }
            xx=x;yy=y;
            while(true){
                if(xx-1==0 or yy+1>n) break;
                xx--;
                yy++;
                arr[xx][yy]=true;
            }  
            xx=x;yy=y;
            while(true){
                if(xx+1>n or yy-1==0) break;
                xx++;
                yy--;
                arr[xx][yy]=true;
            }  
        }
    }
    int sum=0;
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n;y++){
            if(!arr[x][y]) sum++;
        }
    }
    cout<<sum<<"\n";
    

}
