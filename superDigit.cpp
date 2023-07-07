#include <iostream>

using namespace std;


int superDigit(string n, int k) {
    long sum = 0;
    
    if(n.size() == 1)
        return n[0] - '0';

    for(int i = 0; i<n.size(); i++)
    {
        sum = sum + n[i] - '0';
    }
    
    sum=sum*k;
    n = to_string(sum);

    if(n.size() == 1)
        return n[0] - '0';
        
    return superDigit(n, 1);
}

int superDigit2(string n, int k) {
    long super = 0;
    for(char& c: n)
        super+= c -'0';

    super *= k;
    if(super <= 9) return super;
    return superDigit2(to_string(super), 1);
}

int main(){
    std::cout<<superDigit2("148", 3);
}

