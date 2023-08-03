int getTotalX(vector<int> a, vector<int> b) {
    int counter = 0;
    int flag = 1;
    
    int max_ = *max(b.begin(), b.end());
    int min_ = *min(a.begin(), a.end());
    
    for(int i = min_; i<=max_; i++){
        
        for(int element: a){
            if(i%element != 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            for(int element: b){
            if(element%i != 0){
                flag = 0;
                break;
            }
        }
        }
        if(flag)
            counter++;
            
        flag = 1;
    }
    return counter;

}