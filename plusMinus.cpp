void plusMinus(vector<int> arr) {
    float positive = 0; float negative = 0; float zero = 0; 
    int all = arr.size();
    for(int x: arr){
        if(x>0){
            positive++;
        }
        if(x==0){
            zero++;
        }
        if(x<0){
            negative++;
        }
    }
    positive = positive/all;
    zero = zero/all;
    negative = negative/all;
    cout<<setprecision(6)<<positive<<endl<<negative<<endl<<zero;
}