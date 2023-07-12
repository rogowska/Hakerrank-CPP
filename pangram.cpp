string pangrams(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(char x: s){
        if(isupper(x)){
        x = tolower(x);
        }
        alphabet.erase(remove(alphabet.begin(), alphabet.end(), x), alphabet.end());
    }
    if(alphabet == ""){
        return "pangram";
    }
    else{
        return "not pangram";
    }

}