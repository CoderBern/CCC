#include <iostream>

using namespace std;
// 7 - 10 and 15 -19
int main() {
    string time;
    cin>>time;
    int hour,minute, mins;
    hour=stoi(time.substr(0,2));
    minute=stoi(time.substr(3,2));
    mins=hour*60+minute;

    int w,diff;
    if(mins>5*60 and mins< 6*60+30){
        diff= mins+120 - 420;
        diff *=2;
        w=420 + diff;
    } else if(mins>=390 and mins<420){
        diff = 210;
        w=mins+diff;
    } else if (mins>=7*60  and mins<10*60){
        w = mins+240;
        if(w>600) w=600+(w-600)/2; 
    } else if (mins>13*60 and mins<15*60){
        diff= mins+120 - 15*60;
        diff *=2;
        w=15*60 + diff;        
    } else if(mins>=15*60 and mins<19*60){
        w=mins+240;
        if(w>19*60) w=19*60 + (w-19*60)/2;
    } else w=mins+120;
    
    w%=24*60;
    minute = w%60;
    hour = (w- minute)/60;
    
    string wmin,whour;
    if(minute<10) wmin="0"+to_string(minute);
    else wmin = to_string(minute);
    if(hour<10) whour="0"+to_string(hour);
    else whour=to_string(hour);
    cout<<whour<<":"<<wmin<<"\n";
}
