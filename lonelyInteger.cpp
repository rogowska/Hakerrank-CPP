int lonelyinteger(vector<int> a) {
vector<int> results(100, 0);
int lonely = 0;
for(int x: a){
    results[x] += 1;
}
for(int i = 0; i <= results.size(); i++){
    if(results[i] == 1){
        lonely = i;
        break;
    }
}
return lonely;
}