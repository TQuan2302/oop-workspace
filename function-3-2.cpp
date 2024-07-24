#include <cmath>

int median_array(int array[], int n){

    if(n<1 || n%2 == 0){
        return 0; 
    }

    int median = 0; 

    //sort the array
    int tempt = 0; 

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array [j+1]){
                tempt = array[j];
                array[j] = array[j+1]; 
                array[j+1] = tempt; 
            }
        }
    }
    int middle = floor(n/2); 
    median = array[middle]; 
   return median; 
}