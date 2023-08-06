string catAndMouse(int x, int y, int z) {
int cat_A_distance = abs(x-z);
int cat_B_distance = abs(y-z);

if(cat_A_distance == cat_B_distance){
    return "Mouse C";
}
else if(cat_A_distance > cat_B_distance){
    return "Cat B";
}
return "Cat A";

}