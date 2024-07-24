bool is_descending(int array[], int n){
    bool is_decreasing = true; 

    for(int i = 0; i<n-1; i++){
        if(array[i] < array[i+1] ){
         is_decreasing = false; 
        }
    }

    if (is_decreasing && n>0){
        return true;
    }

    return false; 

}