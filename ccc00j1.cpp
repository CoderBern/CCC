#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;

    printf("Sun Mon Tue Wed Thr Fri Sat\n");
    string s="    ";
    
    int c=a;
    for(int i=1;i<a;i++) printf("    ");
    
    for(int i=1;i<=b;i++){
        printf("%3d",i);
        if(c%7==0 or i==b) printf("\n");
        else printf(" ");
        c++;
    }
}
