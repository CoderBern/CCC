#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    
    
    int tmp, score[n], worst[n];
    for(int i=0;i<n;i++) {
        score[i]=0;
        worst[i]=0;
        
    }
    
    for(int i=0;i<k;i++){
        multimap <int,int> m;
        for(int j=0;j<n;j++){
           cin>>tmp;
           score[j]+=tmp;
           m.insert({score[j], j});
           
        }

        int last_score = m.rbegin()->first;
        int last_rank = 0;
        int rank=0;
        for(auto itr=next(m.rbegin());itr!=m.rend();itr++){
            rank++;
            if(itr->first==last_score) worst[itr->second]=max(worst[itr->second], last_rank);
            else {
                worst[itr->second] = max(worst[itr->second], rank);
                last_score=itr->first;
                last_rank=rank;
            }
        }
    }
    
    multimap <int,int> final_rank;
    for(int i=0;i<n;i++){
        final_rank.insert({score[i],i});
    }
    
    set <int> w;
    int first_score=final_rank.rbegin()->first, first_player=final_rank.rbegin()->second;
    w.insert(first_player);
    
    for(auto itr=next(final_rank.rbegin()); itr!=final_rank.rend();itr++){
        if(itr->first == first_score) w.insert(itr->second);
        else break;
    }
    for(int i:w) cout<<"Yodeller "<<i+1<<" is the TopYodeller: score "<<score[i]<<", worst rank "<<worst[i]+1<<"\n";
}
