#include<iostream>
using namespace std; 

enum StarterChoices{
    bluebird,
    monke,
    tortle 
};

namespace hello{
enum StarterChoices2{
    bluebird,
    monke,
    tortle 
};}

int main(){
    hello::StarterChoices2 choice = hello::bluebird; 
    
    cout << choice << endl; 
    return 0;
}