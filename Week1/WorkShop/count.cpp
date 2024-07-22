#include <iostream>

int count(int array[], int n){
    int number_of_even = 0; 

    for(int i = 0; i<n; i++){
        if(array[i] % 2 == 0){
            number_of_even++; 
        }
    }
    return number_of_even; 
}


int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}