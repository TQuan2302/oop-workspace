#include<iostream>
using namespace std;

class Wallet{
    public:
        Wallet(int val){value = new int(val); }
        Wallet():Wallet(10){}
        void setValue(int val){*value = val; }
        int getValue(){return *value; }
        ~Wallet(){delete value;} 
    private: 
        int* value; 
};

int main(){
    
    int numberInside = 999; 

    {//Inside can use outside, outside can not use inside. 
        Wallet w; 
        w.setValue(404); 
        cout << numberInside << endl; 
        int numberForOutside = 123; 
    }
    cout << numberForOutside << endl; //Not in the outside scope so can not use 

    cout << "Done with main" << endl; 
    return 0; 
}