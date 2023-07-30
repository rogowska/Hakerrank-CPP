#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string isValid(string s) {
    bool remove = true;
    string answer = "NO";
    vector<int> occurance(25, 0);
    
    for(char x: s){
        occurance[x-97]++;
    }
    
    sort(occurance.begin(), occurance.end(), greater<int>());
    
    for(int i = occurance.size()-1; i>=0; i--){
        if(occurance[i]==0){
            continue;
        }
        else if(occurance[0] == occurance[i]){
            answer = "YES";
            break;
        }
        else if(occurance[i] - 1 == 0){
            if(remove){
                remove = false;
            }
            else{
                break;
            }
        }
        else if(occurance[0] - 1 == occurance[i]){
            if(remove){
                remove = false;
                occurance[0]--;
                sort(occurance.begin(), occurance.end(), greater<int>());}
            else{
                break;
            }
        }
        else{
            break;
        }
    }
    
    return answer;

}

int main(){
    cout<<isValid("a");
}