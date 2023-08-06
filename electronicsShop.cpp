#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int most_expensive = -1;
    for(int keyboard: keyboards){
        for(int drive: drives){
            if(keyboard+drive>most_expensive && keyboard+drive<=b)
                most_expensive = keyboard + drive;
        }
    }
    return most_expensive;
}

int main(){
    vector<int> keyboards = {3, 1};
    vector<int> drivers = {5, 2, 8};
    int b = 10;
    getMoneySpent(keyboards, drivers, b);
}