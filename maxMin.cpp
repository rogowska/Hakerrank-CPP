#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int maxMin(int k, vector<int> arr) {
    int unfairness = 1000000000;
    int starting_index = 0;

    sort(arr.begin(), arr.end());

    for(int i = 0; i<arr.size()-k+1; i++){
        if(arr[i+k-1]-arr[i]<unfairness){
            unfairness = arr[i+k-1]-arr[i];
            starting_index = i;
        }
    }
    
    return unfairness;
}

int main(){
    vector<int> arr = {100, 200, 300, 350, 400, 401, 402};
    cout<<maxMin(3, arr);
}