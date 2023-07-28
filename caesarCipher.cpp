#include <string>
#include <iostream>

using namespace std;

string caesarCipher(string s, int k) {
string result = "";
k = k % 26;
for(char x: s){
    if(isalpha(x)){
        if(isupper(x)){
            if(x + k > 90)
                result += x - 26 + k;
             else{
                result += x + k;
        }
        }
        if(islower(x)){
            if(x + k > 122)
                result += x - 26 + k;
            else{
                result += x + k;
        }
        }
    }  
    else{
        result += x;}
}
return result;
}

int main(){
    cout<<caesarCipher("middle-Outz", 2);
}