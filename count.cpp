#include <iostream>

int count(int array[], int number){
    int number_of_even = 0; 

    for(int i = 0; i<number; i++){
        if(array[i] % 2 == 0 ){
            number_of_even++; 
        }
    }

    return number_of_even; 
}