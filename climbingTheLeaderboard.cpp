#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    
    vector<int> placements(player.size());
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
    int rank = ranked.size()+1;
    int j = ranked.size()-1;
    
    for(int i=0;i<player.size();i++){
        while(player[i]>=ranked[j] ){
            if(rank==1){
                break;
            }
            else{
                j--;
                rank--;
            }
        }
        placements[i] = rank;
    }
        return placements;
}