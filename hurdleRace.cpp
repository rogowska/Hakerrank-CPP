int hurdleRace(int k, vector<int> height) {
    int potions = 0;
    int jump_height = potions + k;
    int biggest = *max_element(height.begin(), height.end());
    
    if(biggest > jump_height){
        potions = biggest - jump_height;
    }
    return potions;

}