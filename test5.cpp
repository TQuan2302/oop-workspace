#include<iostream>
using namespace std; 

class a{
    public:
        int inA = 120; 
        a(){
            inA = 120; 
        }
};
class b: public a{
    public:
        int inB = 1; 
};

int main(){
    a newA; 
    a newA2 = newA; 
    cout << newA2.inA; 
}