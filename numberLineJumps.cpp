string kangaroo(int x1, int v1, int x2, int v2) {
    float y = abs(x2-x1);
    y /= abs(v1-v2);
    
    if((x2>x1 && v2>v1) || (x1 != x2 && v1 == v2) || (floor(y) != y)){
        return "NO";
    }
    
    return "YES";
}