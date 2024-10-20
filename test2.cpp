//Test constructor in the array: 
#include<iostream>
using namespace std; 

class IdGenerator{
    public: 
        IdGenerator(int initialId){id = initialId;}
        IdGenerator(string initialId){id = stoi(initialId);}
        IdGenerator(): IdGenerator(10){}
        void setID(int id){id = id; }
        int getID(){return id; }
        ~IdGenerator(){}
    private: 
        int id;
};

int main(){
    IdGenerator* id = new IdGenerator[3]{0,2,123}; 
    cout << (id+1)->getID() << endl; 
    delete[] id; 
    return 0; 
}