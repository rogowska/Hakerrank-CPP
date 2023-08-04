void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    int anna_payment;
    
    for(int i = 0; i<bill.size(); i++){
        if(i == k){
            continue;
        }
        else{
            sum += bill[i];
        }
    }
    
    anna_payment = sum/2;
    
    if(anna_payment == b){
        cout<<"Bon Appetit";
    }
    else{
        cout<<b-anna_payment;
    }
    
}