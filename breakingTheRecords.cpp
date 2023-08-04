#include <vector>
#include <iostream>

using namespace std;

vector<int> breakingRecords(vector<int> scores){
    vector<int> records(2, 0);
    int min = scores[0];
    int max = scores[0];
    
    for(int score: scores){
        if(score<min){
            min = score;
            records[1]++;
        }
        if(score>max){
            max = score;
            records[0]++;
        }
    }
    return records;
}

int main(){
    vector<int> data = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    vector<int> results = breakingRecords(data);
}