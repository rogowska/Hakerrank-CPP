vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> results(2, 0);
    for(int i =0; i<3; i++){
        if(a[i]<b[i]){
            results[1] += 1;
        }
        if(a[i]>b[i]){
            results[0] += 1;
        }
    }
    return results;

}