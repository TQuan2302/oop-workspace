#include<iostream>
using namespace std; 

extern int *readNumbers();
void printNumbers(int *numbers, int length); 
bool equalsArray(int *numbers1, int *numbers2, int length); 

int *reverseArray(int *numbers1,int length);

int main(){
    int* array = readNumbers(); 
    int* result = reverseArray(array, 10); 
    cout << equalsArray(array, result, 10);
    delete[] array; 
    delete[] result; 

    return 0; 
}
