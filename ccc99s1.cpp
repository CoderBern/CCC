#include <bits/stdc++.h>
using ll=long long;
using namespace std;

string highcards[]={"jack", "queen", "king", "ace"};

bool high(string s){
    return find(highcards, highcards+4, s)!=highcards+4; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=52;
    string card[n];
    for(int i=0;i<n;i++){
        cin>>card[i];
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        bool flag=true;
        if(card[i]=="ace" and i<n-4){
            for(int j=1;j<=4;j++){
                if(high(card[i+j])) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                if(i%2==0) {
                    a+=4;
                    cout<<"Player A scores "<<4<<" point(s).\n";
                }
                else {
                    b+=4;
                    cout<<"Player B scores "<<4<<" point(s).\n";
                }
            }
        } else if(card[i]=="king" and i<n-3){
            for(int j=1;j<=3;j++){
                if(high(card[i+j])) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                if(i%2==0) {
                    a+=3;
                    cout<<"Player A scores "<<3<<" point(s).\n";
                }
                else {
                    b+=3;
                    cout<<"Player B scores "<<3<<" point(s).\n";
                }
            }
        } else if(card[i]=="queen" and i<n-2){
            for(int j=1;j<=2;j++){
                if(high(card[i+j])) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                if(i%2==0) {
                    a+=2;
                    cout<<"Player A scores "<<2<<" point(s).\n";
                }
                else {
                    b+=2;
                    cout<<"Player B scores "<<2<<" point(s).\n";
                }
            }
        } else if(card[i]=="jack" and i<n-1){
            for(int j=1;j<=1;j++){
                if(high(card[i+j])) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                if(i%2==0) {
                    a+=1;
                    cout<<"Player A scores "<<1<<" point(s).\n";
                }
                else {
                    b+=1;
                    cout<<"Player B scores "<<1<<" point(s).\n";
                }
            }
        }
    }
    cout<<"Player A: "<<a<<" point(s).\n";
    cout<<"Player B: "<<b<<" point(s).\n";
}
