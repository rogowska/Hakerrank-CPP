#include <string>
#include <iostream>

using namespace std;

int superDigit(string n, int k){
    long superdigit = 0;
    for(char x: n){
        superdigit += x - '0';
    }
    superdigit *= k;
    if(superdigit > 9){
        return superDigit(to_string(superdigit), 1);}
    return superdigit;
}

int main(){
    string n = "148";
    int k = 3;
    cout<<superDigit(n, k);
}