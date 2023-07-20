vector<int> countingSort(vector<int> arr) {
    vector<int> results(100, 0);
    for(int x: arr){
        results[x] += 1;
    }
    return results;
}