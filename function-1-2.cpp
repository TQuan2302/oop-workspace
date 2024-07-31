int is_identity(int array[10][10]){
    int is_i = 1; 
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            if (!(((i == j && array[i][j] == 1 ) || (i != j && array[i][j] == 0 )))){
                is_i = 0; 
            }
        }
    }
    return is_i; 
}