#include <bits/stdc++.h>

using namespace std;

int arr[10][10];

int rowSum(int i){
    int sum=0;
    for(int j=0;j<10;j++) sum+=arr[i][j];
    return sum;
}

int colSum(int i){
    int sum=0;
    for(int j=0;j<10;j++) sum+=arr[j][i];
    return sum;
}

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
    
    flag=true;
    int row_start, row_end=9, col_start, col_end=9;
    for(int i=0;i<10;i++){
        if(flag and rowSum(i)!=0){
            flag=false;
            row_start=i;
        } else if(!flag and rowSum(i)==0){
            flag=true;
            row_end=i-1;
        }
    }
    
    flag=true;
    for(int i=0;i<10;i++){
        if(flag and colSum(i)!=0){
            flag=false;
            col_start=i;
        } else if(!flag and colSum(i)==0){
            flag=true;
            col_end=i-1;
        }
    }
    
    int i,j;
    for(i=row_start; i<=row_end;i++){
        for(j=col_start; j<=col_end-1; j++){
            if(arr[i][j]==0) cout<<"   ";
            else cout<<arr[i][j]<<" ";
        }
        if(arr[i][j]==0) cout<<"  \n";
        else cout<<arr[i][j]<<"\n";
    }
   
}
