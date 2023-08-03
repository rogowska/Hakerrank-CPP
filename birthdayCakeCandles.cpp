int birthdayCakeCandles(vector<int> candles) {
    int counter = 1;
    sort(candles.begin(), candles.end());
    for(int i = candles.size()-1; i>=0; i--){
        if(candles[i-1]==candles[i]){
            counter++;
        }
        else{
            break;
        }
    }
    return counter;
}