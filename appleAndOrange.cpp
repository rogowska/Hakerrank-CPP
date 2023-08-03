void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple_counter = 0;
    int orange_counter = 0;
    
    for(int apple: apples){
     if(a+apple>=s && a+apple<=t){
        apple_counter++;
     }
    }
    cout<<apple_counter<<endl;
    
    for(int orange: oranges){
     if(b+orange>=s && b+orange<=t){
        orange_counter++;
     }
    }
    cout<<orange_counter<<endl;

}