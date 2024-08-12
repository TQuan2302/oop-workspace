#include<iostream>
using namespace std; 

extern int *readNumbers();
void printNumbers(int *numbers, int length); 
bool equalsArray(int *numbers1, int *numbers2, int length); 


int main(){
    cout << "First array input: " << endl;
    
    int* array1 = readNumbers(); 

    cout << "First array input: " << endl;
    int* array2 = readNumbers(); 
    cout << equalsArray(array1, array2, 10) << endl; 

    delete[] array1; 
    delete[] array2;


    return 0;
}