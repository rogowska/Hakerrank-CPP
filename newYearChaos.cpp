#include <iostream>
#include <vector>

using namespace std;

void minimumBribes(vector<int> q) {
    int bribe_counter = 0;
    
 for(int i = q.size()-1; i>=0; --i){
     if(q[i] != i+1){
        if(i-1>= 0 && q[i-1]==i+1){
            bribe_counter++;
            swap(q[i], q[i-1]);
     }
        else if(i-2 >= 0 && q[i-2]==i+1){
            bribe_counter += 2;
            swap(q[i], q[i-2]);
            swap(q[i-1], q[i-2]);
     }
        else{
        cout<<"Too chaotic"<<endl;
         return;

     }
    }
 }
     cout<<bribe_counter<<endl;
}