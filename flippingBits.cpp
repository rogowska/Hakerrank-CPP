#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long flippingBits(long n) {
    vector<int> binary;
    long result = 0;
    
    while(n > 0){
        if(n % 2 == 0){
            binary.push_back(1);
        }
        else{
            binary.push_back(0);
        }
        floor(n/2);
    }
    
    while(binary.size() != 32){
        binary.push_back(1);
    }
    
    for(int i = 0; i<32; i++){
        if(binary[i] == 1){
            result += pow(2, i);
        }
    }

    return result;
}
