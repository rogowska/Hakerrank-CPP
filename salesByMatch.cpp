int sockMerchant(int n, vector<int> ar) {
    int pair_num = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; ar[i]>0 && j<n; j++){
            if(ar[i] == ar[j]){
                pair_num++;
                ar[j] = -1;
                break;
            }
        }
    }
    return pair_num;

}