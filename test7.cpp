#include<iostream>
#include<utility>
#include<tuple>
using namespace std; 

int main(){
    int i = 1; 
    tuple<int, string> record(1,"aaaa");
    cout << get<i>(record) << endl; 
}