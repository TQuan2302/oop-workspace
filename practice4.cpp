#include<iostream>
using namespace std; 

double arrayMax(double* array, int n){
    double max = array[0]; 

    for(int i = 0; i<n ; i++){
        if(max < array[i]){
            max = array[i]; 
        }
    }
    return max; 
}

int main(){
    double array[] = {1.2,3.22,5.8,10.9};
    double number = arrayMax(array, sizeof(array)/sizeof(double)); 
    cout << number << endl; 
}