#include <bits/stdc++.h>

using namespace std;

int r, c, n, posR, posC;
char ch[375][80], mv[30000], solution[375][80];
string status;
int count_;

void move(char movement){
    if(status=="UP"){
        if(movement=='F') posR--;
        if(movement=='L') status="LEFT";
        if(movement=='R') status="RIGHT";
    }
    else if(status=="LEFT"){
        if(movement=='F') posC--;
        if(movement=='L') status="DOWN";
        if(movement=='R') status="UP";
    }
    else if(status=="DOWN"){
        if(movement=='F') posR++;
        if(movement=='L') status="RIGHT";
        if(movement=='R') status="LEFT";
    }
    else if(status=="RIGHT"){
        if(movement=='F') posC++;
        if(movement=='L') status="UP";
        if(movement=='R') status="DOWN";
    }
}

bool check(){
    if(posR<0 or posR>=r or posC<0 or posC>=c) return false;
    if(ch[posR][posC]=='X') return false;
    return true;
}

void initialStatus(int x, int y, string s){
    posR=x;
    posC=y;
    status=s;
    count_=0;
    while(check()){
        if(count_==n){
            solution[posR][posC]='*';
            break;
        }
        move(mv[count_]);
        count_++;
    }
}

void printArr(char arr[375][80]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}

int main() {
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ch[i][j];
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mv[i];
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            solution[i][j]=ch[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            initialStatus(i, j, "UP");
            initialStatus(i, j, "LEFT");
            initialStatus(i, j, "DOWN");
            initialStatus(i, j, "RIGHT");
        }
    }
    printArr(solution);
}
