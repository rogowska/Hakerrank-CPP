int birthday(vector<int> s, int d, int m) {
    int counter = 0;
    int sum = 0;
    
    for(int i = 0; i<=s.size()-m; i++){
        for(int j = 0; j < m; j++){
            sum += s[i+j];
        }
        if(sum == d){
            counter++;
        }
        sum = 0;
    }
    return counter;
}