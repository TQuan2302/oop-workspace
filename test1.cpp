#include<iostream>
using namespace std; 

struct cat{
    string name; 
    int weight;

};

class dog{
    private: 
        int number; 
        bool is_alive; 
    public: 
        int getName(){
            return number; 
        }
        bool getIsAlive(){
            return is_alive; 
        }
}; 

int main(){
    // dog d; 
    // cout << d.getName() << endl; 
    // cout << d.getIsAlive() << endl; 

    // cat c; 
    // cout << c.name << endl; 
    // cout << c.weight << endl; 

    int* number = new int(); 

    float* test = new float; 

    int* number2 = new int;

    cout << *number << endl; 
    cout << *number2 << endl;

    return 0; 
}