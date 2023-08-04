#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int migratoryBirds(vector<int> arr) {
    vector<int> birdtype_counter(5,0);
    
    for(int bird: arr){
        birdtype_counter[bird-1]++;
    }
    return 1 + distance(birdtype_counter.begin(), max_element(birdtype_counter.begin(), birdtype_counter.end()));
}

int main(){
    vector<int> data = {1, 4, 4, 4, 5, 3};
    migratoryBirds(data);
}