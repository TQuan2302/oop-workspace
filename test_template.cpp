#include<iostream>
using namespace std; 

template<int T>

void print(){
    cout << T << endl; 
}

int main(){
    int i = 79;//Run time argument 
    print<i>(); //template argument must be known at compile time
    return 0;
}