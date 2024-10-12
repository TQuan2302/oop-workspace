#include<iostream>
using namespace std; 


class IdGenerator{
    public:
        IdGenerator (int initialID){id = initialID;}
        IdGenerator (): IdGenerator(10) {cout << "idAdded ";}
        void setID(int id){id = id; }
        int getID(){return id; }
        ~IdGenerator(){cout << "idRemoved "; }   //Not called as IdGenerator is in the heap and no "delete" in IdVerifier destructor. 

    private:
        int id; 
}; 


class IdVerifier{
    public:
        IdVerifier (){
            IdGenerator generator[2]; 
            cout << "idVerified "; 
        }
        ~IdVerifier(){
            cout << "idUnVerified " << endl; 
        }
    // private:
    //     IdGenerator generator; 


}; 

int main(){
    IdVerifier verifier; 
    
    return 0; 
}