#include <string>
#include <vector>
#include <iostream>

using namespace std;


string balancedSums(vector<int> arr) {
    int sum_left = 0;
    int sum_right = 0;
    int sum = 0;

    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }
    for(int i = 0; i<arr.size(); i++){
        sum_right = sum - sum_left - arr[i];
        if(sum_left == sum_right){
            return "YES";
        }
        sum_left += arr[i];
    }
    return "NO";
}


int main(){
    vector<int> arr = {1, 2, 3, 3};
    cout<<balancedSums(arr);
}