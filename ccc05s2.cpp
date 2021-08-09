#include <iostream>

using namespace std;

int main() {
    int c,r;
    cin>>c>>r;
    int posX=0, posY=0;
    int x,y;
    while(true){
        cin>>x>>y;
        if(x==0 and y==0) break;
        posX+=x;
        posY+=y;
        if(posX<0) posX=0;
        if(posX>c) posX=c;
        if(posY<0) posY=0;
        if(posY>r) posY=r;
        cout<<posX<<" "<<posY<<"\n";
    }
    
}
