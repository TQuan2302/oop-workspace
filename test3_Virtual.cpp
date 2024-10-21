#include<iostream>
using namespace std; 

class Sonic{
    public: 
        virtual void spinDash(){
            cout << "Cannot" << endl; 
        }

}; 

class SonicTwo: public Sonic{
    public: 
        // virtual void spinDash(){
        //     cout << "Whoosh" << endl; 
        // }
        void doSth(){
            cout << "STH" << endl; 
        }
};

// class SonicThree: public SonicTwo{
//     public: 
//         void spinDash(){
//             cout << "boom" << endl; 
//         }
// };

void test(Sonic* s){
    s->spinDash(); 
}

int main(){
    // SonicTwo s;
    // test(&s); 
    Sonic* array = new Sonic[2]{  Sonic(),   Sonic()}; 
    array[0].spinDash(); 
    return 0; 
}
