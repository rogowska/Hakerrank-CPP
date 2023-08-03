void staircase(int n) {
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(j<n-i){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
}