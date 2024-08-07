double* duplicateArray(double* array, int size){
    double* result = new double[size]; 
    for(int i = 0; i< size; i++){
        result[i] = array[i]; 
    }
    return result;
}