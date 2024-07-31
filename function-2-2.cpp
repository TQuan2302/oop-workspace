#include <cmath>
int binary_to_int(int binary_digits[], int number_of_digits){
    int num_pow = number_of_digits-1; 
    int result = 0; 

    for(int i = 0; i<number_of_digits; i++){
        result = result + binary_digits[i]*pow(2,num_pow); 
        num_pow--; 
    }
    return result; 
}