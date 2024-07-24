bool is_ascending(int array[], int n){
    bool is_increasing = true; 

    for(int i = 0; i<n-1; i++){
        if(array[i] > array[i+1] ){
            is_increasing = false; 
        }
    }

    if(is_increasing && n>0){
        return true;
    }

    return false; 

}