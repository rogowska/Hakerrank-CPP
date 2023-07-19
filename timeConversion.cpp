#include <string>
#include <iostream>

using namespace std;

string timeConversion(string s) {
    if(s[0] == '1' && s[1] == '2'){
        if(s[8] == 'A'){
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if(s[8] == 'P'){
        s[0] += 1;
        s[1] += 2;
    }
    
    s.erase(8, 2);
    return s;
}

int main(){
    cout<<timeConversion("12:40:22AM");
}