#include <bits/stdc++.h>

using namespace std;

int arr[10][10];

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m;
    cin>>m;
    int aa,bb,cc,dd;
    int w=INT_MAX,total=0;
    for(aa=0;aa<=m/a;aa++){
        for(bb=0;bb<=(m-aa*a)/b;bb++){
            for(cc=0;cc<=(m-aa*a-bb*b)/c;cc++){
                dd=(m-aa*a-bb*b-cc*c);
                if(dd%d!=0 or dd<0) continue;
                else {
                    dd=dd/d;
                    w=min(w, aa+bb+cc+dd);
                    cout<<"# of PINK is "<<aa<<" # of GREEN is "<<bb<<" # of RED is "<<cc<<" # of ORANGE is "<<dd<<"\n";
                    total++;
                }
            }
        }
    }
    cout<<"Total combinations is "<<total<<".\n";
    cout<<"Minimum number of tickets to print is "<<w<<".\n";
}
