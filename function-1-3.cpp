#include<iostream>
using namespace std; 

void count_digits(int array[4][4]){
    int count_list[10] = {0}; 
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            if(array[i][j] == 0){
                count_list[0]++; 
            }
            else if(array[i][j] == 1){
                count_list[1]++; 
            }
            else if(array[i][j] == 2){
                count_list[2]++; 
            }
            else if(array[i][j] == 3){
                count_list[3]++; 
            }
            else if(array[i][j] == 4){
                count_list[4]++; 
            }
            else if(array[i][j] == 5){
                count_list[5]++; 
            }
            else if(array[i][j] == 6){
                count_list[6]++; 
            }
            else if(array[i][j] ==7){
                count_list[7]++; 
            }
            else if(array[i][j] == 8){
                count_list[8]++; 
            }
            else if(array[i][j] == 9){
                count_list[9]++; 
            }
        }
    }

    for(int i = 0; i<10; i++){
        cout << i << ":" << count_list[i] << ";"; 
    }
}