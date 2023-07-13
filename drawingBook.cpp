int pageCount(int n, int p) {
    int result;
    int half = n/2;

    if(p<=half)
        result = p/2;
    if(p>half)
        if((n-p == 1 && n%2 ==1) || n-p != 1)
            result = (n-p)/2;
        else{
            result =(n-p)/2 + 1;
        } 
    return result;
}