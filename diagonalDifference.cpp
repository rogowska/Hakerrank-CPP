int diagonalDifference(vector<vector<int>> arr) {
    int length = arr.size();
    int ltr = 0; int rtl = 0;
    for(int i =0; i<length; i++){
        ltr += arr[i][i];
        rtl += arr[i][length-i-1];
    }
    return abs(ltr-rtl);
}