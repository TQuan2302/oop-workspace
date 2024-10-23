#include<iostream>
using namespace std; 
#include<tuple>

int main(){
    tuple<int ,string> name_tuple(123,"Hello World"); 
    cout << get<0>(name_tuple) << endl; 
    cout << tuple_size(name_tuple) << endl; 
    return 0; 
}