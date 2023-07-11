#include <vector>
#include <string>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> results(queries.size(), 0);
    
    for(string x: strings){
        for(int i = 0; i<queries.size(); i++){
            if(queries[i] == x){
                results[i] += 1;
            }
        }
    }
    return results;

}