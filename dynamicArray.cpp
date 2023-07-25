vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> results;
    int lastAnswer = 0;
    int idx;
    
    for(int i=0; i<queries.size(); i++){
        idx = ((queries[i][1]^lastAnswer)%n);
        if(queries[i][0] == 1){
            arr[idx].push_back(queries[i][2]);
        }
        if(queries[i][0] == 2){
            lastAnswer = arr[idx][queries[i][2]%arr[idx].size()];
            results.push_back(lastAnswer);
        }
    }
    return results;
}