#include<iostream>
using namespace std; 

class parent{
    private: 
        int privateNumber = 123; 
    protected:
        int protectedNumber = 124; 
    public: 
        int publicNumber = 125; 
        int getNumber(){
            return privateNumber; 
        }
};

class publicChild : public parent{
    int getPrivateNumber(){
        return protectedNumber; 
    }
};

int main(){
    publicChild:
    return 0; 
}