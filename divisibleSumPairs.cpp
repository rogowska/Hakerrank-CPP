int divisibleSumPairs(int n, int k, vector<int> ar) {
    int counter = 0;
    sort(ar.begin(), ar.end());
    for(int i = 0; i<n-1; i++){
        for(int j = i + 1; j<n; j++){
            if((ar[i] + ar[j]) % k == 0)
                counter++;
        }
    }
    return counter;
}