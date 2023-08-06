int countingValleys(int steps, string path) {
    int level = 0;
    int valley_counter = 0;
    for(int step = 0; step<steps; step++){
        if(path[step] == 'D'){
            level--;
        }
        if(path[step] == 'U'){
            level++;
        }
        if(level<0){
            valley_counter++;
            while(level<0){
                step++;
                if(path[step] == 'D'){
                    level--;
                }
                if(path[step] == 'U'){
                    level++;
                }
            }
        }
    }
return valley_counter;
}