vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> results;
    int value;
    
    for(int idx: queries){

        idx = (a.size()*100000 + (idx - k))% a.size();
        value = a[idx];
        results.push_back(value);
    }
    return results;
}