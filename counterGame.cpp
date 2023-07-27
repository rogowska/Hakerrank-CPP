string counterGame(long n) {
    int winner = 0;
    
    while(n != 1){
    if(ceil(log2(n)) == floor(log2(n))){
        n = n/2;
        winner++;
    }
    else{
        long a = log2(n);
        n -= pow(2, a);
        winner++;
    }
    }
    if(winner % 2 == 0){
        return "Richard";
    }
    else{
        return "Louise";
    }
}