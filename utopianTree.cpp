int utopianTree(int n) {
    int period = 1;
    int height = 1;
    
    while(period != n + 1){
        if((period%2) == 1){
            height = height*2;
        }
        else if((period%2) == 0){
            height++;
        }
        period++;
    }
    
    return height;

}
