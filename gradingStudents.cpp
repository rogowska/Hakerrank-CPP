vector<int> gradingStudents(vector<int> grades) {
    vector<int> after_rounding;
    for(int grade: grades){
        if((grade%5)>=3 && grade>=38){
            grade += 5 - grade%5; 
        }
        after_rounding.push_back(grade);
        }
    return after_rounding;
}