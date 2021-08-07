#include <bits/stdc++.h>

using namespace std;

int arr[10][10];
// format requirement is not strict
int main() {
    int a,b;
    cin>>a>>b;
    int row=4,col=4;
    
    arr[row][col]=a;

    int t=1,direction=1;
    bool flag=true;

    while(flag){
        for(int i=1; i<=t;i++){
            row +=direction;
            
            a++;
            if(a>b) {flag=false;break;}

            arr[row][col]=a;
        }

        for(int i=1; i<=t;i++){
            col +=direction;
            a++;
            if(a>b) {flag=false;break;}

            arr[row][col]=a;
        }    
        t++;
        direction = direction *(-1);

    }
    
   
   
    int i,j;
    for(i=0; i<10;i++){
        for(j=0; j<10; j++){
            if(arr[i][j]==0) cout<<"   ";
            else cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
   
}
