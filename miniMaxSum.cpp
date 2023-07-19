#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    unsigned long long min = 0, max = 0; 
    sort(arr.begin(),arr.end());
    for(int i = 0; i<4; i++){
        min += arr[i];
        max += arr[i+1];
    }
    cout<<min<<" "<<max;
}