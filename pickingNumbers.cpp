int pickingNumbers(vector<int> a) {
    int max_length = 0;
    vector<int> repetitions_counter(100, 0);
    
    sort(a.begin(), a.end());
    
    for(int number: a){
        repetitions_counter[number]++;
    }
    
    for(int i = 0; i<repetitions_counter.size()-2; i++){
        if((repetitions_counter[i] + repetitions_counter[i+1]) > max_length)
            max_length = repetitions_counter[i] + repetitions_counter[i+1];
    }
    return max_length;

}