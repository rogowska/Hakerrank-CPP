#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string gridChallenge(vector<string> grid) {
    
    for(string &row: grid){
        sort(row.begin(), row.end());
    }
    
    for(long unsigned int i = 0; i<grid.size(); i++){
        for(long unsigned int j = 0; j<grid.size()-1; j++){
            if(grid[j][i] > grid[j+1][i])
                return "NO";
    }
    }
    return "YES";
    
}

int main(){
    vector<string> grid = {"agfd", "ssgt", "ksow", "owks"};
    cout<<gridChallenge(grid);
}