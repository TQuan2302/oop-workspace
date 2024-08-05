#include<iostream>
using namespace std; 

void printArray(double* array, int n){
    for(int i = 0; i< n; i++){
        cout << array[i] << endl;
    }
}

int main(){
    double array[] = {1.2,2.14,3.15};
    printArray(array, sizeof(array)/sizeof(double));  

}